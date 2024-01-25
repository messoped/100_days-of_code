#this program would take a keyword from a user and go through a pdf in the pc diretcory to look for the page number using the poppler library

// Online C compiler to run C program online
#include <stdio.h>
#include <<poppler/glib/poppler.h>



int main() {
    Popplerdocument *pdfdocument; // pdf document variable with a pointer
    Popplerpage *page; // page variable
    Gerror *error = NULL; // this error would be stored in the memory incase the pdf returns an error 
    char username[50];// this is the first name of user to access the file
    char keyword[50];// this is the keyword to be typed by user
    
    // this part of code would open the pdf document in the working directory
    pdfdocument = poppler_document_from_file ("influencers.pdf", NULL , &error), // this line would allow poppler create a document from a file called influencer.pdf file and the null is a parameter to maintain an efficient file
    if ( error != NULL){
        g_error("error with file", error -> message); // this would write an error as a message if the file is corrupt or is not working
        g_error_free(error);// cleanup error resources
        return 1;
    }
  //the for loop would go through the entire pdf assuming its a 1000 page file
  for (i = 1; i <= 1000 ; i++){
       page = poppler_document_get_page(pdfDocument, i);// this get the pages and assignes it to the page variable
       
        gchar *text = poppler_page_get_text(page);// Get the text from the page
  }
  // this if loop searches for keywords in pdf
  if (g_strstr_len(text, -1), keyword) != NULL ){ // the g_strstr_len brings the sub of a string and the text here is the text the function searches the keyword from . The -1 prints an error or is a parameter to print an error when there is one and searches through the entire string.
   printf("Keyword '%s' found on page %d\n", keyword, i + 1)
   };//the +1 here tells the program to start the index from 1 instead of 1 so it returns the page number and the keyword found there.
   return 0;
}
}

