## Algorithm for File I/O
```

* start code off with imports sstream, iostream
* purpose of the code, copy data and store it into a file called data.csv
* each line will contain two integers and a string in **CSV** format
* each line should then break the data into **varibles**, numbers should be **ints**, text is a **string**
* each line also adds the two numbers **together**, then prints the **string** that many **times**
* create a stringstream called ss
* create variables for data like intA, intB, text
* create temp strings for the integers then a string for the current line
    while

      ss.string(currentLine);
      getLine(ss, sIntA, ',');
      getLine(ss, sIntB, ',');
      getLine(ss, text);
* open data.csv into the ifstream object
* while, clear **stringstream**, put currentLine into **stringStream**
* read to first comma, put result in sIntA, next comma in sIntB, rest of the line in **text**
* now clear the stringStream and put sIntA and sIntB in that stringStream, seperated by a space, then output the stringStream to intA and intB, converting data automatically
*finally add the intA and B result, put result in sum, then repeat the sum x times:
print text
      
```
