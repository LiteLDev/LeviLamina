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

    MCFOLD ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCFOLD ::std::string getArmSize() const;

    MCFOLD ::std::vector<uchar> getCapeData() const;

    MCFOLD ::std::string getCapeId() const;

    MCFOLD ushort getCapeImageHeight() const;

    MCFOLD ushort getCapeImageWidth() const;

    MCFOLD ::Certificate const* getCertificate() const;

    MCFOLD uint64 getClientRandomId() const;

    MCFOLD ::InputMode getCurrentInputMode() const;

    MCFOLD ::std::string getDeviceId() const;

    MCFOLD ::BuildPlatform getDeviceOS() const;

    MCFOLD int getMaxViewDistance() const;

    MCFOLD ::DeviceMemoryTier getMemoryTier() const;

    MCFOLD ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCFOLD ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCFOLD ::std::string getPlatformId() const;

    MCFOLD ::std::string getPlatformOfflineId() const;

    MCFOLD ::std::string getPlatformOnlineId() const;

    MCFOLD ::PlatformType getPlatformType() const;

    MCFOLD ::std::string getPlayFabId() const;

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

    MCFOLD ::std::string getThirdPartyName() const;

    MCFOLD bool isCapeOnClassicSkin() const;

    MCFOLD bool isCompatibleWithClientSideChunkGen() const;

    MCFOLD bool isOverrideSkin() const;

    MCFOLD bool isPersonaSkin() const;

    MCFOLD bool isPremiumSkin() const;

    MCAPI bool isPrimaryUser() const;

    MCFOLD bool isThirdPartyNameOnly() const;

    MCFOLD bool isTrustedSkin() const;

    MCFOLD ::std::string toString();

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
    MCFOLD void $dtor();
    // NOLINTEND
};
