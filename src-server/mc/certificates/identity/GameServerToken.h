#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/WebToken.h"
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
struct PlayerAuthenticationInfo;
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
    // prevent constructor by default
    GameServerToken(GameServerToken const&);
    GameServerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::DiscoveryEnvironment> getIssuerEnvironment() const;

    MCAPI ::PlayerAuthenticationInfo getTrustedInfo() const;

    MCAPI ::std::string getXuid(bool trustSelfSigned) const;

    MCAPI ::GameServerToken const& operator=(::GameServerToken const& other);

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
