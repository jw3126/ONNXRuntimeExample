#include "onnxruntime_c_api.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
    const OrtApiBase* base = OrtGetApiBase();
    const char* version = base->GetVersionString();
    printf("Version %s", version);
    return 0;
}
