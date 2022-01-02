#include "Global.h"
#include <LL/Config.h>

/////////////////// Built in UnlockCmd ///////////////////

bool isUnlockCmdEnabled = true;

THook(void, "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z",
    void* a1, void* a2, void* a3, char a4, short a5, short a6)
{
    if (LL::globalConfig.enableUnlockCmd)
        a5 |= 0x80;
    return original(a1, a2, a3, a4, a5, a6);
}

class CommandSelectorBase;
class CommandOrigin;
THook(bool, "?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z",
    CommandSelectorBase* _this, CommandOrigin* a2)
{
    if (LL::globalConfig.enableUnlockCmd)
        return true;
    return original(_this, a2);
}