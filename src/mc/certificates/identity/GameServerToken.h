#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/WebToken.h"
#include "mc/options/DiscoveryEnvironment.h"

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
    ::ll::TypedStorage<8, 128, ::WebToken> mRawToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::DiscoveryEnvironment> getIssuerEnvironment() const;

    MCAPI ::PlayerAuthenticationInfo getTrustedInfo() const;

    MCAPI ::std::string getXuid(bool trustSelfSigned) const;

    MCAPI ~GameServerToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _validate(
        ::WebToken const&                   token,
        ::MinecraftServiceKeyManager const& keyManager,
        int64                               currentTime,
        bool                                checkExpiration
    );

    MCAPI static bool _validateSelfSigned(::WebToken const& token, int64 currentTime, bool checkExpiration);

    MCAPI static ::GameServerToken
    createAndValidateSelfSigned(::RawGameServerToken const& rawToken, bool checkExpiration);

    MCAPI_C static ::RawGameServerToken createSelfSigned(
        ::PrivateKeyManager const&        signer,
        int64                             expirationDate,
        ::std::string const&              keyId,
        ::PlayerAuthenticationInfo const& claims
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
