#2. Given a list of strings delete all special chars in each one (non-alphanumeric chars). initialazing variables

i_str = input('Input a string: ')
o_str = ""

#for loop will check each character in given string, check condition and keep those who fulfill the condition
for char in i_str:#well move through the i_string, character by character
    if char.isalnum():#string method for alphanumeric elements
        o_str=o_str + char#it will only keep aplhanumerics in the new string       

print(o_str)#printing the result