#!/Library/Frameworks/Python.framework/Versions/3.9/bin/python3

from __future__ import print_function
import sys
import datetime
import pickle
import os.path
import csv
import encodings
from googleapiclient.discovery import build
from google_auth_oauthlib.flow import InstalledAppFlow
from google.auth.transport.requests import Request


SCOPES = [
    'https://www.googleapis.com/auth/calendar',         # RW access to Calendars
    'https://www.googleapis.com/auth/calendar.events'   # RW access to Events
]

def main():
    creds = None
    # The file token.pickle stores the user's access and refresh tokens, and is
    # created automatically when the authorization flow completes for the first
    # time.
    ##################
    if os.path.exists('token.pickle'):
        with open('token.pickle', 'rb') as token:
            creds = pickle.load(token)
    # If there are no (valid) credentials available, let the user log in.
    if not creds or not creds.valid:
        if creds and creds.expired and creds.refresh_token:
            creds.refresh(Request())
        else:
            flow = InstalledAppFlow.from_client_secrets_file(
                'credentials.json', SCOPES)
            creds = flow.run_local_server(port=0)
        # Save the credentials for the next run
        with open('token.pickle', 'wb') as token:
            pickle.dump(creds, token)

    service = build('calendar', 'v3', credentials=creds)

    # import event data from events.csv file
    with open(sys.argv[1], 'r') as csvfile:
        reader = csv.reader(csvfile)
        next(reader, None)
        # iterate through csv file
        for line in reader:
            # create event object
            event = {
                'summary': line[0],
                # times should be in the format: '[year]-[month]-[date]T[24H]:[MIN]:[SEC]-05:00'    (UTC-5)
                'start': {
                    'dateTime': line[1],
                    'timeZone': 'America/Toronto'
                },
                'end': {
                    'dateTime': line[2],
                    'timeZone': 'America/Toronto'
                }
            }
            # call Google Calendar API to create each event
            event = service.events().insert(calendarId='primary', body=event).execute()


if __name__ == '__main__':
    main()
