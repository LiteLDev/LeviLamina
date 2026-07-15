#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class PlayAnimationCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>               mAnimation;
    ::ll::TypedStorage<8, 32, ::std::string>               mNextState;
    ::ll::TypedStorage<8, 32, ::std::string>               mStopExpression;
    ::ll::TypedStorage<8, 32, ::std::string>               mController;
    ::ll::TypedStorage<4, 4, float>                        mBlendOutTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
