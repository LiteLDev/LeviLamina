#include "llapi/Global.h"
#include "liteloader/Config.h"
#include "llapi/mc/CommandParameterData.hpp"

#include <llapi/memory/Hook.h>
#include <magic_enum.hpp>

using namespace ll::memory;

/////////////////// Built in UnlockCmd ///////////////////

// ==> LiteLoader/Main/SimpleServerLogger.cpp
void LogCommandRegistration(
    std::string const&          name,
    char const*                 description,
    enum CommandPermissionLevel perm,
    short                       flag1,
    short                       flag2
);

LL_AUTO_TYPED_INSTANCE_HOOK(
    UnlockCmdHook0,
    CommandRegistry,
    HookPriority::Normal,
    "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
    "PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z",
    void,
    std::string const&          name,
    char const*                 description,
    enum CommandPermissionLevel perm,
    short                       flag1,
    short                       flag2
) {
    // For #643
    if (name.find(' ') == std::string::npos) { // If no space inside
        // Check whether command is already exists before registering
        if (this->findCommand(name)) {
            // throw to prevent setup function, then this exception can be caught by event handler
            throw std::runtime_error("There is already a command named " + name);
        }
    }
    if (ll::globalConfig.enableUnlockCmd) {
        flag1 |= 0x80;
    }
    if (ll::globalConfig.debugMode) {
        LogCommandRegistration(name, description, perm, flag1, flag2);
    }
    return origin(name, description, perm, flag1, flag2);
}

class CommandSelectorBase;
class CommandOrigin;
LL_AUTO_INSTANCE_HOOK(
    UnlockCmdHook1,
    HookPriority::Normal,
    "?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z",
    bool,
    CommandOrigin* a2
) {
    if (ll::globalConfig.enableUnlockCmd) {
        origin(a2);
        return true;
    }
    return origin(a2);
}

// #include <mc/AllowListCommand.hpp>
// #include <mc/CommandVersion.hpp>
// #include <mc/CommandRegistry.hpp>
// #include <mc/CommandParameterData.hpp>
//  inline void tryChangeStringToRawText(CommandParameterData& data)
//{
//     if (false /* config.xxxx*/ && data.tid.value == type_id<CommandRegistry, std::string>().value)
//     {
//         data.tid = type_id<CommandRegistry, CommandRawText>();
//         data.parser = CommandRegistry::getParseFn<CommandRawText>();
//     }
// }
//// allowlist
// TInstanceHook(CommandRegistry::Overload*,
// "??$_registerOverload@VAllowListCommand@@VCommandParameterData@@V2@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@2@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData const&
//               operationParam, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return origin( unk, version, operationParam, nameParam);
// }
//// op
// TInstanceHook(CommandRegistry::Overload*,
// "??$_registerOverload@VOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return origin( unk, version, nameParam);
// }
//// deop
// TInstanceHook(CommandRegistry::Overload*,
// "??$_registerOverload@VDeOpCommand@@VCommandParameterData@@@CommandRegistry@@AEAAPEAUOverload@0@PEBDVCommandVersion@@AEBVCommandParameterData@@@Z",
//               CommandRegistry, char const* unk, class CommandVersion version, class CommandParameterData& nameParam)
//{
//     tryChangeStringToRawText(nameParam);
//     return origin( unk, version, nameParam);
// }
//  bool unlockNewExecute = true;
//  TClasslessInstanceHook(bool, "?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z",
//                         int feature)
//  {
//      if (feature == 54 && unlockNewExecute)
//          return true;
//      return origin( feature);
//  }
// TClasslessInstanceHook(void, "?addSemanticConstraint@CommandRegistry@@AEAAXW4SemanticConstraint@@@Z",
//                        enum SemanticConstraint)
//{
//     return;
// }
LL_AUTO_INSTANCE_HOOK(
    UnlockCmdHook2,
    HookPriority::Normal,
    "?addEnumValueConstraints@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
    "AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_"
    "traits@D@std@@V?$allocator@D@2@@std@@@2@@3@W4SemanticConstraint@@@Z",
    void,
    std::string const&              enumName,
    std::vector<std::string> const& enumValues,
    SemanticConstraint              constraint
) {
    using namespace magic_enum::bitwise_operators;
    if (!ll::globalConfig.enableUnlockCmd)
        return origin(enumName, enumValues, constraint);
    if (magic_enum::enum_integer(constraint & SemanticConstraint::RequiresCheatsEnabled)) {
        constraint = (SemanticConstraint)(constraint & (~SemanticConstraint::RequiresCheatsEnabled));
        constraint = (SemanticConstraint)(constraint | SemanticConstraint::RequiresElevatedPermissions);
    }
    // if (constraint & SemanticConstraint::RequiresHostPermissions)
    //{
    //     constraint = (SemanticConstraint)(constraint & (~SemanticConstraint::RequiresHostPermissions));
    //     constraint = (SemanticConstraint)(constraint | SemanticConstraint::RequiresElevatedPermissions);
    // }
    return origin(enumName, enumValues, constraint);
}
