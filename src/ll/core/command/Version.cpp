#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/Versions.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"

namespace ll::command {
void registerVersionCommand(bool isClientSide) {
    auto config = ll::getLeviConfig().modules.command.versionCommand;
    if (!config.enabled) {
        return;
    }

    auto& cmd = CommandRegistrar::getInstance(isClientSide)
                    .getOrCreateCommand("version", "Query server version information"_tr(), config.permission);
    cmd.overload().execute([&](CommandOrigin const& origin, CommandOutput& output) {
        output.success(
            "Game version {0} with §bLeviLamina-{1}§r."_trl(
                origin.getLocaleCode(),
                ll::getGameVersion(),
                ll::getLoaderVersion()
            )
        );
    });
}
} // namespace ll::command
