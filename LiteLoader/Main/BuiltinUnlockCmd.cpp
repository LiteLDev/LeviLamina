#include "Global.h"
#include <Main/Config.h>

/////////////////// Built in UnlockCmd ///////////////////

bool isUnlockCmdEnabled = true;

TClasslessInstanceHook(void, "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z",
                       void* a2, void* a3, char a4, short a5, short a6)
{
    if (LL::globalConfig.enableUnlockCmd)
        a5 |= 0x80;
    return original(this, a2, a3, a4, a5, a6);
}

class CommandSelectorBase;
class CommandOrigin;
TClasslessInstanceHook(bool, "?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z",
                       CommandOrigin* a2)
{
    if (LL::globalConfig.enableUnlockCmd)
        return true;
    return original(this, a2);
}