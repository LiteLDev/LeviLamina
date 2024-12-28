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
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);

    MCAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCAPI ::std::string getArmSize() const;

    MCAPI ::std::vector<uchar> getCapeData() const;

    MCAPI ::std::string getCapeId() const;

    MCAPI ushort getCapeImageHeight() const;

    MCAPI ushort getCapeImageWidth() const;

    MCAPI ::Certificate const* getCertificate() const;

    MCAPI ::std::string getClientPlatformId() const;

    MCAPI ::std::string getClientPlatformOfflineId() const;

    MCAPI ::std::string getClientPlatformOnlineId() const;

    MCAPI uint64 getClientRandomId() const;

    MCAPI ::SubClientId getClientSubId() const;

    MCAPI ::std::string getClientThirdPartyName() const;

    MCAPI ::InputMode getCurrentInputMode() const;

    MCAPI ::std::string getDeviceId() const;

    MCAPI ::BuildPlatform getDeviceOS() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCAPI int getMaxViewDistance() const;

    MCAPI ::DeviceMemoryTier getMemoryTier() const;

    MCAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCAPI ::PlatformType getPlatformType() const;

    MCAPI ::std::string getPlayFabIdUnverified() const;

    MCAPI ::std::string getSelfSignedId() const;

    MCAPI ::std::string getSkinAnimationData() const;

    MCAPI ::mce::Color getSkinColor() const;

    MCAPI ::std::vector<uchar> getSkinData() const;

    MCAPI ::std::string getSkinGeometry() const;

    MCAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCAPI ::std::string getSkinId() const;

    MCAPI ushort getSkinImageHeight() const;

    MCAPI ushort getSkinImageWidth() const;

    MCAPI ::std::string getSkinResourcePatch() const;

    MCAPI bool isCapeOnClassicSkin() const;

    MCAPI bool isClientThirdPartyNameOnly() const;

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isEduMode() const;

    MCAPI bool isOverrideSkin() const;

    MCAPI bool isPersonaSkin() const;

    MCAPI bool isPremiumSkin() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI bool isValid() const;

    MCAPI ::std::string toString();

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
    MCAPI void $dtor();
    // NOLINTEND
};
