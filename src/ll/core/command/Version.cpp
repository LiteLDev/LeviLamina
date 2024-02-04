#pragma once

#include "ll/core/command/BuiltinCommands.h"

#include "fmt/color.h"

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

struct VersionCommandParams {};

void registerVersionCommand() {
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand(
        "version",
        "Query serverversion information",
        CommandPermissionLevel::GameDirectors
    );
    cmd.overload<VersionCommandParams>()
        .execute<[&](CommandOrigin const&, CommandOutput& output, VersionCommandParams const&) {
            output.success("This server is running Bedrock Dedicated Server version {0} with §bLeviLamina-{1}§r."_tr(
                ll::getBdsVersion(),
                ll::getLoaderVersion()
            ));
        }>();
}

} // namespace ll::core::command
