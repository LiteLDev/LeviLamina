#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/Certificate.h"
#include "mc/certificates/identity/GameServerToken.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"

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
    ::NetworkIdentifier mNetworkId;
    ::SubClientId       mClientSubId;
    ::mce::UUID         mClientUUID;
    ::std::string       mPlayFabIdUnverified;
    ::GameServerToken   mGameServerToken;
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
