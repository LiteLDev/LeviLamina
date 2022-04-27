#pragma unmanaged
#include <Utils/WinHelper.h>
#include <LLAPI.h>

#include "Config.h"

using namespace std;

#pragma unmanaged
extern void LoadMain();


#pragma unmanaged
void LoadConfigFile()
{
    auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
}

#pragma unmanaged
void entry()
{
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    LoadMain();
}