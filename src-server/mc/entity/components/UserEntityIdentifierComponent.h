#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientSubId;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mClientUUID;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType> mAuthenticationType;
    ::ll::TypedStorage<8, 272, ::PlayerAuthenticationInfo> mTrustedPlayerInfo;
    // NOLINTEND

};
