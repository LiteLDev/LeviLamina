#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LessonAction.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/edu/LessonActionType.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class LessonCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<1, 1, ::LessonActionType>            mActionType;
    ::ll::TypedStorage<1, 1, ::LessonAction>                mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                mActivityId;
    ::ll::TypedStorage<4, 4, int>                           mScore;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~LessonCommand() /*override*/ = default;
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
