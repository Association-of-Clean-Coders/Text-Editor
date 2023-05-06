//takes filename *pn as argument and opens it
//if the file does not exist an error message will pop up
void openFile (char *fileName) {
    FILE *fp;
    fopen(fileName,"r");
    if(fp != NULL ) {
        printf("File opening successful");
        //can add more functions here to before close
        fclose(fp);
    }
    else {
        printf("File opening unsuccessful\n");
    }
}

//===========
//takes FILE *pn as argument to close it while checking if it exist in the first place
void closeFile (FILE *fp){
    if(fp !=NULL){
        fclose(fp);
    }
    else{
        printf("File was not open");
    }
}
//===========
void readFile (char *fileName,char[]*store,int numOfChars) {
    fopen(fileName,"r");
    if(fp != NULL ) {
        printf("File opening successful");
        while(fgets(*store,numOfChars,fileName)){
            printf("%s",*store);
        }
        fclose(fp);
    }
    else {
        printf("File opening unsuccessful\n");
    }
}
//===========
//takes file name ,and what to write to file (writeToFile) ,and writes the text to file,
//note :deletes old text in file
void writeFile (char *fileName,char *writeToFile) {
    fopen(fileName,"w");
    if(fp != NULL ) {
        printf("File opening successful");
        fprintf(fileName,writeToFile);
        fclose(fp);
    }
    else {
        printf("File opening unsuccessful\n");
    }
}
//==========
//same as writeFile but does not delete old text
void appendFile (char *fileName,char *writeToFile) {
    fopen(fileName,"a");
    if(fp != NULL ) {
        printf("File opening successful");
        fprintf(fileName,writeToFile);
        fclose(fp);
    }
    else {
        printf("File opening unsuccessful\n");
    }
}
//=========
