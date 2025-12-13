#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class FunctionManager;
class ServerLevel;
// clang-format on

class ScheduleCommand : public ::Command {
public:
    // ScheduleCommand inner types declare
    // clang-format off
    struct FunctionInfo;
    // clang-format on

    // ScheduleCommand inner types define
    enum class ClearType : int {
        FunctionName    = 0,
        TickingAreaName = 1,
    };

    enum class DelayMode : int {
        Append  = 0,
        Replace = 1,
    };

    enum class RequestAction : int {
        Add   = 0,
        Clear = 1,
    };

    enum class ScheduleAction : int {
        Clear        = 0,
        Delay        = 1,
        OnAreaLoaded = 2,
    };

    struct FunctionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkbf799d;
        ::ll::UntypedStorage<8, 32> mUnk5133b9;
        ::ll::UntypedStorage<1, 1>  mUnkbd23dd;
        // NOLINTEND

    public:
        // prevent constructor by default
        FunctionInfo& operator=(FunctionInfo const&);
        FunctionInfo(FunctionInfo const&);
        FunctionInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FunctionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke40fb1;
    ::ll::UntypedStorage<4, 4>  mUnk15c438;
    ::ll::UntypedStorage<4, 4>  mUnk59eba9;
    ::ll::UntypedStorage<1, 1>  mUnk15a207;
    ::ll::UntypedStorage<4, 4>  mUnk52f24d;
    ::ll::UntypedStorage<8, 32> mUnk4b1088;
    ::ll::UntypedStorage<4, 16> mUnk30f1ab;
    ::ll::UntypedStorage<4, 16> mUnk53ab9e;
    ::ll::UntypedStorage<4, 4>  mUnk455eaf;
    ::ll::UntypedStorage<4, 4>  mUnk1d297b;
    ::ll::UntypedStorage<1, 1>  mUnk979741;
    ::ll::UntypedStorage<1, 1>  mUnk72757f;
    ::ll::UntypedStorage<8, 32> mUnk2d7153;
    // NOLINTEND

public:
    // prevent constructor by default
    ScheduleCommand& operator=(ScheduleCommand const&);
    ScheduleCommand(ScheduleCommand const&);
    ScheduleCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~ScheduleCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _clear(::ServerLevel& serverLevel, ::Dimension& dimension, ::CommandOutput& output) const;

    MCAPI void _delayAdd(::ServerLevel& serverLevel, ::Dimension& dimension, ::CommandOutput& output) const;

    MCAPI void _delayClear(::ServerLevel& serverLevel, ::Dimension& dimension, ::CommandOutput& output) const;

    MCAPI void _onAreaLoadedAdd(
        ::CommandOrigin const& origin,
        ::ServerLevel&         serverLevel,
        ::Dimension&           dimension,
        ::CommandOutput&       output
    ) const;

    MCAPI void _onAreaLoadedClear(::ServerLevel& serverLevel, ::Dimension& dimension, ::CommandOutput& output) const;

    MCAPI ::ScheduleCommand::FunctionInfo
    _tryGetFunction(::FunctionManager& functionManager, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
