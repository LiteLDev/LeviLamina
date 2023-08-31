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


enum class CommandFlagValue : uint16_t {
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

struct CommandFlag {

public:
    enum class CommandFlagValue value;

    constexpr bool operator==(CommandFlag const& rhs) const noexcept { return value == rhs.value; }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept { return value != rhs.value; }
    CommandFlag&   operator|=(CommandFlag const& rhs) {
        value = (CommandFlagValue)((uint16_t)rhs.value | (uint16_t)value);
        return *this;
    }
};
