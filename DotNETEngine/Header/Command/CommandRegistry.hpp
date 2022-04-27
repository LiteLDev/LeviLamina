#pragma once
#include <MC/CommandRegistry.hpp>
#include "MC/Types.hpp"

namespace MC
{

generic<typename T> public ref class typeid_t
{
public:
    unsigned short value;
    typeid_t<T>(typeid_t<T> const ^ id)
        : value(id->value)
    {
    }
    typeid_t<T>(unsigned short value)
        : value(value)
    {
    }
};

public
ref class CommandRegistry : ClassTemplate<CommandRegistry, ::CommandRegistry>
{
public:
    __ctor(CommandRegistry, ::CommandRegistry);

    enum class CommandPermissionLevel : char
    {
        Any = 0,
        GameMasters = 1,
        Admin = 2,
        HostPlayer = 3,
        Console = 4,
        Internal = 5,
    };

    void RegisterCommand(System::String ^ cmd,
                               System::String ^ describe,
                               CommandPermissionLevel cmdLevel)
    {
        NativePtr->registerCommand(
            marshalString<Encoding::E_UTF8>(cmd),
            marshalString<Encoding::E_UTF8>(describe).c_str(),
            (::CommandPermissionLevel)cmdLevel,
            {(::CommandFlagValue)0},
            {(::CommandFlagValue)0x80});
    }
};
} // namespace MC