# To have a valid key you need to have at least one "@" in your key and a "-" at the 5th place
# like for example @@@@-@@@@ will work or ABCD-@EFG or A@BC-DEFG


import random

halfkey1 = ""
halfkey2 = ""

for i in range(1, 11):
    halfkey1 = ""
    halfkey2 = ""

    for i in range(1,4):
        halfkey1 += random.choice("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890")

    for i in range(1,5):
        halfkey2 += random.choice("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890")
    
    print("key :   "+"@"+halfkey1+"-"+halfkey2)
