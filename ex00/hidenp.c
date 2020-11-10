

int hidenp(char *param_1, char *param_2){
	  while (*param_1) {
		    char *Begin = param_1;
		    char *pattern = param_2;
		    
		    // If first character of sub string match, check for whole string
		    while (*param_1 && *pattern && *param_1 == *pattern) {
			      param_1++;
			      pattern++;
		    }
		    // If complete sub string match, return starting address 
		    if (*pattern)
		    	  return 1;
		    	  
		    param_1 = Begin + 1;	// Increament main string 
	  }
	  return 0;
}
    
