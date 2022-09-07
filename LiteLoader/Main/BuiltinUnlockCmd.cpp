#include "Global.h"
#include <Main/Config.h>
#include <MC/CommandParameterData.hpp>
#include <LoggerAPI.h>
/////////////////// Built in UnlockCmd ///////////////////

bool isUnlockCmdEnabled = true;

// ==> LiteLoader/Main/SimpleServerLogger.cpp
void LogCommandRegistration(std::string const& name, char const* description, enum CommandPermissionLevel perm, short flag1, short flag2);

TInstanceHook(void, "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z",
              CommandRegistry, std::string const& name, char const* description, enum CommandPermissionLevel perm, short flag1, short flag2) {
    // For #643
    if (name.find(' ') == std::string::npos) { // If no space inside
        // Check whether command is already exists before registering
        if (this->findCommand(name)) {
            // throw to prevent setup function, then this exception can be caught by event handler
            throw std::runtime_error("There is already a command named " + name);
        }
    }
    if (LL::globalConfig.enableUnlockCmd) {
        flag1 |= 0x80;
    }
    if (LL::globalConfig.debugMode) {
        LogCommandRegistration(name, description, perm, flag1, flag2);
    }
    return original(this, name, description, perm, flag1, flag2);
}

class CommandSelectorBase;
class CommandOrigin;
TClasslessInstanceHook(bool, "?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z",
                       CommandOrigin* a2) {
    if (LL::globalConfig.enableUnlockCmd) {
        original(this, a2);
        return true;
    }
    return original(this, a2);
}

//#include <MC/AllowListCommand.hpp>
//#include <MC/CommandVersion.hpp>
//#include <MC/CommandRegistry.hpp>
//#include <MC/CommandParameterData.hpp>
// inline void tryChangeStringToRawText(CommandParameterData& data)
//{
//    if (false /* config.xxxx*/ && data.tid.value == type_id<CommandRegistry, std::string>().value)
//    {
//        data.tid = type_id<CommandRegistry, CommandRawText>();
//        data.parser = CommandRegistry::getParseFn<CommandRawText>();
//    }
//}
//// allowlist
// TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VAllowListCommand@@VCommandParameterData@@V2@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@2@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData const& operationParam, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return original(this, unk, version, operationParam, nameParam);
// }
//// op
// TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return original(this, unk, version, nameParam);
// }
//// deop
// TInstanceHook(CommandRegistry::Overload*, "??$_registerOverload@VDeOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return original(this, unk, version, nameParam);
// }
//  bool unlockNewExecute = true;
//  TClasslessInstanceHook(bool, "?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z",
//                         int feature)
//  {
//      if (feature == 54 && unlockNewExecute)
//          return true;
//      return original(this, feature);
//  }
// TClasslessInstanceHook(void, "?addSemanticConstraint@CommandRegistry@@AEAAXW4SemanticConstraint@@@Z",
//                        enum SemanticConstraint)
//{
//     return;
// }
TClasslessInstanceHook(void, "?addEnumValueConstraints@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@W4SemanticConstraint@@@Z",
                       std::string const& enumName, std::vector<std::string> const& enumValues, SemanticConstraint constraint) {
    if (!LL::globalConfig.enableUnlockCmd)
        return original(this, enumName, enumValues, constraint);
    if (constraint & SemanticConstraint::RequiresCheatsEnabled) {
        constraint = (SemanticConstraint)(constraint & (~SemanticConstraint::RequiresCheatsEnabled));
        constraint = (SemanticConstraint)(constraint | SemanticConstraint::RequiresElevatedPermissions);
    }
    // if (constraint & SemanticConstraint::RequiresHostPermissions)
    //{
    //     constraint = (SemanticConstraint)(constraint & (~SemanticConstraint::RequiresHostPermissions));
    //     constraint = (SemanticConstraint)(constraint | SemanticConstraint::RequiresElevatedPermissions);
    // }
    return original(this, enumName, enumValues, constraint);
}