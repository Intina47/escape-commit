# check_streak.py
import datetime

# Read the last commit date and streak count from streak.txt
with open('streak.txt', 'r') as file:
    lines = file.readlines()
    last_commit_date = datetime.datetime.strptime(lines[0].strip(), '%Y-%m-%d').date()
    streak_count = int(lines[1])

today = datetime.date.today()
yesterday = today - datetime.timedelta(days=1)

# If the last commit was yesterday, increment the streak count
if last_commit_date == yesterday:
    streak_count += 1
# Otherwise, reset the streak count
else:
    streak_count = 0

# Write the new streak count to streak.txt
with open('streak.txt', 'w') as file:
    file.write(str(today) + '\n')
    file.write(str(streak_count))