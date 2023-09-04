#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class AppConfigs : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AppConfigs inner types define
    enum class MaelstromEduUsabilityStatus {};

public:
    // prevent constructor by default
    AppConfigs& operator=(AppConfigs const&) = delete;
    AppConfigs(AppConfigs const&)            = delete;
    AppConfigs()                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: ?getEducationEditionOffering@AppConfigs@@UEBA?AW4EducationEditionOffer@@XZ
    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: ?supports3DExport@AppConfigs@@UEBA_NXZ
    virtual bool supports3DExport() const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol: ?getConnectionDefinition@AppConfigs@@UEBA?AUConnectionDefinition@@XZ
    virtual struct ConnectionDefinition getConnectionDefinition() const;

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol:
    // ?getAdditionalClientPacks@AppConfigs@@UEBA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@_N@Z
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;

    // vIndex: 33, symbol:
    // ?getScreenCapabilities@AppConfigs@@UEBA?AV?$unique_ptr@VIScreenCapabilities@@U?$default_delete@VIScreenCapabilities@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const&) const;

    // vIndex: 34, symbol:
    // ?createContentAccessibility@AppConfigs@@UEBA?AV?$unique_ptr@VIContentAccessibilityProvider@@U?$default_delete@VIContentAccessibilityProvider@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VIEntitlementManager@@@Bedrock@@@gsl@@@Z
    virtual std::unique_ptr<class IContentAccessibilityProvider>
        createContentAccessibility(gsl::not_null<class Bedrock::NonOwnerPointer<class IEntitlementManager>>) const;

    // vIndex: 35, symbol:
    // ?getFeedbackURL@AppConfigs@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFeedbackURL() const;

    // symbol: ?allowGameArguments@AppConfigs@@UEBA_NXZ
    MCVAPI bool allowGameArguments() const;

    // symbol: ?applyLevelDataOverride@AppConfigs@@UEBAXAEAVLevelData@@@Z
    MCVAPI void applyLevelDataOverride(class LevelData&) const;

    // symbol: ?areEmotesSupported@AppConfigs@@UEBA_NXZ
    MCVAPI bool areEmotesSupported() const;

    // symbol: ?arePremiumSkinPacksAllowed@AppConfigs@@UEBA_NXZ
    MCVAPI bool arePremiumSkinPacksAllowed() const;

    // symbol: ?areQuizzesSupported@AppConfigs@@UEBA_NXZ
    MCVAPI bool areQuizzesSupported() const;

    // symbol: ?areResourcePacksAllowed@AppConfigs@@UEBA_NXZ
    MCVAPI bool areResourcePacksAllowed() const;

    // symbol: ?canUseAzureNotebooks@AppConfigs@@UEBA_NXZ
    MCVAPI bool canUseAzureNotebooks() const;

    // symbol: ?canUseMaelstrom@AppConfigs@@UEBA?AW4MaelstromEduUsabilityStatus@1@XZ
    MCVAPI ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    // symbol: ?gameArgumentsNeedAuthentication@AppConfigs@@UEBA_NXZ
    MCVAPI bool gameArgumentsNeedAuthentication() const;

    // symbol: ?isChatScreenAllowed@AppConfigs@@UEBA_NXZ
    MCVAPI bool isChatScreenAllowed() const;

    // symbol: ?isCoursesCacheEnabled@AppConfigs@@UEBA_NXZ
    MCVAPI bool isCoursesCacheEnabled() const;

    // symbol: ?isExternalPlayerCommunicationAllowed@AppConfigs@@UEBA_NXZ
    MCVAPI bool isExternalPlayerCommunicationAllowed() const;

    // symbol: ?isGameTabShownInSettings@AppConfigs@@UEBA_NXZ
    MCVAPI bool isGameTabShownInSettings() const;

    // symbol: ?isLessonProgressionSupported@AppConfigs@@UEBA_NXZ
    MCVAPI bool isLessonProgressionSupported() const;

    // symbol: ?isPlayScreenAllowed@AppConfigs@@UEBA_NXZ
    MCVAPI bool isPlayScreenAllowed() const;

    // symbol: ?loadFromData@AppConfigs@@UEAAXAEBVIAppConfigData@@@Z
    MCVAPI void loadFromData(class IAppConfigData const&);

    // symbol: ?muteByDefault@AppConfigs@@UEBA_NXZ
    MCVAPI bool muteByDefault() const;

    // symbol: ?requireEduLevelSettings@AppConfigs@@UEBA_NXZ
    MCVAPI bool requireEduLevelSettings() const;

    // symbol: ?requireTrustedContent@AppConfigs@@UEBA_NXZ
    MCVAPI bool requireTrustedContent() const;

    // symbol: ?sendPermissionsTelemetry@AppConfigs@@UEBA_NXZ
    MCVAPI bool sendPermissionsTelemetry() const;

    // symbol: ?setCanAccessWorldCallback@AppConfigs@@UEAAXAEAVIMinecraftGame@@@Z
    MCVAPI void setCanAccessWorldCallback(class IMinecraftGame&);

    // symbol: ?shouldPromptBeforeExit@AppConfigs@@UEBA_NXZ
    MCVAPI bool shouldPromptBeforeExit() const;

    // symbol: ?supportsChangingMultiplayerDuringPlay@AppConfigs@@UEBA_NXZ
    MCVAPI bool supportsChangingMultiplayerDuringPlay() const;

    // symbol: ?useEduDemoUpsellDialog@AppConfigs@@UEBA_NXZ
    MCVAPI bool useEduDemoUpsellDialog() const;

    // symbol: ?useFullScreenByDefault@AppConfigs@@UEBA_NXZ
    MCVAPI bool useFullScreenByDefault() const;

    // symbol: ?useNormalizedFontSize@AppConfigs@@UEBA_NXZ
    MCVAPI bool useNormalizedFontSize() const;

    // symbol: ?webSocketsDisabled@AppConfigs@@UEBA_NXZ
    MCVAPI bool webSocketsDisabled() const;

    // symbol: ?worldBuilderDisabled@AppConfigs@@UEBA_NXZ
    MCVAPI bool worldBuilderDisabled() const;

    // symbol: ?worldsAreSingleUse@AppConfigs@@UEBA_NXZ
    MCVAPI bool worldsAreSingleUse() const;

    // symbol: ??1AppConfigs@@UEAA@XZ
    MCVAPI ~AppConfigs();

    // NOLINTEND
};
