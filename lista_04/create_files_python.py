### CREATE A FUNCTION THAT CREATES FILES IN THE CURRENT DIRECTORY GIVEN A FILE NAME

import os

def create_files(file_name):
    if not os.path.exists(file_name):
        open(file_name, 'w')
    else:
        print("File already exists")


start = 1
finish = 10
for i in range(start,(finish+1)):
    number = i if (len(str(i)) > 1) else f"0{i}"
    create_files(f"lista_04_questao_{number}.c")