#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

namespace ll::command {
struct Code {
    int exceptionCode{0};
};

void registerCrashCommand() {
    auto config = ll::getLeviConfig().modules.command.crashCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand("crash", "crash the server"_tr(), config.permission);
    cmd.overload<Code>()
        .optional("exceptionCode")
        .execute([&](CommandOrigin const&, CommandOutput&, Code const& params) {
            std::thread([&] { throw std::system_error(std::error_code{params.exceptionCode, std::system_category()}); }
            ).detach();
        });
}
} // namespace ll::command
