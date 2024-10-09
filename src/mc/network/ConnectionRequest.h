#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ConnectionRequest {
public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

public:
    // NOLINTBEGIN
    MCAPI ConnectionRequest(class ConnectionRequest const& other);

    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;

    MCAPI std::string getArmSize() const;

    MCAPI std::vector<uchar> getCapeData() const;

    MCAPI std::string getCapeId() const;

    MCAPI ushort getCapeImageHeight() const;

    MCAPI ushort getCapeImageWidth() const;

    MCAPI class Certificate const* getCertificate() const;

    MCAPI std::string getClientPlatformId() const;

    MCAPI std::string getClientPlatformOfflineId() const;

    MCAPI std::string getClientPlatformOnlineId() const;

    MCAPI uint64 getClientRandomId() const;

    MCAPI ::SubClientId getClientSubId() const;

    MCAPI std::string getClientThirdPartyName() const;

    MCAPI std::string getDeviceId() const;

    MCAPI ::BuildPlatform getDeviceOS() const;

    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCAPI std::unordered_map<::persona::PieceType, class TintMapColor> getPieceTintColors() const;

    MCAPI std::string getPlayFabIdUnverified() const;

    MCAPI std::string getSelfSignedId() const;

    MCAPI std::string getSkinAnimationData() const;

    MCAPI class mce::Color getSkinColor() const;

    MCAPI std::vector<uchar> getSkinData() const;

    MCAPI std::string getSkinGeometry() const;

    MCAPI class SemVersion getSkinGeometryEngineVersion() const;

    MCAPI std::string getSkinId() const;

    MCAPI ushort getSkinImageHeight() const;

    MCAPI ushort getSkinImageWidth() const;

    MCAPI std::string getSkinResourcePatch() const;

    MCAPI std::string getTenantId() const;

    MCAPI bool isCapeOnClassicSkin() const;

    MCAPI bool isClientThirdPartyNameOnly() const;

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isEduMode() const;

    MCAPI bool isOverrideSkin() const;

    MCAPI bool isPersonaSkin() const;

    MCAPI bool isPremiumSkin() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI bool isValid() const;

    MCAPI std::string toString();

    MCAPI bool verify(std::vector<std::string> const& trustedKeys, int64 currentTime);

    MCAPI bool verifySelfSigned();

    MCAPI ~ConnectionRequest();

    MCAPI static class ConnectionRequest fromString(std::string const& str);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken> rawToken, std::string const& certificateString);

    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, int64, bool) const;

    // NOLINTEND
};
