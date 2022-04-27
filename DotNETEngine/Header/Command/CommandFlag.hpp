#pragma once
#include <MC/CommandFlag.hpp>
namespace MC
{
enum class CommandFlagValue : char
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

public
ref struct CommandFlag
{
    CommandFlagValue value;

    static bool operator==(CommandFlag ^ obj, CommandFlag ^ rhs)
    {
        return obj->value == rhs->value;
    }
    static bool operator!=(CommandFlag ^ obj, CommandFlag ^ rhs)
    {
        return obj->value != rhs->value;
    }
    static CommandFlag ^ operator|=(CommandFlag ^ obj, CommandFlag ^ rhs)
    {
        obj->value = (CommandFlagValue)((char)rhs->value | (char)obj->value);
        return obj;
    }

    operator ::CommandFlag()
    {
        return ::CommandFlag{::CommandFlagValue(value)};
    }
};
} // namespace MC
