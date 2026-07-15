#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandMessage.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ScriptEventCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mMessageId;
    ::ll::TypedStorage<8, 32, ::CommandMessage> mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
