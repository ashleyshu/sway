# Sway
A Debian GNU/Linux application that provides users with a personalized schedule based on their constraints. Integrates with Google Calendar so users can seamlessly adopt the functionality with their existing planner.

Currently schedules tasks through an earliest-due-date-first algorithm by default. 

## Prerequisites
1. Sign up for a [Google Developers](https://console.developers.google.com/) account if you do not already have one 
2. Select or create a new Google Cloud Project for Sway
3. Find the `Google Calendar API` in the Google API Library
4. Click `Enable`
5. Click `Credentials` in the side menu if you are not already on the Credentials page of your project
7. Click `CONFIGURE CONSENT SCREEN`
8. Select `External`, and then just fill the mandatory fields for the `OAuth consent screen`, and then click `SAVE AND CONTINUE`
(don't worry about the Scopes, Optional Info, and Summary tabs)
9. Click `Credentials` in the side menu
10. Click `+ CREATE CREDENTIALS` at the top of the page, and then `OAuth Client ID` from the drop-down menu
11. Set `Application Type` to _Desktop app_
12. Copy `Your Client ID` and `Your Client Secret`
13. Make a copy of the `credentials.json.sample` files in /src and /run and then name it `credentials.json`
14. Input your `Client ID` and `Client Secret` into your `credentials.json` files 

## How to run
    $ cd sway/run
    $ pip install --upgrade google-api-python-client google-auth-httplib2 google-auth-oauthlib`
    $ chmod +x Sway
    $ ./Sway

## Functionalities
##### Add Task
- Manually input tasks that you wish to complete
##### View Task List
- View list of tasks that you've input
##### Add Constraint 
- Manually input your lifestyle time constraints (time chunks when you sleep, eat, exercise, etc.)
##### View Constraint List
- View list of constraints that you've input
##### Load Inputs
- Import your existing tasks/constraints by downloading your schedule as a .csv file from Google Calendar
##### Save Inputs
- Save the inputs you've made
##### Generate Schedule and Download as CSV File
- Generate a schedule based on the inputs you've saved
##### Export to Google Calendar
- Follow the steps in the pop-up to choose the schedule you wish to import, login to your Google Account through Google OAuth2 and grant Sway permission to import your schedule