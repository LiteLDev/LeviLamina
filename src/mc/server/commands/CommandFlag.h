#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/flags/CommandAsyncFlag.h"
#include "mc/server/commands/flags/CommandCheatFlag.h"
#include "mc/server/commands/flags/CommandEditorFlag.h"
#include "mc/server/commands/flags/CommandExecuteFlag.h"
#include "mc/server/commands/flags/CommandSyncFlag.h"
#include "mc/server/commands/flags/CommandTypeFlag.h"
#include "mc/server/commands/flags/CommandUsageFlag.h"
#include "mc/server/commands/flags/CommandVisibilityFlag.h"


enum class CommandFlagValue : ushort {
    None                         = 0,
    UsageTest                    = 1 << 0,
    HiddenFromCommandBlockOrigin = 1 << 1,
    HiddenFromPlayerOrigin       = 1 << 2,
    HiddenFromAutomationOrigin   = 1 << 3,
    SyncLocal                    = 1 << 4,
    ExecuteDisallowed            = 1 << 5,
    TypeMessage                  = 1 << 6,
    NotCheat                     = 1 << 7,
    Async                        = 1 << 8,
    NoEditor                     = 1 << 9,
    Hidden                       = HiddenFromPlayerOrigin | HiddenFromCommandBlockOrigin,
    Removed                      = Hidden | HiddenFromAutomationOrigin,
};

[[nodiscard]] constexpr CommandFlagValue operator|(const CommandFlagValue l, const CommandFlagValue r) noexcept {
    return static_cast<CommandFlagValue>(
        static_cast<std::underlying_type_t<CommandFlagValue>>(l)
        | static_cast<std::underlying_type_t<CommandFlagValue>>(r)
    );
}
[[nodiscard]] constexpr CommandFlagValue operator&(const CommandFlagValue l, const CommandFlagValue r) noexcept {
    return static_cast<CommandFlagValue>(
        static_cast<std::underlying_type_t<CommandFlagValue>>(l)
        & static_cast<std::underlying_type_t<CommandFlagValue>>(r)
    );
}

struct CommandFlag {
public:
    CommandFlagValue value;

    CommandFlag(CommandFlagValue value) : value(value) {} // NOLINT

    [[nodiscard]] constexpr bool operator==(CommandFlag const& rhs) const noexcept { return value == rhs.value; }
    [[nodiscard]] constexpr bool operator!=(CommandFlag const& rhs) const noexcept { return value != rhs.value; }
    CommandFlag&                 operator|=(CommandFlag const& rhs) {
        value = rhs.value | value;
        return *this;
    }
    CommandFlag& operator|=(CommandFlagValue rhs) {
        value = rhs | value;
        return *this;
    }

    CommandFlag& remove(CommandFlagValue rhs) {
        value = (CommandFlagValue)((ushort)value & !(ushort)rhs);
        return *this;
    }
};
