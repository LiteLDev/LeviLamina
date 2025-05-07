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
    virtual ~ClientCommandOutputSender() /*override*/ = default;

    // vIndex: 1
    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output) /*override*/;

    // vIndex: 2
    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
