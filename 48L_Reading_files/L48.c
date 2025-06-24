    #include <stdio.h>

    int main(){
        FILE *pF = fopen("C:\\Users\\t495s\\Desktop\\testing.txt", "r");
        //we need a buffer and it'll lack as a container, an array of characters to hold one line of our text
        //document one line at a time.
        char buffer[255]; //declaration for the buffer.

    //    this only prints the first line 
    //    fgets(buffer, 255, pF);//this is the process for buffer.
    //    printf("%s", buffer);

        if (pF == NULL)//checking if the absolute path or alternative path was locating, if null (blanked) then we couldn't find the file
        {
            printf("didn't work");
        }
        else{        //this way, all of the lines will be execuated.
            while (fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
        }
        }
                
        fclose(pF); //it is a good practice to always close any files after executing.


        return 0;
    }