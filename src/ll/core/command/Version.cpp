#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/ServerInfo.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"

namespace ll::core::command {

using namespace ll::i18n_literals;
using ll::command::CommandRegistrar;

void registerVersionCommand() {
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand(
        "version",
        "Query serverversion information"_tr(),
        CommandPermissionLevel::GameDirectors,
        CommandFlagValue::None
    );
    cmd.overload().execute<[&](CommandOrigin const&, CommandOutput& output) {
        output.success("This server is running Bedrock Dedicated Server version {0} with §bLeviLamina-{1}§r."_tr(
            ll::getBdsVersion(),
            ll::getLoaderVersion()
        ));
    }>();
}

} // namespace ll::core::command
