#if !defined CSC_2111_LAB_02
#define CSC_2111_LAB_02

#include <iostream>
#include <fstream>
#include "Text.h"

using namespace std;

class WriteFile {
    
    private:
        ofstream output_file;
        bool closed;
        
    public:
        WriteFile();
        ~WriteFile();
        WriteFile* createWriteFile(const char* file_name);
        void destroyWriteFile(WriteFile* wf);
        void writeLine(WriteFile* wf, String* line);
        void close(WriteFile* wf);
};


#endif