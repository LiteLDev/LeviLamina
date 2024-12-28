#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class AutomationCmdOutput;
class CommandOrigin;
class CommandOutput;
// clang-format on

class CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9d00b4;
    ::ll::UntypedStorage<8, 8>  mUnkf1fd72;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputSender& operator=(CommandOutputSender const&);
    CommandOutputSender(CommandOutputSender const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOutputSender();

    // vIndex: 1
    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output);

    // vIndex: 2
    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutputSender();

    MCAPI void
    sendToAdmins(::CommandOrigin const& origin, ::CommandOutput const& output, ::CommandPermissionLevel opPermLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
