#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Level;
// clang-format on

class SaveCommand : public ::ServerCommand {
public:
    // SaveCommand inner types define
    enum class Mode : int {
        Hold   = 0,
        Resume = 1,
        Query  = 2,
    };

    enum class State : int {
        Idle     = 0,
        Saving   = 1,
        Complete = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SaveCommand::Mode> mMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool saveHold(::Level& level);

    MCAPI static bool saveResume(::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND
};
