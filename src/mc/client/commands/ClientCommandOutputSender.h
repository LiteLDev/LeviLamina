#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputSender.h"

// auto generated forward declare list
// clang-format off
class AutomationCmdOutput;
class CommandOrigin;
class CommandOutput;
// clang-format on

class ClientCommandOutputSender : public ::CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2b28c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCommandOutputSender& operator=(ClientCommandOutputSender const&);
    ClientCommandOutputSender(ClientCommandOutputSender const&);
    ClientCommandOutputSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientCommandOutputSender() /*override*/;

    // vIndex: 1
    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output) /*override*/;

    // vIndex: 2
    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $send(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCAPI void $registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);
    // NOLINTEND
};
