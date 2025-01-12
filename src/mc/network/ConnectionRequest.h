#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class Certificate;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
class UnverifiedCertificate;
class WebToken;
namespace mce { class Color; }
// clang-format on

class ConnectionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnverifiedCertificate>> mCertificateData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Certificate>>           mCertificate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>>              mRawToken;
    ::ll::TypedStorage<1, 1, ::SubClientId>                              mClientSubId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);

    MCFOLD ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCFOLD ::std::string getArmSize() const;

    MCFOLD ::std::vector<uchar> getCapeData() const;

    MCFOLD ::std::string getCapeId() const;

    MCFOLD ushort getCapeImageHeight() const;

    MCFOLD ushort getCapeImageWidth() const;

    MCFOLD ::Certificate const* getCertificate() const;

    MCFOLD ::std::string getClientPlatformId() const;

    MCFOLD ::std::string getClientPlatformOfflineId() const;

    MCFOLD ::std::string getClientPlatformOnlineId() const;

    MCFOLD uint64 getClientRandomId() const;

    MCFOLD ::SubClientId getClientSubId() const;

    MCFOLD ::std::string getClientThirdPartyName() const;

    MCFOLD ::InputMode getCurrentInputMode() const;

    MCFOLD ::std::string getDeviceId() const;

    MCFOLD ::BuildPlatform getDeviceOS() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCFOLD int getMaxViewDistance() const;

    MCFOLD ::DeviceMemoryTier getMemoryTier() const;

    MCFOLD ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCFOLD ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCFOLD ::PlatformType getPlatformType() const;

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

    MCFOLD bool isCapeOnClassicSkin() const;

    MCFOLD bool isClientThirdPartyNameOnly() const;

    MCFOLD bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isEduMode() const;

    MCFOLD bool isOverrideSkin() const;

    MCFOLD bool isPersonaSkin() const;

    MCFOLD bool isPremiumSkin() const;

    MCFOLD bool isTrustedSkin() const;

    MCAPI bool isValid() const;

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
    MCAPI void* $ctor(::ConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
