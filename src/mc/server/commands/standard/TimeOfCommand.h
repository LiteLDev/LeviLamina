#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/standard/ClockTimeMarkerNameCommandParam.h"
#include "mc/server/commands/standard/TimeCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

struct TimeOfCommand : public ::Command {
public:
    // TimeOfCommand inner types define
    enum class ClockQuery : int {
        Time = 0,
    };

    enum class CmdName : int {
        Of = 0,
    };

    enum class Mode : int {
        Set    = 0,
        Add    = 1,
        Query  = 2,
        Pause  = 3,
        Resume = 4,
    };

    enum class TimeMarkerOccurence : int {
        Next     = 0,
        Previous = 1,
        Stay     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mValue;
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::CmdName>             mCmdName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mClockName;
    ::ll::TypedStorage<8, 32, ::ClockTimeMarkerNameCommandParam>   mTimeMarkerName;
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::ClockQuery>          mClockQuery;
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::Mode>                mMode;
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::TimeMarkerOccurence> mTimeMarkerOccurence;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
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
};
