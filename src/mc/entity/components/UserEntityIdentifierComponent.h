#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class GameServerToken;
class NetworkIdentifier;
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mClientSubId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>          mClientUUID;
    ::ll::TypedStorage<8, 32, ::std::string>        mPlayFabIdUnverified;
    ::ll::TypedStorage<8, 8, ::GameServerToken>     mGameServerToken;
    // NOLINTEND

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);

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
