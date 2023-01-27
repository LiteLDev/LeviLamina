/**
 * @file  ConnectionRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../persona.hpp"

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
     * @hash   -1538656495
     * @symbol  ??0ConnectionRequest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ConnectionRequest(class ConnectionRequest const &);
    /**
     * @hash   -1421973006
     * @symbol  ?getAnimatedImageData\@ConnectionRequest\@\@QEBA?AV?$vector\@VAnimatedImageData\@\@V?$allocator\@VAnimatedImageData\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @hash   1073074764
     * @symbol  ?getArmSize\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getArmSize() const;
    /**
     * @hash   -2022314806
     * @symbol  ?getCapeData\@ConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @hash   1886960426
     * @symbol  ?getCapeId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCapeId() const;
    /**
     * @hash   -1883145689
     * @symbol  ?getCapeImageHeight\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @hash   503271247
     * @symbol  ?getCapeImageWidth\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @hash   -822290751
     * @symbol  ?getCertificate\@ConnectionRequest\@\@QEBAPEBVCertificate\@\@XZ
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @hash   -921690230
     * @symbol  ?getClientPlatformId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformId() const;
    /**
     * @hash   -13872692
     * @symbol  ?getClientPlatformOfflineId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformOfflineId() const;
    /**
     * @hash   1808159226
     * @symbol  ?getClientPlatformOnlineId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientPlatformOnlineId() const;
    /**
     * @hash   -467518633
     * @symbol  ?getClientRandomId\@ConnectionRequest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @hash   1970596160
     * @symbol  ?getClientSubId\@ConnectionRequest\@\@QEBA?AW4SubClientId\@\@XZ
     */
    MCAPI enum class SubClientId getClientSubId() const;
    /**
     * @hash   -1013278166
     * @symbol  ?getClientThirdPartyName\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getClientThirdPartyName() const;
    /**
     * @hash   -1019742550
     * @symbol  ?getDeviceId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @hash   514778760
     * @symbol  ?getDeviceOS\@ConnectionRequest\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @hash   -1523946596
     * @symbol  ?getPersonaPieces\@ConnectionRequest\@\@QEBA?AV?$vector\@VSerializedPersonaPieceHandle\@\@V?$allocator\@VSerializedPersonaPieceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @hash   -1997717927
     * @symbol  ?getPieceTintColors\@ConnectionRequest\@\@QEBA?AV?$unordered_map\@W4PieceType\@persona\@\@VTintMapColor\@\@U?$hash\@W4PieceType\@persona\@\@\@std\@\@U?$equal_to\@W4PieceType\@persona\@\@\@5\@V?$allocator\@U?$pair\@$$CBW4PieceType\@persona\@\@VTintMapColor\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @hash   -976820100
     * @symbol  ?getPlayFabId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @hash   700053354
     * @symbol  ?getSelfSignedId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @hash   -1470139652
     * @symbol  ?getSkinAnimationData\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @hash   -798685206
     * @symbol  ?getSkinColor\@ConnectionRequest\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @hash   913046334
     * @symbol  ?getSkinData\@ConnectionRequest\@\@QEBA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @hash   888416618
     * @symbol  ?getSkinGeometry\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @hash   50996790
     * @symbol  ?getSkinGeometryEngineVersion\@ConnectionRequest\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @hash   2040103658
     * @symbol  ?getSkinId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinId() const;
    /**
     * @hash   -1478502573
     * @symbol  ?getSkinImageHeight\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @hash   802704035
     * @symbol  ?getSkinImageWidth\@ConnectionRequest\@\@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @hash   228271980
     * @symbol  ?getSkinResourcePatch\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @hash   -609221126
     * @symbol  ?getTenantId\@ConnectionRequest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTenantId() const;
    /**
     * @hash   -1743732244
     * @symbol  ?isCapeOnClassicSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @hash   -672206674
     * @symbol  ?isClientThirdPartyNameOnly\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isClientThirdPartyNameOnly() const;
    /**
     * @hash   -113611154
     * @symbol  ?isEditorMode\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isEditorMode() const;
    /**
     * @hash   1522952028
     * @symbol  ?isEduMode\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isEduMode() const;
    /**
     * @hash   212369100
     * @symbol  ?isPersonaSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @hash   533997100
     * @symbol  ?isPremiumSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @hash   -619537620
     * @symbol  ?isTrustedSkin\@ConnectionRequest\@\@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @hash   -913521188
     * @symbol  ?toString\@ConnectionRequest\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
    /**
     * @hash   -189773684
     * @symbol  ?verify\@ConnectionRequest\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_J\@Z
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @hash   438806366
     * @symbol  ?verifySelfSigned\@ConnectionRequest\@\@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned();
    /**
     * @hash   140353997
     * @symbol  ??1ConnectionRequest\@\@QEAA\@XZ
     */
    MCAPI ~ConnectionRequest();
    /**
     * @hash   213806689
     * @symbol  ?fromString\@ConnectionRequest\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ConnectionRequest fromString(std::string const &);

//private:
    /**
     * @hash   -293942093
     * @symbol  ??0ConnectionRequest\@\@AEAA\@V?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @hash   -4070809
     * @symbol  ?validate\@ConnectionRequest\@\@AEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@V23\@_J\@Z
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};