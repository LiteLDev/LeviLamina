#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/GameServerToken.h"
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mClientSubId;
    ::ll::TypedStorage<8, 32, ::std::string>        mPlayFabIdUnverified;
    ::ll::TypedStorage<8, 16, ::mce::UUID>          mClientUUID;
    ::ll::TypedStorage<8, 8, ::GameServerToken>     mGameServerToken;
    // NOLINTEND

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::UserEntityIdentifierComponent& operator=(::UserEntityIdentifierComponent&&);

    MCAPI ~UserEntityIdentifierComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
