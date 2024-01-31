#update_readme.py
import os

home_dir = os.path.expanduser('~')
with open(os.path.join(home_dir, 'streak.txt'),'r') as file:
    if os.stat(os.path.join(home_dir, 'streak.txt')).st_size == 0:
        print("File is empty")
        exit()
    else:
        print("File is not empty")
        first_line = file.readlines()[0]  # Get the first line of the file
        streak_count = int(first_line.strip())  # The streak count is now the first line

with open('/workspaces/interview_prep/README', 'w') as file:
    file.write(f"Current Streak: {streak_count}")