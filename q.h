/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 9
@date       file created on 11/11/2023
@brief      provide a brief explanation about what this source file does:
            
            This file is contains 7 function declaraction be to called by main in qdriver.
            Functions:
            - char const* find(char const *begin, char const *end, char val);                           // find returns a pointer to the first occurrence of val in begin(string pointer)
            - char const* find_any(char const *begin, char const *end, char const *vals, int len);      // find vals(string pointer) in begin(string pointer)
            - int count(char const *begin, char const *end, char val);                                  // checking through string(in the variable begin) for the number of time the charcter(in the variable val) is fount in the string
            - int count_any(char const *begin, char const *end, char const *vals, int len);             // returns the number of charcter of vals found in begin
            - int compare(char const *begin1, char const *begin2, int len);                             // Compare each character of both string of same positions
            - void exchange(char *begin1, char *begin2, int len);                                       // swapping the strings between begin1 and begin2
            - void copy(char *dst, char *src, int len);                                                 // copy src to dst making sure to not overwrite data
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

char const* find(char const *begin, char const *end, char val);                                         // find returns a pointer to the first occurrence of val in begin(string pointer)
char const* find_any(char const *begin, char const *end, char const *vals, int len);                    // find vals(string pointer) in begin(string pointer)
int count(char const *begin, char const *end, char val);                                                // checking through string(in the variable begin) for the number of time the charcter(in the variable val) is fount in the string
int count_any(char const *begin, char const *end, char const *vals, int len);                           // returns the number of charcter of vals found in begin
int compare(char const *begin1, char const *begin2, int len);                                           // Compare each character of both string of same positions
void exchange(char *begin1, char *begin2, int len);                                                     // swapping the strings between begin1 and begin2
void copy(char *dst, char *src, int len);                                                               // copy src to dst making sure to not overwrite data
