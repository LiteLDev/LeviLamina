#pragma once

enum class CommandFlagValue : unsigned short
{
    None = 0x00,
    Usage = 0x01,
    Visibility2 = 0x02,
    Visibility4 = 0x04,
    Visibility6 = 0x06,	
	Unknown8 = 0x08,
    Sync = 0x10,
    Execute = 0x20,
    Type = 0x40,
    Cheat = 0x80,
    Async = 0x100,
};

enum class CommandUsageFlag : unsigned short {
    Normal = 0x00,
    Test = 0x1,
};

enum class CommandVisibilityFlag : unsigned short {
    Visible = 0x00,
    HiddenFromCommandBlockOrigin = 0x02,
    HiddenFromPlayerOrigin = 0x04,
    Hidden = 0x06,
};

//
enum class CommmandUnknown8Flag : unsigned short {
    None = 0x00,
    Unknown = 0x08,
};

enum class CommandSyncFlag : unsigned short {
    Synced = 0x00,
    Local = 0x10,
};

enum class CommandExecuteFlag : unsigned short {
    Allowed = 0x00,
    Disallowed = 0x20,
};

enum class CommandTypeFlag : unsigned short {
    None = 0x00,
    Message = 0x40,
};

enum class CommandCheatFlag : unsigned short {
    Cheat = 0x00,
    NotCheat = 0x80,
};

enum class CommandAsyncFlag : unsigned short {
    Synch = 0x00,
    Async = 0x100,
};


struct CommandFlag
{
    CommandFlagValue value;

    constexpr bool operator==(CommandFlag const& rhs) const noexcept
    {
        return value == rhs.value;
    }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept
    {
        return value != rhs.value;
    }
    CommandFlag& operator|=(CommandFlag const& rhs)
    {
        value = (CommandFlagValue)((unsigned short)rhs.value | (unsigned short)value);
        return *this;
    }
};