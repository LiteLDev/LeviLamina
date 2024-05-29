#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/core/Config.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"

namespace ll::command {

using namespace ll::i18n_literals;

void registerVersionCommand() {
    auto config = ll::globalConfig.modules.command.versionCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance()
                    .getOrCreateCommand("version", "Query serverversion information"_tr(), config.permission);
    cmd.overload().execute([&](CommandOrigin const&, CommandOutput& output) {
        output.success("This server is running Bedrock Dedicated Server version {0} with §bLeviLamina-{1}§r."_tr(
            ll::getBdsVersion(),
            ll::getLoaderVersion()
        ));
    });
}
} // namespace ll::command
