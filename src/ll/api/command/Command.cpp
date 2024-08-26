#include "ll/api/command/Command.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command::detail {
void printCommandError(::Command const& command, ::CommandOutput& output) noexcept {
    try {
        getLogger().error("Error in command {}:", command.mRegistry->symbolToString(command.mCommandSymbol));
        output.error("command threw an exception");
    } catch (...) {}
    error_utils::printCurrentException(getLogger());
}
} // namespace ll::command::detail
