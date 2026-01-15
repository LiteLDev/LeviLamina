#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

#include "windows.h"

namespace ll::command {
struct Code {
    int exceptionCode{0};
};

void registerCrashCommand(bool isClientSide) {
    auto config = ll::getLeviConfig().modules.command.crashCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance(isClientSide)
                    .getOrCreateCommand(
                        isClientSide ? "clicrash" : "crash",
                        isClientSide ? "Crash the client" : "Crash the server"_tr(),
                        config.permission
                    );
    cmd.overload<Code>()
        .optional("exceptionCode")
        .execute([&](CommandOrigin const&, CommandOutput&, Code const& params) {
            std::thread([&] { RaiseException(params.exceptionCode, 0, 0, nullptr); }).detach();
        });
}
} // namespace ll::command
