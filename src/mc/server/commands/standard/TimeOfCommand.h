#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/TimeCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

struct TimeOfCommand : public ::TimeCommand {
public:
    // TimeOfCommand inner types define
    enum class ClockQuery : int {
        Time = 0,
    };

    enum class CmdName : int {
        Of = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::CmdName>    mCmdName;
    ::ll::TypedStorage<8, 32, ::std::string>              mClockName;
    ::ll::TypedStorage<4, 4, ::TimeOfCommand::ClockQuery> mClockQuery;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND
};
