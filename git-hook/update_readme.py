#update_readme.py
import os

home_dir = os.path.expanduser('~')
with open(os.path.join(home_dir, 'streak.txt'),'r') as file:
    if os.stat(os.path.join(home_dir, 'streak.txt')).st_size == 0:
        print("File is empty")
        exit()
    else:
        print("File is not empty")
        last_line = file.readlines()[-1]
        streak_count = int(last_line.split()[0])

with open('/workspaces/interview_prep/README', 'w') as file:
    file.write(f"Current Streak: {streak_count}")