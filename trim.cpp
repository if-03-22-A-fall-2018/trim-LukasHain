/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"

void trim(const char* source, char* trimmed_string)
{
  int count = 0;
  while (source[count] == ' ') {
    count++;
  }
  char x[STRLEN - count];
  for (size_t i = 0; i < strlen(source) - count; i++) {
   x[i] = source[i + count];
  }

  strcpy(trimmed_string, x);
}
