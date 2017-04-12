#ifndef READER_H
#define READER_H

#include<vector>
#include<string>

const std::string ERROR_MESSAGE_INVALID_INPUT = "Invalid input, please add a positive number!";
const std::string ERROR_MESSAGE_INVALID_FILENAME = "File does not exists";

std::vector<std::vector<int> > readFromFile(const std::string &fileName);
std::vector<std::vector<int> > readFromConsole();
std::vector<int> convertLineToVector(const std::string &line);
int readIntFromConsole();
bool validateNumber(const int &number);

#endif // READER_H
