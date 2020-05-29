#Excercise #3 from Phyton Codes Check the validity of a password (input from users). Validation: • At least 1 letter between [a-z] and 1 letter between [A-Z]. • At least 1 number between [0-9]. • At least 1 at least one punctuation sign. • Minimum length 6 characters. • Maximum length 16 characters...

import re 
#the library to check the common uses of words etc#
def checkpass(password):   #do we create the fuctions to identify the necessary input for the password#
  if 6 <= len(password) <= 16:
    if re.search("[a-z]", password) and re.search("[A-Z]",password):
      if re.search("[0-9]",password):
        if re.search("[$@#]",password): 
          return True 
#if the password succesful pass trought over every one if the statment is true if not is false#
  return False

Paswrd = input("Create your password: ")
print(checkpass(Paswrd)) 
