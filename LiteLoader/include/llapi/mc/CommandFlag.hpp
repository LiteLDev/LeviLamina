#pragma once

// maybe outdated.
enum class CommandFlagValue : unsigned short
{
    None = 0x0,
    Usage = 0x1,
    Visibility2 = 0x2,
    Visibility4 = 0x4,
    Visibility6 = 0x6,
    Sync = 0x8,
    Execute = 0x10,
    Type = 0x20,
    Cheat = 0x40,
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
        value = (CommandFlagValue)((char)rhs.value | (char)value);
        return *this;
    }
};