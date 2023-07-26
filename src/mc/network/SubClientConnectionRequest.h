#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace persona { enum class PieceType; }
// clang-format on

class SubClientConnectionRequest {

public:
    // prevent constructor by default
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&) = delete;
    SubClientConnectionRequest()                                             = delete;

public:
    /**
     * @symbol ??0SubClientConnectionRequest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SubClientConnectionRequest(class SubClientConnectionRequest const&); // NOLINT
    /**
     * @symbol
     * ?getAnimatedImageData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VAnimatedImageData\@\@V?$allocator\@VAnimatedImageData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const; // NOLINT
    /**
     * @symbol
     * ?getArmSize\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getArmSize() const; // NOLINT
    /**
     * @symbol ?getCapeData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const; // NOLINT
    /**
     * @symbol
     * ?getCapeId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCapeId() const; // NOLINT
    /**
     * @symbol ?getCapeImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const; // NOLINT
    /**
     * @symbol ?getCapeImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const; // NOLINT
    /**
     * @symbol ?getCertificate\@SubClientConnectionRequest\@\@QEBAPEBVCertificate\@\@XZ
     */
    MCAPI class Certificate const* getCertificate() const; // NOLINT
    /**
     * @symbol ?getClientRandomId\@SubClientConnectionRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const; // NOLINT
    /**
     * @symbol
     * ?getDeviceId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDeviceId() const; // NOLINT
    /**
     * @symbol ?getDeviceOS\@SubClientConnectionRequest\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const; // NOLINT
    /**
     * @symbol
     * ?getPersonaPieces\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VSerializedPersonaPieceHandle\@\@V?$allocator\@VSerializedPersonaPieceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const; // NOLINT
    /**
     * @symbol
     * ?getPieceTintColors\@SubClientConnectionRequest\@\@QEBA?AV?$unordered_map\@W4PieceType\@persona\@\@VTintMapColor\@\@U?$hash\@W4PieceType\@persona\@\@\@std\@\@U?$equal_to\@W4PieceType\@persona\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4PieceType\@persona\@\@VTintMapColor\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        enum class persona::PieceType,
        class TintMapColor,
        struct std::hash<enum class persona::PieceType>,
        struct std::equal_to<enum class persona::PieceType>,
        class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>>
    getPieceTintColors() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformId() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformOfflineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOfflineId() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformOnlineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOnlineId() const; // NOLINT
    /**
     * @symbol
     * ?getPlayFabId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlayFabId() const; // NOLINT
    /**
     * @symbol
     * ?getSelfSignedId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSelfSignedId() const; // NOLINT
    /**
     * @symbol
     * ?getSkinAnimationData\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinAnimationData() const; // NOLINT
    /**
     * @symbol ?getSkinColor\@SubClientConnectionRequest\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getSkinColor() const; // NOLINT
    /**
     * @symbol ?getSkinData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const; // NOLINT
    /**
     * @symbol
     * ?getSkinGeometry\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinGeometry() const; // NOLINT
    /**
     * @symbol ?getSkinGeometryEngineVersion\@SubClientConnectionRequest\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const; // NOLINT
    /**
     * @symbol
     * ?getSkinId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinId() const; // NOLINT
    /**
     * @symbol ?getSkinImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const; // NOLINT
    /**
     * @symbol ?getSkinImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const; // NOLINT
    /**
     * @symbol
     * ?getSkinResourcePatch\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinResourcePatch() const; // NOLINT
    /**
     * @symbol
     * ?getThirdPartyName\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getThirdPartyName() const; // NOLINT
    /**
     * @symbol ?isCapeOnClassicSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const; // NOLINT
    /**
     * @symbol ?isCompatibleWithClientSideChunkGen\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCompatibleWithClientSideChunkGen() const; // NOLINT
    /**
     * @symbol ?isOverrideSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isOverrideSkin() const; // NOLINT
    /**
     * @symbol ?isPersonaSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const; // NOLINT
    /**
     * @symbol ?isPremiumSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const; // NOLINT
    /**
     * @symbol ?isPrimaryUser\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPrimaryUser() const; // NOLINT
    /**
     * @symbol ?isThirdPartyNameOnly\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isThirdPartyNameOnly() const; // NOLINT
    /**
     * @symbol ?isTrustedSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const; // NOLINT
    /**
     * @symbol
     * ?toString\@SubClientConnectionRequest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString(); // NOLINT
    /**
     * @symbol
     * ?verify\@SubClientConnectionRequest\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_J\@Z
     */
    MCAPI bool verify(std::vector<std::string> const&, __int64); // NOLINT
    /**
     * @symbol ?verifySelfSigned\@SubClientConnectionRequest\@\@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned(); // NOLINT
    /**
     * @symbol ??1SubClientConnectionRequest\@\@QEAA\@XZ
     */
    MCAPI ~SubClientConnectionRequest(); // NOLINT
    /**
     * @symbol
     * ?fromString\@SubClientConnectionRequest\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class SubClientConnectionRequest fromString(std::string const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0SubClientConnectionRequest\@\@AEAA\@V?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI SubClientConnectionRequest(std::unique_ptr<class WebToken>, std::string const&); // NOLINT
    /**
     * @symbol
     * ?validate\@SubClientConnectionRequest\@\@AEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@V23\@_J_N\@Z
     */
    MCAPI std::unique_ptr<class Certificate>
          validate(std::unique_ptr<class Certificate>, __int64, bool) const; // NOLINT

private:
};
