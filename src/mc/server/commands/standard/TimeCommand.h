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
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::TimeCommand::InitProxy&& dependencies);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
