#include "ll/api/base/Global.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"

#include "magic_enum.hpp"

#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandSelectorBase.h"


using namespace ll::memory;

LL_AUTO_TYPED_INSTANCE_HOOK(
    UnlockCmdHookRegisterCommand,
    HookPriority::Normal,
    CommandRegistry,
    &CommandRegistry::registerCommand,
    void,
    std::string const&       name,
    char const*              description,
    ::CommandPermissionLevel permlevel,
    CommandFlag              flag1,
    CommandFlag              flag2 // useless, idiot
) {
    if (ll::globalConfig.enableUnlockCmd) { flag1 |= CommandFlagValue::NotCheat; }

    return origin(name, description, permlevel, flag1, flag2);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    UnlockCmdHookIsExpansionAllowed,
    HookPriority::Normal,
    CommandSelectorBase,
    &CommandSelectorBase::isExpansionAllowed,
    bool,
    CommandOrigin const& commandOrigin
) {
    if (ll::globalConfig.enableUnlockCmd) { return true; }
    return origin(commandOrigin);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    UnlockCmdHookAddEnumValueConstraints,
    HookPriority::Normal,
    CommandRegistry,
    &CommandRegistry::addEnumValueConstraints,
    void,
    std::string const&              enumName,
    std::vector<std::string> const& enumValues,
    SemanticConstraint              constraint
) {
    using namespace magic_enum::bitwise_operators;
    if (ll::globalConfig.enableUnlockCmd
        && magic_enum::enum_integer(constraint & SemanticConstraint::RequiresCheatsEnabled)) {
        constraint = constraint & (~SemanticConstraint::RequiresCheatsEnabled);
        constraint = constraint | SemanticConstraint::RequiresElevatedPermissions;
    }
    return origin(enumName, enumValues, constraint);
}
