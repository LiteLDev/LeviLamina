/**
 * @file  ConnectionRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1671566639
     * @symbol ??0ConnectionRequest@@QEAA@AEBV0@@Z
     */
    MCAPI ConnectionRequest(class ConnectionRequest const &);
    /**
     * @hash   -1554867774
     * @symbol ?getAnimatedImageData@ConnectionRequest@@QEBA?AV?$vector@VAnimatedImageData@@V?$allocator@VAnimatedImageData@@@std@@@std@@XZ
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @hash   940164620
     * @symbol ?getArmSize@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getArmSize() const;
    /**
     * @hash   2139742346
     * @symbol ?getCapeData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @hash   1754065658
     * @symbol ?getCapeId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getCapeId() const;
    /**
     * @hash   -2016025081
     * @symbol ?getCapeImageHeight@ConnectionRequest@@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @hash   370361103
     * @symbol ?getCapeImageWidth@ConnectionRequest@@QEBAGXZ
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @hash   -926063375
     * @symbol ?getCertificate@ConnectionRequest@@QEBAPEBVCertificate@@XZ
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @hash   -1054615750
     * @symbol ?getClientPlatformId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getClientPlatformId() const;
    /**
     * @hash   -146798212
     * @symbol ?getClientPlatformOfflineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getClientPlatformOfflineId() const;
    /**
     * @hash   1675218330
     * @symbol ?getClientPlatformOnlineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getClientPlatformOnlineId() const;
    /**
     * @hash   -600459529
     * @symbol ?getClientRandomId@ConnectionRequest@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @hash   1357831808
     * @symbol ?getClientSubId@ConnectionRequest@@QEBA?AW4SubClientId@@XZ
     */
    MCAPI enum class SubClientId getClientSubId() const;
    /**
     * @hash   -1146234438
     * @symbol ?getClientThirdPartyName@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getClientThirdPartyName() const;
    /**
     * @hash   -1152698822
     * @symbol ?getDeviceId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @hash   381853240
     * @symbol ?getDeviceOS@ConnectionRequest@@QEBA?AW4BuildPlatform@@XZ
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @hash   -1656872116
     * @symbol ?getPersonaPieces@ConnectionRequest@@QEBA?AV?$vector@VSerializedPersonaPieceHandle@@V?$allocator@VSerializedPersonaPieceHandle@@@std@@@std@@XZ
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @hash   -2130551191
     * @symbol ?getPieceTintColors@ConnectionRequest@@QEBA?AV?$unordered_map@W4PieceType@persona@@VTintMapColor@@U?$hash@W4PieceType@persona@@@std@@U?$equal_to@W4PieceType@persona@@@5@V?$allocator@U?$pair@$$CBW4PieceType@persona@@VTintMapColor@@@std@@@5@@std@@XZ
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @hash   -1109760996
     * @symbol ?getPlayFabId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @hash   567127834
     * @symbol ?getSelfSignedId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @hash   -1603049796
     * @symbol ?getSkinAnimationData@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @hash   -931610726
     * @symbol ?getSkinColor@ConnectionRequest@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @hash   780151566
     * @symbol ?getSkinData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @hash   755537226
     * @symbol ?getSkinGeometry@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @hash   -81882602
     * @symbol ?getSkinGeometryEngineVersion@ConnectionRequest@@QEBA?AVSemVersion@@XZ
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @hash   1907193514
     * @symbol ?getSkinId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSkinId() const;
    /**
     * @hash   -1611397341
     * @symbol ?getSkinImageHeight@ConnectionRequest@@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @hash   669778515
     * @symbol ?getSkinImageWidth@ConnectionRequest@@QEBAGXZ
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @hash   95331084
     * @symbol ?getSkinResourcePatch@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @hash   -742177398
     * @symbol ?getTenantId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getTenantId() const;
    /**
     * @hash   -1876657764
     * @symbol ?isCapeOnClassicSkin@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @hash   -805162946
     * @symbol ?isClientThirdPartyNameOnly@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isClientThirdPartyNameOnly() const;
    /**
     * @hash   -246598178
     * @symbol ?isEditorMode@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isEditorMode() const;
    /**
     * @hash   1389980380
     * @symbol ?isEduMode@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isEduMode() const;
    /**
     * @hash   79412828
     * @symbol ?isPersonaSkin@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @hash   401040828
     * @symbol ?isPremiumSkin@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @hash   -752493892
     * @symbol ?isTrustedSkin@ConnectionRequest@@QEBA_NXZ
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @hash   -1046477460
     * @symbol ?toString@ConnectionRequest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString();
    /**
     * @hash   -322729956
     * @symbol ?verify@ConnectionRequest@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_J@Z
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @hash   305850094
     * @symbol ?verifySelfSigned@ConnectionRequest@@QEAA_NXZ
     */
    MCAPI bool verifySelfSigned();
    /**
     * @hash   7459229
     * @symbol ??1ConnectionRequest@@QEAA@XZ
     */
    MCAPI ~ConnectionRequest();
    /**
     * @hash   80911921
     * @symbol ?fromString@ConnectionRequest@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class ConnectionRequest fromString(std::string const &);

//private:
    /**
     * @hash   -426852237
     * @symbol ??0ConnectionRequest@@AEAA@V?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
     */
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @hash   -137027081
     * @symbol ?validate@ConnectionRequest@@AEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@V23@_J@Z
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};