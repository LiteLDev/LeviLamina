#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"

#include "mc/server/commands/CommandPermissionLevel.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

namespace ll::command {

using namespace ll::i18n_literals;

void registerMemstatsCommand() {
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand(
        "memstats",
        "Query memory stats"_tr(),
        CommandPermissionLevel::Host,
        CommandFlagValue::None
    );
    cmd.overload().execute([&](CommandOrigin const&, CommandOutput&) {
        ll::memory::getDefaultAllocator().logCurrentState();
    });
}
} // namespace ll::command
