int filterNumericData(char *inputFileName , char *outputFileName){
    FILE *pt1 = fopen(inputFileName, "r");
    if (pt1 == NULL){
        return 1;
    }

    FILE *pt2 = fopen (outputFileName, "w");
    if (pt2 == NULL){
        return 1;
    }

    int ch;// must be int to detect EOF.
    while((ch = fgetc(pt1)) != EOF){
        if (ch <= '9' && ch >= '0')
        fputc(ch , pt2);
    }

    fclose(pt1);
    fclose(pt2);

    return 0;
}