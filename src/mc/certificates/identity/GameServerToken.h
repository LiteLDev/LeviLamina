#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
class PrivateKeyManager;
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
namespace mce { class UUID; }
struct LocalGameServerToken;
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
    GameServerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameServerToken(::std::string const& tokenString);

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI bool getIsHost() const;

    MCAPI ::mce::UUID getLegacyUuid() const;

    MCAPI int64 getMinecraftAccountPermissions() const;

    MCAPI ::std::string getNintendoName() const;

    MCAPI ::std::string getNintendoServiceId() const;

    MCAPI ::std::string getPlayFabId() const;

    MCAPI ::std::string getPlayStationName() const;

    MCAPI ::std::string getPsnId() const;

    MCAPI ::PlayerAuthenticationInfo getTrustedInfo() const;

    MCAPI ::std::string getXboxLiveName() const;

    MCAPI ::std::string getXuid() const;

    MCAPI bool hasMatchingIssuer(::MinecraftServiceKeyManager const& serviceKeyManager);

    MCAPI bool validate(::MinecraftServiceKeyManager const& serviceKeyManager, int64 currentTime, bool checkExpiration);

    MCAPI bool validateSelfSigned(int64 currentTime, bool checkExpiration);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _checkExpiration(::WebToken const& token, int64 currentTime);

    MCAPI static bool _validate(
        ::WebToken const&                   token,
        ::MinecraftServiceKeyManager const& keyManager,
        int64                               currentTime,
        bool                                checkExpiration
    );

    MCAPI static bool _validateSelfSigned(::WebToken const& token, int64 currentTime, bool checkExpiration);

    MCAPI static ::GameServerToken create(::RawGameServerToken const& rawToken);

#ifdef LL_PLAT_C
    MCAPI static ::RawGameServerToken createLocal(
        ::PrivateKeyManager const&        signer,
        int64                             expirationDate,
        ::std::string const&              keyId,
        ::PlayerAuthenticationInfo const& claims
    );
#endif

    MCAPI static ::GameServerToken createSelfSigned(::RawGameServerToken const& rawToken);

#ifdef LL_PLAT_C
    MCAPI static ::PlayerAuthenticationInfo
    trustTokenWeAreAbsolutelySureIsLocal(::LocalGameServerToken const& localToken);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& tokenString);
    // NOLINTEND
};
