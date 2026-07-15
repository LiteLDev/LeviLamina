#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class MeCommand : public ::MessagingCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CommandMessage> mMessage;
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
