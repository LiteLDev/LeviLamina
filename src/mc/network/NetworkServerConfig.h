#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkPermissions.h"
#include "mc/network/ServerPlayerJoinBehavior.h"

struct NetworkServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                serverType;
    ::ll::TypedStorage<1, 1, bool>                          requireTrustedAuthentication;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> extraTrustedKeys;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>          networkPermissions;
    ::ll::TypedStorage<1, 1, bool>                          allowSubclientLogin;
    ::ll::TypedStorage<1, 1, bool>                          enablePacketReceiptEventing;
    ::ll::TypedStorage<4, 4, ::ServerPlayerJoinBehavior>    defaultJoinBehavior;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NetworkServerConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
