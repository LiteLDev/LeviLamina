#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LegacyMultiplayerToken.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
// clang-format on

struct SubClientAuthInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>       userSigner;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType> authenticationType;
    ::ll::TypedStorage<8, 8, ::LegacyMultiplayerToken>   token;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>      newToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SubClientAuthInfo& operator=(SubClientAuthInfo const&);
    SubClientAuthInfo(SubClientAuthInfo const&);
    SubClientAuthInfo();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
