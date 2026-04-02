#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class TimeCommand : public ::Command {
public:
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

    virtual ~TimeCommand() /*override*/ = default;
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
