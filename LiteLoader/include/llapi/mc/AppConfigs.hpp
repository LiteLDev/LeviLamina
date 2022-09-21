/**
 * @file  MC/AppConfigs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppConfigs.
 *
 */
class AppConfigs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGS
public:
    class AppConfigs& operator=(class AppConfigs const &) = delete;
    AppConfigs(class AppConfigs const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AppConfigs();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   4140626
     * @vftbl  18
     * @symbol ?getEducationEditionOffering@AppConfigs@@UEBA?AW4EducationEditionOffer@@XZ
     */
    virtual enum EducationEditionOffer getEducationEditionOffering() const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -1715866479
     * @vftbl  21
     * @symbol ?supports3DExport@AppConfigs@@UEBA_NXZ
     */
    virtual bool supports3DExport() const;
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @hash   146154834
     * @vftbl  23
     * @symbol ?getConnectionDefinition@AppConfigs@@UEBA?AUConnectionDefinition@@XZ
     */
    virtual struct ConnectionDefinition getConnectionDefinition() const;
    /**
     * @vftbl  24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl  27
     * @symbol __unk_vfn_27
     */
    virtual void __unk_vfn_27();
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @hash   789308987
     * @vftbl  32
     * @symbol ?getAdditionalClientPacks@AppConfigs@@UEBA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@_N@Z
     */
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;
    /**
     * @hash   -1322399175
     * @vftbl  33
     * @symbol ?getScreenCapabilities@AppConfigs@@UEBA?AV?$unique_ptr@VIScreenCapabilities@@U?$default_delete@VIScreenCapabilities@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const &) const;
    /**
     * @hash   -794552768
     * @vftbl  34
     * @symbol ?createContentAccessibility@AppConfigs@@UEBA?AV?$unique_ptr@VIContentAccessibilityProvider@@U?$default_delete@VIContentAccessibilityProvider@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VIEntitlementManager@@@Bedrock@@@gsl@@@Z
     */
    virtual std::unique_ptr<class IContentAccessibilityProvider> createContentAccessibility(class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntitlementManager>>) const;
    /**
     * @hash   -446183970
     * @vftbl  35
     * @symbol ?getFeedbackURL@AppConfigs@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getFeedbackURL() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPCONFIGS
    /**
     * @hash   1778074307
     * @symbol ?allowGameArguments@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool allowGameArguments() const;
    /**
     * @hash   506858970
     * @symbol ?applyLevelDataOverride@AppConfigs@@UEBAXAEAVLevelData@@@Z
     */
    MCVAPI void applyLevelDataOverride(class LevelData &) const;
    /**
     * @hash   -1664812153
     * @symbol ?areEmotesSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areEmotesSupported() const;
    /**
     * @hash   -404409706
     * @symbol ?arePremiumSkinPacksAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool arePremiumSkinPacksAllowed() const;
    /**
     * @hash   739183831
     * @symbol ?areQuizzesSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areQuizzesSupported() const;
    /**
     * @hash   -549025000
     * @symbol ?areResourcePacksAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areResourcePacksAllowed() const;
    /**
     * @hash   -1029702168
     * @symbol ?canUseAzureNotebooks@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool canUseAzureNotebooks() const;
    /**
     * @hash   796509071
     * @symbol ?canUseMaelstrom@AppConfigs@@UEBA?AW4MaelstromEduUsabilityStatus@1@XZ
     */
    MCVAPI enum AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;
    /**
     * @hash   -644102118
     * @symbol ?gameArgumentsNeedAuthentication@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool gameArgumentsNeedAuthentication() const;
    /**
     * @hash   1187847554
     * @symbol ?isChatScreenAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isChatScreenAllowed() const;
    /**
     * @hash   -202598859
     * @symbol ?isCoursesCacheEnabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isCoursesCacheEnabled() const;
    /**
     * @hash   1514302032
     * @symbol ?isExternalPlayerCommunicationAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isExternalPlayerCommunicationAllowed() const;
    /**
     * @hash   1214945352
     * @symbol ?isGameTabShownInSettings@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isGameTabShownInSettings() const;
    /**
     * @hash   1322309501
     * @symbol ?isLessonProgressionSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isLessonProgressionSupported() const;
    /**
     * @hash   -1584237402
     * @symbol ?isPlayScreenAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isPlayScreenAllowed() const;
    /**
     * @hash   -1031489956
     * @symbol ?loadFromData@AppConfigs@@UEAAXAEBVIAppConfigData@@@Z
     */
    MCVAPI void loadFromData(class IAppConfigData const &);
    /**
     * @hash   1816807225
     * @symbol ?muteByDefault@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool muteByDefault() const;
    /**
     * @hash   -627448962
     * @symbol ?requireEduLevelSettings@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool requireEduLevelSettings() const;
    /**
     * @hash   -1995299345
     * @symbol ?requireTrustedContent@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool requireTrustedContent() const;
    /**
     * @hash   -214614171
     * @symbol ?sendPermissionsTelemetry@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool sendPermissionsTelemetry() const;
    /**
     * @hash   -1108169246
     * @symbol ?setCanAccessWorldCallback@AppConfigs@@UEAAXAEAVIMinecraftGame@@@Z
     */
    MCVAPI void setCanAccessWorldCallback(class IMinecraftGame &);
    /**
     * @hash   304898908
     * @symbol ?shouldPromptBeforeExit@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool shouldPromptBeforeExit() const;
    /**
     * @hash   606675654
     * @symbol ?supportsChangingMultiplayerDuringPlay@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool supportsChangingMultiplayerDuringPlay() const;
    /**
     * @hash   966955599
     * @symbol ?useEduDemoUpsellDialog@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useEduDemoUpsellDialog() const;
    /**
     * @hash   167461008
     * @symbol ?useFullScreenByDefault@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useFullScreenByDefault() const;
    /**
     * @hash   -1460870090
     * @symbol ?useNormalizedFontSize@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useNormalizedFontSize() const;
    /**
     * @hash   916246864
     * @symbol ?webSocketsDisabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool webSocketsDisabled() const;
    /**
     * @hash   -776970131
     * @symbol ?worldBuilderDisabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool worldBuilderDisabled() const;
    /**
     * @hash   -2059963212
     * @symbol ?worldsAreSingleUse@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool worldsAreSingleUse() const;
#endif
    /**
     * @hash   -1411731444
     * @symbol ??0AppConfigs@@QEAA@XZ
     */
    MCAPI AppConfigs();

};