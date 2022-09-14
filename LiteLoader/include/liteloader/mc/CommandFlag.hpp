#pragma once

enum class CommandFlagValue : unsigned short
{
    None = 0,
    Usage = 1,
    Visibility2 = 2,
    Visibility4 = 4,
    Visibility6 = 6,
    Sync = 8,
    Execute = 16,
    Type = 32,
    Cheat = 64,
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