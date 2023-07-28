#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandFlagValue : unsigned short {
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

enum class CommandUsageFlag : unsigned short {
    Normal = 0,
    Test   = 1 << 0,
};

enum class CommandVisibilityFlag : unsigned short {
    Visible                      = 0,
    HiddenFromCommandBlockOrigin = 1 << 1,
    HiddenFromPlayerOrigin       = 1 << 2,
    HiddenFromAutomationOrigin   = 1 << 3,
    Hidden                       = HiddenFromPlayerOrigin | HiddenFromCommandBlockOrigin,
    Removed                      = Hidden | HiddenFromAutomationOrigin,
};

enum class CommandSyncFlag : unsigned short {
    Synced = 0,
    Local  = 1 << 4,
};

enum class CommandExecuteFlag : unsigned short {
    Allowed    = 0,
    Disallowed = 1 << 5,
};

enum class CommandTypeFlag : unsigned short {
    None    = 0,
    Message = 1 << 6,
};

enum class CommandCheatFlag : unsigned short {
    Cheat    = 0,
    NotCheat = 1 << 7,
};

enum class CommandAsyncFlag : unsigned short {
    Synch = 0,
    Async = 1 << 8,
};

enum class CommandEditorFlag : unsigned short {
    Editor   = 0,
    NoEditor = 1 << 9,
};

struct CommandFlag {

public:
    enum class CommandFlagValue value;

    constexpr bool operator==(CommandFlag const& rhs) const noexcept { return value == rhs.value; }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept { return value != rhs.value; }
    CommandFlag&   operator|=(CommandFlag const& rhs) {
        value = (CommandFlagValue)((unsigned short)rhs.value | (unsigned short)value);
        return *this;
    }
};
