#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/GameServerTokenValidationResult.h"
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
class PrivateKeyManager;
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
// clang-format on

class GameServerToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsSelfSigned;
    ::ll::TypedStorage<1, 1, bool>         mIsValid;
    ::ll::TypedStorage<1, 1, bool>         mIsLocal;
    ::ll::TypedStorage<8, 128, ::WebToken> mRawToken;
    // NOLINTEND

public:
    // prevent constructor by default
    GameServerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameServerToken(::std::string const& tokenString);

    MCAPI ::PlayerAuthenticationInfo getTrustedInfo() const;

    MCAPI bool hasMatchingIssuer(::MinecraftServiceKeyManager const& serviceKeyManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _checkExpiration(::WebToken const& token, int64 currentTime);

    MCAPI static ::GameServerTokenValidationResult _validate(
        ::WebToken const&                   token,
        ::MinecraftServiceKeyManager const& keyManager,
        int64                               currentTime,
        bool                                checkExpiration
    );

    MCAPI static ::GameServerTokenValidationResult
    _validateSelfSigned(::WebToken const& token, int64 currentTime, bool checkExpiration);

#ifdef LL_PLAT_C
    MCAPI static ::RawGameServerToken createLocal(
        ::PrivateKeyManager const&        signer,
        int64                             expirationDate,
        ::std::string const&              keyId,
        ::PlayerAuthenticationInfo const& claims
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& tokenString);
    // NOLINTEND
};
