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

#include <MC/AllowListCommand.hpp>
#include <MC/CommandVersion.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/CommandParameterData.hpp>
inline void tryChangeStringToRawText(CommandParameterData& data)
{
    if (false /* config.xxxx*/ && data.tid.value == type_id<CommandRegistry, std::string>().value)
    {
        data.tid = type_id<CommandRegistry, CommandRawText>();
        data.parser = CommandRegistry::getParseFn<CommandRawText>();
    }
}
// allowlist
TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VAllowListCommand@@VCommandParameterData@@V2@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@2@Z",
              CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData const& operationParam, class CommandParameterData& nameParam)
{
    tryChangeStringToRawText(nameParam);
    return original(this, unk, version, operationParam, nameParam);
}
// op
TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
              CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
{
    tryChangeStringToRawText(nameParam);
    return original(this, unk, version, nameParam);
}
// deop
TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VDeOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
              CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
{
    tryChangeStringToRawText(nameParam);
    return original(this, unk, version, nameParam);
}