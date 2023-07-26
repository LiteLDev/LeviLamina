/**
 * @file  ConnectionRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#include "UnverifiedCertificate.hpp"
#include "WebToken.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ConnectionRequest.
 *
 */
class ConnectionRequest {

#define AFTER_EXTRA
// Add Member There

public:
    std::unique_ptr<UnverifiedCertificate> mCertificateData;
    std::unique_ptr<Certificate> mCertificate;
    std::unique_ptr<WebToken> mRawToken;
    unsigned __int8 mClientSubId;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTIONREQUEST
public:
    class ConnectionRequest& operator=(class ConnectionRequest const &) = delete;
    ConnectionRequest() = delete;
#endif

public:
    /**
     * @symbol  ??0ConnectionRequest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ConnectionRequest(class ConnectionRequest const &);
    /**
     * @symbol  ?getAnimatedImageData\@ConnectionRequest\@\@QEBA?AV?$vector\@VAnimatedImageData\@\@V?$allocator\@VAnimatedImageData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @symbol  ?getArmSize\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getArmSize() const;
    /**
     * @symbol  ?getCapeData\@ConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @symbol  ?getCapeId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCapeId() const;
    /**
     * @symbol  ?getCapeImageHeight\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @symbol  ?getCapeImageWidth\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @symbol  ?getCertificate\@ConnectionRequest\@\@QEBAPEBVCertificate\@\@XZ
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @symbol  ?getClientPlatformId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformId() const;
    /**
     * @symbol  ?getClientPlatformOfflineId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformOfflineId() const;
    /**
     * @symbol  ?getClientPlatformOnlineId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformOnlineId() const;
    /**
     * @symbol  ?getClientRandomId\@ConnectionRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @symbol  ?getClientSubId\@ConnectionRequest\@\@QEBA?AW4SubClientId\@\@XZ
     */
    MCAPI enum class SubClientId getClientSubId() const;
    /**
     * @symbol  ?getClientThirdPartyName\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientThirdPartyName() const;
    /**
     * @symbol  ?getDeviceId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @symbol  ?getDeviceOS\@ConnectionRequest\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @symbol  ?getPersonaPieces\@ConnectionRequest\@\@QEBA?AV?$vector\@VSerializedPersonaPieceHandle\@\@V?$allocator\@VSerializedPersonaPieceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @symbol  ?getPieceTintColors\@ConnectionRequest\@\@QEBA?AV?$unordered_map\@W4PieceType\@persona\@\@VTintMapColor\@\@U?$hash\@W4PieceType\@persona\@\@\@std\@\@U?$equal_to\@W4PieceType\@persona\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4PieceType\@persona\@\@VTintMapColor\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @symbol  ?getPlayFabId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @symbol  ?getSelfSignedId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @symbol  ?getSkinAnimationData\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @symbol  ?getSkinColor\@ConnectionRequest\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @symbol  ?getSkinData\@ConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @symbol  ?getSkinGeometry\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @symbol  ?getSkinGeometryEngineVersion\@ConnectionRequest\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @symbol  ?getSkinId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinId() const;
    /**
     * @symbol  ?getSkinImageHeight\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @symbol  ?getSkinImageWidth\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @symbol  ?getSkinResourcePatch\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @symbol  ?getTenantId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTenantId() const;
    /**
     * @symbol  ?isCapeOnClassicSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @symbol  ?isClientThirdPartyNameOnly\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isClientThirdPartyNameOnly() const;
    /**
     * @symbol  ?isEditorMode\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isEditorMode() const;
    /**
     * @symbol  ?isEduMode\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isEduMode() const;
    /**
     * @symbol  ?isOverrideSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isOverrideSkin() const;
    /**
     * @symbol  ?isPersonaSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @symbol  ?isPremiumSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @symbol  ?isTrustedSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol  ?toString\@ConnectionRequest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
    /**
     * @symbol  ?verify\@ConnectionRequest\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_J\@Z
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @symbol  ?verifySelfSigned\@ConnectionRequest\@\@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned();
    /**
     * @symbol  ??1ConnectionRequest\@\@QEAA\@XZ
     */
    MCAPI ~ConnectionRequest();
    /**
     * @symbol  ?fromString\@ConnectionRequest\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ConnectionRequest fromString(std::string const &);

//private:
    /**
     * @symbol  ??0ConnectionRequest\@\@AEAA\@V?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @symbol  ?validate\@ConnectionRequest\@\@AEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@V23\@_J\@Z
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};