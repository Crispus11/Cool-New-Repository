#include "ReadFile.h"
#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
int main()
{
   ReadFile("cds.txt");
   WriteFile("out.txt");

   while(!ReadFile::eof)
   {
      String* line = ReadFile::readLine();
      wf->writeLine(line);
      delete line;
   }

   ~ReadFile();
   ~WriteFile();

   return 0;
}