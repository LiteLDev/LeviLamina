#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class PrivateKeyManager;
// clang-format on

class ServerIdentityCommand : public ::ServerCommand {
public:
    // ServerIdentityCommand inner types define
    enum class Action : int {
        Save   = 0,
        Delete = 1,
        Status = 2,
    };

    using Registrator = ::brstd::move_only_function<void(::CommandRegistry&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ServerIdentityCommand::Action>       mAction;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PrivateKeyManager>> mServerIdentityKey;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND
};
