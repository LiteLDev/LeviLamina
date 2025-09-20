#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/WebToken.h"
#include "mc/certificates/identity/GameServerToken.h"
#include "mc/certificates/identity/LegacyMultiplayerToken.h"
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
class UnverifiedCertificate;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ConnectionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                       mIsVerified;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>>              mRawToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnverifiedCertificate>> mCertificateData;
    ::ll::TypedStorage<8, 8, ::LegacyMultiplayerToken>                   mLegacyMultiplayerToken;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>                      mUnverifiedGameServerToken;
    ::ll::TypedStorage<8, 136, ::GameServerToken>                        mVerifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>                 mAuthenticationType;
    ::ll::TypedStorage<8, 272, ::PlayerAuthenticationInfo>               mAuthenticationInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);

    MCFOLD ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCFOLD ::std::string getArmSize() const;

    MCFOLD ::std::vector<uchar> getCapeData() const;

    MCFOLD ::std::string getCapeId() const;

    MCFOLD ::std::string getClientPlatformId() const;

    MCFOLD ::std::string getClientPlatformOfflineId() const;

    MCFOLD ::std::string getClientPlatformOnlineId() const;

    MCFOLD uint64 getClientRandomId() const;

    MCFOLD ::std::string getClientThirdPartyName() const;

    MCFOLD ::std::string getDeviceId() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCFOLD ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCFOLD ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCFOLD ::std::string getPlayFabIdUnverified() const;

    MCFOLD ::std::string getSelfSignedId() const;

    MCFOLD ::std::string getSkinAnimationData() const;

    MCFOLD ::mce::Color getSkinColor() const;

    MCFOLD ::std::vector<uchar> getSkinData() const;

    MCAPI ::std::string getSkinGeometry() const;

    MCFOLD ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCFOLD ::std::string getSkinId() const;

    MCFOLD ushort getSkinImageHeight() const;

    MCFOLD ushort getSkinImageWidth() const;

    MCAPI ::std::string getSkinResourcePatch() const;

    MCFOLD void invalidate();

    MCFOLD bool isPersonaSkin() const;

    MCAPI bool isWellFormed() const;

    MCFOLD ::std::string toString();

    MCAPI bool verify(::std::vector<::std::string> const& trustedKeys, int64 currentTime, bool checkExpired);

    MCAPI bool verifySelfSigned(bool checkExpired);

    MCAPI ~ConnectionRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
