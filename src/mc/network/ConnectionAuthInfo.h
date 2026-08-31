#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
// clang-format on

struct ConnectionAuthInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&> userSigner;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType> authenticationType;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>      gameServerToken;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionAuthInfo& operator=(ConnectionAuthInfo const&);
    ConnectionAuthInfo(ConnectionAuthInfo const&);
    ConnectionAuthInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~ConnectionAuthInfo();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
