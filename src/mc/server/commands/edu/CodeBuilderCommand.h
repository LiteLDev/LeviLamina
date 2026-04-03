#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CodeBuilderCommand : public ::Command {
public:
    // CodeBuilderCommand inner types define
    enum class Action : int {
        Navigate      = 0,
        Reset         = 1,
        Subscribe     = 2,
        Unsubscribe   = 3,
        RuntimeAction = 4,
        Check         = 5,
    };

    enum class CodeBuilderRuntimeAction : int {
        None  = 0,
        Start = 1,
        Stop  = 2,
        Pause = 3,
    };

    enum class CommandKeyword : uchar {
        None       = 0,
        Code       = 1,
        CodeStatus = 2,
    };

    enum class SubscriptionType : int {
        None       = 0,
        Scoreboard = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::Action>                   mAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::CodeBuilderRuntimeAction> mRuntimeAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::SubscriptionType>         mSubscriptionType;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCode;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCodeStatus;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>                  mPlayerTargets;
    ::ll::TypedStorage<8, 32, ::CommandRawText>                              mURL;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldOpenWindow;
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus>        mCodeExecStatus;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mScoreboardObjective;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~CodeBuilderCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _getActionName() const;
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
