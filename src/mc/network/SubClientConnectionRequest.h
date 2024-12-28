#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class WebToken;
namespace mce { class Color; }
// clang-format on

class SubClientConnectionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaac929;
    ::ll::UntypedStorage<8, 8> mUnkc557a5;
    ::ll::UntypedStorage<8, 8> mUnk2af921;
    // NOLINTEND

public:
    // prevent constructor by default
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&);
    SubClientConnectionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubClientConnectionRequest(::SubClientConnectionRequest const& other);

    MCAPI SubClientConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);

    MCAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCAPI ::std::string getArmSize() const;

    MCAPI ::std::vector<uchar> getCapeData() const;

    MCAPI ::std::string getCapeId() const;

    MCAPI ushort getCapeImageHeight() const;

    MCAPI ushort getCapeImageWidth() const;

    MCAPI ::Certificate const* getCertificate() const;

    MCAPI uint64 getClientRandomId() const;

    MCAPI ::InputMode getCurrentInputMode() const;

    MCAPI ::std::string getDeviceId() const;

    MCAPI ::BuildPlatform getDeviceOS() const;

    MCAPI int getMaxViewDistance() const;

    MCAPI ::DeviceMemoryTier getMemoryTier() const;

    MCAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCAPI ::std::string getPlatformId() const;

    MCAPI ::std::string getPlatformOfflineId() const;

    MCAPI ::std::string getPlatformOnlineId() const;

    MCAPI ::PlatformType getPlatformType() const;

    MCAPI ::std::string getPlayFabId() const;

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

    MCAPI ::std::string getThirdPartyName() const;

    MCAPI bool isCapeOnClassicSkin() const;

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isOverrideSkin() const;

    MCAPI bool isPersonaSkin() const;

    MCAPI bool isPremiumSkin() const;

    MCAPI bool isPrimaryUser() const;

    MCAPI bool isThirdPartyNameOnly() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI ::std::string toString();

    MCAPI bool verify(::std::vector<::std::string> const& trustedKeys, int64 currentTime);

    MCAPI bool verifySelfSigned();

    MCAPI ~SubClientConnectionRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SubClientConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
