#include "ll/core/tweak/ForceEnableCheatCommands.h"

#include "mc/enums/SemanticConstraint.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandSelectorBase.h"

#include "ll/api/memory/Hook.h"
#include <memory>
#include <string>
#include <vector>

namespace ll {

namespace force_enable_cheat_commands {

LL_TYPE_INSTANCE_HOOK(
    CommandRegistryRegisterCommandHook,
    ll::memory::HookPriority::Normal,
    CommandRegistry,
    &CommandRegistry::registerCommand,
    void,
    std::string const&       name,
    char const*              description,
    ::CommandPermissionLevel requirement,
    CommandFlag              flag1,
    CommandFlag              flag2
) {
    flag1 |= CommandFlagValue::NotCheat;
    return origin(name, description, requirement, flag1, flag2);
}

LL_TYPE_INSTANCE_HOOK(
    CommandSelectorBaseIsExpansionAllowedHook,
    ll::memory::HookPriority::Normal,
    CommandSelectorBase,
    &CommandSelectorBase::isExpansionAllowed,
    bool,
    CommandOrigin const& ori
) {
    origin(ori);
    return true;
}

LL_TYPE_INSTANCE_HOOK(
    CommandRegistryAddEnumValueConstraintsHook,
    ll::memory::HookPriority::Normal,
    CommandRegistry,
    &CommandRegistry::addEnumValueConstraints,
    void,
    std::string const&              enumName,
    std::vector<std::string> const& enumValues,
    SemanticConstraint              constraint
) {
    constraint = static_cast<SemanticConstraint>(
        static_cast<unsigned char>(constraint) & ~static_cast<unsigned char>(SemanticConstraint::RequiresCheatsEnabled)
    );
    return origin(enumName, enumValues, constraint);
}

} // namespace force_enable_cheat_commands

struct ForceEnableCheatCommands::Impl {
    memory::HookRegistrar<
        force_enable_cheat_commands::CommandRegistryRegisterCommandHook,
        force_enable_cheat_commands::CommandSelectorBaseIsExpansionAllowedHook,
        force_enable_cheat_commands::CommandRegistryAddEnumValueConstraintsHook>
        r;
};

void ForceEnableCheatCommands::call(bool enable) {
    if (enable) {
        if (!impl) impl = std::make_unique<Impl>();
    } else {
        impl.reset();
    }
};

ForceEnableCheatCommands::ForceEnableCheatCommands()  = default;
ForceEnableCheatCommands::~ForceEnableCheatCommands() = default;
} // namespace ll
