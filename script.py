import os
import glob

exe_files = glob.glob("*.exe")
if len(exe_files) == 0:
    print("No files found")
    exit()

for file in exe_files:
    print(file)
confirm = input("Do you want to delete the following files?").strip().lower()

if confirm == "yes":
    for file in exe_files:
        os.remove(file)
    print("Files deleted")
else:
    print("Error while deleting files")
