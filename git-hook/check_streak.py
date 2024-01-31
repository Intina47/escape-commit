# check_streak.py
import datetime
import os

home_dir = os.path.expanduser('~')

# Read the last commit date and streak count from streak.txt
with open(os.path.join(home_dir, 'streak.txt'), 'r') as file:
    #handle error if file is empty
    if os.stat(os.path.join(home_dir, 'streak.txt')).st_size == 0:
        print("File is empty")
        exit()
    else:
        print("File is not empty")
        lines = file.readlines()
        last_commit_date = datetime.datetime.strptime(lines[1].strip(), '%Y-%m-%d').date()
        if len(lines) > 1:
            streak_count = int(lines[0].strip())
            print("streak count", streak_count)
        else:
            streak_count = 0

today = datetime.date.today()
yesterday = today - datetime.timedelta(days=1)

# If the last commit was yesterday, increment the streak count
if last_commit_date == yesterday:
    streak_count += 1
else:
    streak_count = 0

# Write the new streak count to streak.txt, keeping the rest of the file the same
with open(os.path.join(home_dir, 'streak.txt'), 'w') as file:
    file.write(str(streak_count) + '\n')  # Write the updated streak count
    for line in lines[1:]:  # Write the rest of the lines back to the file
        file.write(line)