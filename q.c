/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 9
@date       file created on 11/11/2023
@brief      provide a brief explanation about what this source file does:
            
            This file is contains 7 function definitions to called by main in qdriver and a defenition of NULL.
            Functions:
            - char const* find(char const *begin, char const *end, char val);                           // find returns a pointer to the first occurrence of val in begin(string pointer)
            - char const* find_any(char const *begin, char const *end, char const *vals, int len);      // find vals(string pointer) in begin(string pointer)
            - int count(char const *begin, char const *end, char val);                                  // checking through string(in the variable begin) for the number of time the charcter(in the variable val) is fount in the string
            - int count_any(char const *begin, char const *end, char const *vals, int len);             // returns the number of charcter of vals found in begin
            - int compare(char const *begin1, char const *begin2, int len);                             // Compare each character of both string of same positions
            - void exchange(char *begin1, char *begin2, int len);                                       // swapping the strings between begin1 and begin2
            - void copy(char *dst, char *src, int len);                                                 // copy src to dst making sure to not overwrite data
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#define NULL ((void*)0) 

char const* find(char const *begin, char const *end, char val){                                         // find returns a pointer to the first occurrence of val in begin(string pointer)

    while(begin != end){                                                               // looping throught begin till end is reached 
        if(*begin == val){ return begin; }                                             // returning pointer to the first occurrence of val in begin
        begin++;
    }
    return NULL;                                                                        // if val is not found in begin return NULL
}
char const* find_any(char const *begin, char const *end, char const *vals, int len){                    // find vals(string pointer) in begin(string pointer)

    for (const char *ptr = begin; ptr != end; ptr++){                                   // looping throught begin till end is reached
        
        const char *valPtr = vals;
        while (valPtr - vals < len) {                                                   // looping throught vals till end of vals is reached
            if (*ptr == *valPtr){ return ptr; }                                         // return charcter if charcter is found in both begin and vals
            valPtr++;
        }
    }
    return NULL;                                                                        // if charcters in vals(string pointer) is not found in begin return NULL

}
int count(char const *begin, char const *end, char val){                                                // checking through string(in the variable begin) for the number of time the charcter(in the variable val) is fount in the string
    
    int count=0;
    for (const char *ptr = begin; ptr != end; ptr++){                                   // looping throught begin till end is reached
        if(*ptr == val){count++;}                                                       // adding count every time time the charcter(in the variable val) is fount in the string
        }
    return count;
}
int count_any(char const *begin, char const *end, char const *vals, int len){                           // returns the number of charcter of vals found in begin
    
    int count=0;
    for (const char *ptr = begin; ptr != end; ptr++){                                   // looping throught begin till end is reached
        
        const char *valPtr = vals;
        while (valPtr - vals < len) {                                                   // looping throught vals till end of vals is reached
            if (*ptr == *valPtr){count++;}                                              // adding count if charcter of vals is found in begin
            valPtr++;
        }
    }
    return count;
}
int compare(char const *begin1, char const *begin2, int len){                                           // Compare each character of both string of same positions

    int i = 0;
    while (i < len) {                                                                   // checking the exact same position in both strings to check the characters in both string
        if (*(begin1 + i) != *(begin2 + i)) {
            return (*(begin1 + i) > *(begin2 + i)) ? 1 : -1;                            // return 1 if begin1 is greater else return -1 in single line if statement
        }
        i++;
    }
    return 0;
}
void exchange(char *begin1, char *begin2, int len){                                                     // swapping the strings between begin1 and begin2
    for (int i = 0; i < len; i++) {
        char temp = *(begin1 + i);                                                      // storing begin1 into temp
        *(begin1 + i) = *(begin2 + i);                                                  // storing begin2 into begin1
        *(begin2 + i) = temp;                                                           // storing temp into begin2
     }
}
void copy(char *dst, char *src, int len){                                                               // copy src to dst making sure to not overwrite data
    
    if (src < dst){                                                                     // If the dst shorter then scr to avoid overwriting data copy in reverse(from end to start)
        for (int i = len - 1; i >= 0; i--) {  *(dst + i) = *(src + i);  }
    }
    else{                                                                               // If the scr is longer then dst copy from normaly(from start to end)
        for (int i = 0; i < len; i++) {  *(dst + i) = *(src + i);  }
    }

}



