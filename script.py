import os
import glob

exe_files = glob.glob("*.exe")
if len(exe_files) == 0:
    print("No files found")
    exit()

confirm = input(print("Do you want to delete the following files?").strip().lower())
for file in exe_files:
    print(file)

if confirm == "yes":
    for file in exe_files:
        os.remove(file)
    print("Files deleted")
else:
    print("Error while deleting files")
