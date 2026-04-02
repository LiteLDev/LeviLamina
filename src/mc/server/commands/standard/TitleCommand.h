#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class TitleCommand : public ::MessagingCommand {
public:
    // TitleCommand inner types define
    enum class Mode : int {
        Clear     = 0,
        Reset     = 1,
        Title     = 2,
        Subtitle  = 3,
        ActionBar = 4,
        Times     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TitleCommand::Mode>          mMode;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 32, ::CommandMessage>             mMessage;
    ::ll::TypedStorage<4, 4, int>                           mFadeIn;
    ::ll::TypedStorage<4, 4, int>                           mStay;
    ::ll::TypedStorage<4, 4, int>                           mFadeOut;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~TitleCommand() /*override*/ = default;
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
