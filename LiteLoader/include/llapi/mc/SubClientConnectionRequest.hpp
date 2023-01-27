/**
 * @file  SubClientConnectionRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../persona.hpp"

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
     * @hash   505005265
     * @symbol  ??0SubClientConnectionRequest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SubClientConnectionRequest(class SubClientConnectionRequest const &);
    /**
     * @hash   -752882276
     * @symbol  ?getAnimatedImageData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VAnimatedImageData\@\@V?$allocator\@VAnimatedImageData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @hash   -1816862674
     * @symbol  ?getArmSize\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getArmSize() const;
    /**
     * @hash   -921651454
     * @symbol  ?getCapeData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @hash   1148790570
     * @symbol  ?getCapeId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCapeId() const;
    /**
     * @hash   1317699799
     * @symbol  ?getCapeImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @hash   -397750427
     * @symbol  ?getCapeImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @hash   -377967775
     * @symbol  ?getCertificate\@SubClientConnectionRequest\@\@QEBAPEBVCertificate\@\@XZ
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @hash   -1420021843
     * @symbol  ?getClientRandomId\@SubClientConnectionRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @hash   1222557968
     * @symbol  ?getDeviceId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @hash   113085478
     * @symbol  ?getDeviceOS\@SubClientConnectionRequest\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @hash   -2014038840
     * @symbol  ?getPersonaPieces\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@VSerializedPersonaPieceHandle\@\@V?$allocator\@VSerializedPersonaPieceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @hash   1541521843
     * @symbol  ?getPieceTintColors\@SubClientConnectionRequest\@\@QEBA?AV?$unordered_map\@W4PieceType\@persona\@\@VTintMapColor\@\@U?$hash\@W4PieceType\@persona\@\@\@std\@\@U?$equal_to\@W4PieceType\@persona\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4PieceType\@persona\@\@VTintMapColor\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @hash   1689347946
     * @symbol  ?getPlatformId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformId() const;
    /**
     * @hash   -1887026006
     * @symbol  ?getPlatformOfflineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOfflineId() const;
    /**
     * @hash   1957806240
     * @symbol  ?getPlatformOnlineId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlatformOnlineId() const;
    /**
     * @hash   1897486944
     * @symbol  ?getPlayFabId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @hash   -304605580
     * @symbol  ?getSelfSignedId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @hash   350517638
     * @symbol  ?getSkinAnimationData\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @hash   1309400446
     * @symbol  ?getSkinColor\@SubClientConnectionRequest\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @hash   -1830105502
     * @symbol  ?getSkinData\@SubClientConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @hash   1528598828
     * @symbol  ?getSkinGeometry\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @hash   -1015306
     * @symbol  ?getSkinGeometryEngineVersion\@SubClientConnectionRequest\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @hash   -1877173122
     * @symbol  ?getSkinId\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinId() const;
    /**
     * @hash   1914520215
     * @symbol  ?getSkinImageHeight\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @hash   184976293
     * @symbol  ?getSkinImageWidth\@SubClientConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @hash   -508234978
     * @symbol  ?getSkinResourcePatch\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @hash   590082690
     * @symbol  ?getThirdPartyName\@SubClientConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getThirdPartyName() const;
    /**
     * @hash   306789226
     * @symbol  ?isCapeOnClassicSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @hash   696136034
     * @symbol  ?isPersonaSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @hash   -1914990856
     * @symbol  ?isPremiumSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @hash   -2062856550
     * @symbol  ?isPrimaryUser\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPrimaryUser() const;
    /**
     * @hash   2029772994
     * @symbol  ?isThirdPartyNameOnly\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isThirdPartyNameOnly() const;
    /**
     * @hash   199685432
     * @symbol  ?isTrustedSkin\@SubClientConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @hash   -798912472
     * @symbol  ?toString\@SubClientConnectionRequest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
    /**
     * @hash   1624730620
     * @symbol  ?verify\@SubClientConnectionRequest\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_J\@Z
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @hash   1150570612
     * @symbol  ?verifySelfSigned\@SubClientConnectionRequest\@\@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned();
    /**
     * @hash   -2016758784
     * @symbol  ??1SubClientConnectionRequest\@\@QEAA\@XZ
     */
    MCAPI ~SubClientConnectionRequest();
    /**
     * @hash   1366494042
     * @symbol  ?fromString\@SubClientConnectionRequest\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class SubClientConnectionRequest fromString(std::string const &);

//private:
    /**
     * @hash   -862910301
     * @symbol  ??0SubClientConnectionRequest\@\@AEAA\@V?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI SubClientConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @hash   -456816430
     * @symbol  ?validate\@SubClientConnectionRequest\@\@AEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@V23\@_J\@Z
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};