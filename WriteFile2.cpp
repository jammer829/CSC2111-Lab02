#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   WriteFile* wf = new WriteFile;
   output_file.open(file_name);
   closed = false;
   return wf;
}

WriteFile::~WriteFile()
{
   close(wf);
   delete wf;
}

void WriteFile::close()
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
