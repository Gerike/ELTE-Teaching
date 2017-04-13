#! /usr/bin/env python
# -*- coding: utf-8 -*-
import codecs

class User:
    def __init__(self, accountNumber, fullName, lastModified, balance):
        self.accountNumber = accountNumber
        self.fullName = fullName
        self.lastModified = lastModified.strip()
        self.balance = int(balance)
        accountNumbers = accountNumber.split('-') 
        self.order = int(accountNumbers[0] + accountNumbers[1])
        
    def modifyBalance(self, addedBalance, modificationDate):
        self.balance += int(addedBalance)
        self.lastModified = modificationDate.strip()

    def toString(self):
        return self.accountNumber + ' ' + self.fullName + ' ' + self.lastModified + ' ' + str(self.balance)

def isUserExists(users, accountNumber):
    for user in users:
        if user.accountNumber == accountNumber:
            return True
    return False

def modifyUserBalance(users, accountNumber, balanceChange, modificationDate):
    for user in users:
        if user.accountNumber == accountNumber:
            user.modifyBalance(balanceChange, modificationDate)
            break

#Adatok beolvasása
users = []
usersData = open('data.txt', 'r')
for line in usersData:
    dataParts = line.split(' ')
    fullName = ""
    for i in range(1, len(dataParts)-2):
         fullName += dataParts[i] + ' '
    fullName = fullName.rstrip()
    user = User(dataParts[0], fullName, dataParts[-2], dataParts[-1])
    users.append(user)

#Adatok frissítése
updateData = open('update', 'r')
modificationDate = updateData.readline()
for line in updateData:
    dataParts = line.split(' ')
    if isUserExists(users, dataParts[0]):
        modifyUserBalance(users, dataParts[0], dataParts[-1], modificationDate)
    else:
        fullName = ""
        for i in range(1, len(dataParts)-1):
            fullName += dataParts[i] + ' '
        fullName = fullName.rstrip()
        user = User(dataParts[0], fullName, modificationDate, dataParts[-1])
        users.append(user)
users = sorted(users, key=lambda user: user.order)      
newData = open("newdata", "w")
first = True
for user in users:
    if not first:
        newData.write("\n" + user.toString())
    else:
        newData.write(user.toString())
        first = False
newData.close()
