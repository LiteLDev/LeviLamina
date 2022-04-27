#pragma once
#include <MC/Command.hpp>
#include "../MC/Types.hpp"

class __Command : public Command
{
public:
    using Base = Command;

    // protected
    inline int GetVersion()
    {
        return version;
    }
    // protected
    inline void SetVersion(int val)
    {
        version = val;
    }
    // protected
    inline ::CommandRegistry* GetRegistry()
    {
        return registry;
    }
    // protected
    inline void SetRegistry(::CommandRegistry* val)
    {
        registry = val;
    }
    // protected
    inline ::CommandPermissionLevel GetPermission()
    {
        return permission;
    }
    // protected
    inline void SetPermission(::CommandPermissionLevel val)
    {
        permission = val;
    }
    // protected
    inline ::CommandFlag GetFlag()
    {
        return flag;
    }
    // protected
    inline void SetFlag(::CommandFlag val)
    {
        flag = val;
    }





    // protected
    class ::CommandRegistry const& getRegistry() const
    {
        return Base::getRegistry();
    }
    // protected
    void sendTelemetry(::CommandOrigin const& co, ::CommandOutput& cop) const
    {
        return Base::sendTelemetry(co, cop);
    }
    // protected
    bool shouldSendTelemetry(::CommandOrigin const& co) const
    {
        return Base::shouldSendTelemetry(co);
    }
    // protected
    static class Player* getPlayerFromOrigin(::CommandOrigin const& co)
    {
        return Base::getPlayerFromOrigin(co);
    }
    // protected
    static bool isTemplateLockedAction(::CommandOrigin const& co)
    {
        return Base::isTemplateLockedAction(co);
    }
    // protected
    static bool isWildcard(::CommandSelectorBase const& csb)
    {
        return Base::isWildcard(csb);
    }
    // protected
    static bool validData(int a0, unsigned short& a1, ::CommandOutput& co)
    {
        return Base::validData(a0, a1, co);
    }
};

#include "CommandRegistry.hpp"
#include "CommandFlag.hpp"

namespace MC
{
public
enum class CommandPermissionLevel : char
{
    Any = 0,
    GameMasters = 1,
    Admin = 2,
    HostPlayer = 3,
    Console = 4,
    Internal = 5,
};

public
enum class OriginType : char
{
    Player = 0,
    Block = 1,
    MinecartBlock = 2,
    DevConsole = 3,
    Test = 4,
    AutomationPlayer = 5,
    ClientAutomation = 6,
    DedicatedServer = 7,
    Actor = 8,
    Virtual = 9,
    GameArgument = 10,
    ActorServer = 11
};

public
ref class Command : ClassTemplate<Command, ::__Command>
{
public:
    __ctor(Command, __Command);

protected:
    property int Version
    {
        int get()
        {
            return NativePtr->GetVersion();
        }
        void set(int value)
        {
            NativePtr->SetVersion(value);
        }
    }
    property CommandRegistry ^ Registry {
        CommandRegistry ^ get() {
            return gcnew CommandRegistry(NativePtr->GetRegistry());
        };
        void set(CommandRegistry ^ value)
        {
            NativePtr->SetRegistry(value);
        }
    };
    property CommandPermissionLevel Permission
    {
        CommandPermissionLevel get()
        {
            return CommandPermissionLevel(NativePtr->GetPermission());
        };
        void set(CommandPermissionLevel value)
        {
            NativePtr->SetPermission(::CommandPermissionLevel(value));
        }
    };

    property CommandFlag ^ Flag {
        CommandFlag ^ get() {
            auto ret = gcnew CommandFlag{};
            ret->value = CommandFlagValue(NativePtr->GetFlag().value);
            return ret;
        };
        void set(CommandFlag ^ val)
        {
            NativePtr->SetFlag(::CommandFlag{::CommandFlagValue(val->value)});
        };
    };

public:
    //System::String ^ GetCommandName();
};
} // namespace MC
