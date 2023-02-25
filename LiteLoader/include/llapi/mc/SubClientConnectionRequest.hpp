/**
 * @file  SubClientConnectionRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubClientConnectionRequest.
 *
 */
class SubClientConnectionRequest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTCONNECTIONREQUEST
public:
    class SubClientConnectionRequest& operator=(class SubClientConnectionRequest const &) = delete;
    SubClientConnectionRequest() = delete;
#endif

public:
    /**
     * @symbol  ??0SubClientConnectionRequest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SubClientConnectionRequest(class SubClientConnectionRequest const &);
    /**
     * @symbol  ?getAnimatedImageData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VAnimatedImageData\@\@V?$allocator\@VAnimatedImageData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @symbol  ?getArmSize\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getArmSize() const;
    /**
     * @symbol  ?getCapeData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @symbol  ?getCapeId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCapeId() const;
    /**
     * @symbol  ?getCapeImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @symbol  ?getCapeImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @symbol  ?getCertificate\@SubClientConnectionRequest\@\@QEBAPEBVCertificate\@\@XZ
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @symbol  ?getClientRandomId\@SubClientConnectionRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @symbol  ?getDeviceId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @symbol  ?getDeviceOS\@SubClientConnectionRequest\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @symbol  ?getPersonaPieces\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VSerializedPersonaPieceHandle\@\@V?$allocator\@VSerializedPersonaPieceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @symbol  ?getPieceTintColors\@SubClientConnectionRequest\@\@QEBA?AV?$unordered_map\@W4PieceType\@persona\@\@VTintMapColor\@\@U?$hash\@W4PieceType\@persona\@\@\@std\@\@U?$equal_to\@W4PieceType\@persona\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4PieceType\@persona\@\@VTintMapColor\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @symbol  ?getPlatformId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformId() const;
    /**
     * @symbol  ?getPlatformOfflineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOfflineId() const;
    /**
     * @symbol  ?getPlatformOnlineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOnlineId() const;
    /**
     * @symbol  ?getPlayFabId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @symbol  ?getSelfSignedId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @symbol  ?getSkinAnimationData\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @symbol  ?getSkinColor\@SubClientConnectionRequest\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @symbol  ?getSkinData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @symbol  ?getSkinGeometry\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @symbol  ?getSkinGeometryEngineVersion\@SubClientConnectionRequest\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @symbol  ?getSkinId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinId() const;
    /**
     * @symbol  ?getSkinImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @symbol  ?getSkinImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @symbol  ?getSkinResourcePatch\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @symbol  ?getThirdPartyName\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getThirdPartyName() const;
    /**
     * @symbol  ?isCapeOnClassicSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @symbol  ?isOverrideSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isOverrideSkin() const;
    /**
     * @symbol  ?isPersonaSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @symbol  ?isPremiumSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @symbol  ?isPrimaryUser\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPrimaryUser() const;
    /**
     * @symbol  ?isThirdPartyNameOnly\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isThirdPartyNameOnly() const;
    /**
     * @symbol  ?isTrustedSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol  ?toString\@SubClientConnectionRequest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
    /**
     * @symbol  ?verify\@SubClientConnectionRequest\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_J\@Z
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @symbol  ?verifySelfSigned\@SubClientConnectionRequest\@\@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned();
    /**
     * @symbol  ??1SubClientConnectionRequest\@\@QEAA\@XZ
     */
    MCAPI ~SubClientConnectionRequest();
    /**
     * @symbol  ?fromString\@SubClientConnectionRequest\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class SubClientConnectionRequest fromString(std::string const &);

//private:
    /**
     * @symbol  ??0SubClientConnectionRequest\@\@AEAA\@V?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI SubClientConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @symbol  ?validate\@SubClientConnectionRequest\@\@AEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@V23\@_J\@Z
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};