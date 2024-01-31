#update_readme.py
with open('streak.txt', 'r') as file:
    last_line = file.readlines()[-1]
    streak_count = int(last_line.split()[1])

with open('README.md', 'w') as file:
    file.write(f"Current Streak: {streak_count}")