#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/level/chunk/AreaType.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class FunctionEntry;
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
        ::ll::TypedStorage<8, 8, ::FunctionEntry*> mFunctionEntry;
        ::ll::TypedStorage<8, 32, ::std::string>   mResolvedPath;
        ::ll::TypedStorage<1, 1, bool>             mIsValid;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FunctionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::ScheduleAction> mScheduleAction;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::RequestAction>  mRequestAction;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::DelayMode>      mDelayMode;
    ::ll::TypedStorage<1, 1, ::AreaType>                        mAreaType;
    ::ll::TypedStorage<4, 4, ::ScheduleCommand::ClearType>      mClearType;
    ::ll::TypedStorage<8, 32, ::CommandFilePath>                mFilePath;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                mTo;
    ::ll::TypedStorage<4, 4, int>                               mRadius;
    ::ll::TypedStorage<4, 4, int>                               mTime;
    ::ll::TypedStorage<1, 1, bool>                              mSecondsSet;
    ::ll::TypedStorage<1, 1, bool>                              mDaysSet;
    ::ll::TypedStorage<8, 32, ::std::string>                    mTickingAreaName;
    // NOLINTEND

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
