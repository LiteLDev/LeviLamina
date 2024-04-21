#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

#include "errhandlingapi.h"

namespace ll::command {

using namespace ll::i18n_literals;

struct Code {
    int exceptionCode{0};
};

void registerCrashCommand() {
    auto config = ll::globalConfig.modules.command.pluginManageCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand("crash", "crash the server"_tr(), config.permission);
    cmd.overload<Code>()
        .optional("exceptionCode")
        .execute([&](CommandOrigin const&, CommandOutput&, Code const& params) {
            std::thread([&] { RaiseException(params.exceptionCode, 0, 0, nullptr); }).detach();
        });
}
} // namespace ll::command
