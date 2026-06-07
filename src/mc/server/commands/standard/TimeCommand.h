#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class WorldClockRegistry;
// clang-format on

class TimeCommand : public ::Command {
public:
    // TimeCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // TimeCommand inner types define
    enum class Mode : int {
        Set   = 0,
        Add   = 1,
        Query = 2,
    };

    enum class Query : int {
        DayTime  = 0,
        GameTime = 1,
        Day      = 2,
    };

    enum class TimeSpec : int {
        Sunrise     = 0,
        Day         = 1,
        Noon        = 2,
        Sunset      = 3,
        Night       = 4,
        Midnight    = 5,
        Unspecified = 6,
    };

    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const>> mWorldClockRegistry;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit InitProxy(::Level const& level);

        MCAPI ~InitProxy();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Level const& level);
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
    ::ll::TypedStorage<4, 4, ::TimeCommand::Mode>     mMode;
    ::ll::TypedStorage<4, 4, ::TimeCommand::Query>    mQuery;
    ::ll::TypedStorage<4, 4, ::TimeCommand::TimeSpec> mSpec;
    ::ll::TypedStorage<4, 4, int>                     mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addTime(::Level& level, ::CommandOutput& output) const;

    MCAPI void _queryTime(::Level const& level, ::CommandOutput& output) const;

    MCAPI void _setTime(::Level& level, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::TimeCommand::InitProxy&& dependencies);
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
