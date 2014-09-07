#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
   close();
   delete closed;
}

void WriteFile::close()
{
   if (closed!=true)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (closed!=true && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
