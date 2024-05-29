#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PieceType.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ConnectionRequest {
public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

    std::unique_ptr<class UnverifiedCertificate> mCertificateData;
    std::unique_ptr<class Certificate>           mCertificate;
    std::unique_ptr<class WebToken>              mRawToken;
    uchar                                        mClientSubId;

public:
    // NOLINTBEGIN
    // symbol: ??0ConnectionRequest@@QEAA@AEBV0@@Z
    MCAPI ConnectionRequest(class ConnectionRequest const& other);

    // symbol:
    // ?getAnimatedImageData@ConnectionRequest@@QEBA?AV?$vector@VAnimatedImageData@@V?$allocator@VAnimatedImageData@@@std@@@std@@XZ
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;

    // symbol: ?getArmSize@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getArmSize() const;

    // symbol: ?getCapeData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI std::vector<uchar> getCapeData() const;

    // symbol: ?getCapeId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCapeId() const;

    // symbol: ?getCapeImageHeight@ConnectionRequest@@QEBAGXZ
    MCAPI ushort getCapeImageHeight() const;

    // symbol: ?getCapeImageWidth@ConnectionRequest@@QEBAGXZ
    MCAPI ushort getCapeImageWidth() const;

    // symbol: ?getCertificate@ConnectionRequest@@QEBAPEBVCertificate@@XZ
    MCAPI class Certificate const* getCertificate() const;

    // symbol:
    // ?getClientPlatformId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getClientPlatformId() const;

    // symbol:
    // ?getClientPlatformOfflineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getClientPlatformOfflineId() const;

    // symbol:
    // ?getClientPlatformOnlineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getClientPlatformOnlineId() const;

    // symbol: ?getClientRandomId@ConnectionRequest@@QEBA_KXZ
    MCAPI uint64 getClientRandomId() const;

    // symbol: ?getClientSubId@ConnectionRequest@@QEBA?AW4SubClientId@@XZ
    MCAPI ::SubClientId getClientSubId() const;

    // symbol:
    // ?getClientThirdPartyName@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getClientThirdPartyName() const;

    // symbol: ?getDeviceId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDeviceId() const;

    // symbol: ?getDeviceOS@ConnectionRequest@@QEBA?AW4BuildPlatform@@XZ
    MCAPI ::BuildPlatform getDeviceOS() const;

    // symbol:
    // ?getPersonaPieces@ConnectionRequest@@QEBA?AV?$vector@VSerializedPersonaPieceHandle@@V?$allocator@VSerializedPersonaPieceHandle@@@std@@@std@@XZ
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;

    // symbol:
    // ?getPieceTintColors@ConnectionRequest@@QEBA?AV?$unordered_map@W4PieceType@persona@@VTintMapColor@@U?$hash@W4PieceType@persona@@@std@@U?$equal_to@W4PieceType@persona@@@5@V?$allocator@U?$pair@$$CBW4PieceType@persona@@VTintMapColor@@@std@@@5@@std@@XZ
    MCAPI std::unordered_map<::persona::PieceType, class TintMapColor> getPieceTintColors() const;

    // symbol: ?getPlayFabId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPlayFabId() const;

    // symbol:
    // ?getSelfSignedId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSelfSignedId() const;

    // symbol:
    // ?getSkinAnimationData@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinAnimationData() const;

    // symbol: ?getSkinColor@ConnectionRequest@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getSkinColor() const;

    // symbol: ?getSkinData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI std::vector<uchar> getSkinData() const;

    // symbol:
    // ?getSkinGeometry@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinGeometry() const;

    // symbol: ?getSkinGeometryEngineVersion@ConnectionRequest@@QEBA?AVSemVersion@@XZ
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;

    // symbol: ?getSkinId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinId() const;

    // symbol: ?getSkinImageHeight@ConnectionRequest@@QEBAGXZ
    MCAPI ushort getSkinImageHeight() const;

    // symbol: ?getSkinImageWidth@ConnectionRequest@@QEBAGXZ
    MCAPI ushort getSkinImageWidth() const;

    // symbol:
    // ?getSkinResourcePatch@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinResourcePatch() const;

    // symbol: ?getTenantId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getTenantId() const;

    // symbol: ?isCapeOnClassicSkin@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isCapeOnClassicSkin() const;

    // symbol: ?isClientThirdPartyNameOnly@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isClientThirdPartyNameOnly() const;

    // symbol: ?isCompatibleWithClientSideChunkGen@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    // symbol: ?isEduMode@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isEduMode() const;

    // symbol: ?isOverrideSkin@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isOverrideSkin() const;

    // symbol: ?isPersonaSkin@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isPersonaSkin() const;

    // symbol: ?isPremiumSkin@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isPremiumSkin() const;

    // symbol: ?isTrustedSkin@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isTrustedSkin() const;

    // symbol: ?isValid@ConnectionRequest@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?toString@ConnectionRequest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString();

    // symbol:
    // ?verify@ConnectionRequest@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_J@Z
    MCAPI bool verify(std::vector<std::string> const& trustedKeys, int64 currentTime);

    // symbol: ?verifySelfSigned@ConnectionRequest@@QEAA_NXZ
    MCAPI bool verifySelfSigned();

    // symbol: ??1ConnectionRequest@@QEAA@XZ
    MCAPI ~ConnectionRequest();

    // symbol: ?fromString@ConnectionRequest@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class ConnectionRequest fromString(std::string const& str);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0ConnectionRequest@@AEAA@V?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken> rawToken, std::string const& certificateString);

    // symbol:
    // ?validate@ConnectionRequest@@AEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@V23@_J_N@Z
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, int64, bool) const;

    // NOLINTEND
};
