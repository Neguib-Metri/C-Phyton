#4. Count the Word Frequency in a Text (Unique String). Don’t forget to: normalize to lower case and delete special chars. #

import re #the library to check the common uses of words etc#
import string
frequency = {} 
document_text = open('test.txt', 'r') #define de text#
text_string = document_text.read().lower()
match_pattern = re.findall(r'b[a-z]{3,15}b', text_string) #we search for the words"#
 
for word in match_pattern:
    count = frequency.get(word,0) #we found de words and add the counter for that word#
    frequency[word] = count + 1
     
frequency_list = frequency.keys() #we call the fuction#
 
for words in frequency_list:         #we print all the collection of words with his counter#
      print words, frequency[words]