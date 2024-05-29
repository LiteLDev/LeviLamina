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
    AppConfigs& operator=(AppConfigs const&);
    AppConfigs(AppConfigs const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AppConfigs@@UEAA@XZ
    virtual ~AppConfigs();

    // vIndex: 1, symbol: ?loadFromData@AppConfigs@@UEAAXAEBVIAppConfigData@@@Z
    virtual void loadFromData(class IAppConfigData const&);

    // vIndex: 2, symbol: ?arePremiumSkinPacksAllowed@AppConfigs@@UEBA_NXZ
    virtual bool arePremiumSkinPacksAllowed() const;

    // vIndex: 3, symbol: ?areResourcePacksAllowed@AppConfigs@@UEBA_NXZ
    virtual bool areResourcePacksAllowed() const;

    // vIndex: 4, symbol: ?isPlayScreenAllowed@AppConfigs@@UEBA_NXZ
    virtual bool isPlayScreenAllowed() const;

    // vIndex: 5, symbol: ?isChatScreenAllowed@AppConfigs@@UEBA_NXZ
    virtual bool isChatScreenAllowed() const;

    // vIndex: 6, symbol: ?isGameTabShownInSettings@AppConfigs@@UEBA_NXZ
    virtual bool isGameTabShownInSettings() const;

    // vIndex: 7, symbol: ?areEmotesSupported@AppConfigs@@UEBA_NXZ
    virtual bool areEmotesSupported() const;

    // vIndex: 8, symbol: ?useNormalizedFontSize@AppConfigs@@UEBA_NXZ
    virtual bool useNormalizedFontSize() const;

    // vIndex: 9, symbol: ?useFullScreenByDefault@AppConfigs@@UEBA_NXZ
    virtual bool useFullScreenByDefault() const;

    // vIndex: 10, symbol: ?muteByDefault@AppConfigs@@UEBA_NXZ
    virtual bool muteByDefault() const;

    // vIndex: 11, symbol: ?isCoursesCacheEnabled@AppConfigs@@UEBA_NXZ
    virtual bool isCoursesCacheEnabled() const;

    // vIndex: 12, symbol: ?shouldPromptBeforeExit@AppConfigs@@UEBA_NXZ
    virtual bool shouldPromptBeforeExit() const;

    // vIndex: 13, symbol: ?gameArgumentsNeedAuthentication@AppConfigs@@UEBA_NXZ
    virtual bool gameArgumentsNeedAuthentication() const;

    // vIndex: 14, symbol: ?worldBuilderDisabled@AppConfigs@@UEBA_NXZ
    virtual bool worldBuilderDisabled() const;

    // vIndex: 15, symbol: ?worldsAreSingleUse@AppConfigs@@UEBA_NXZ
    virtual bool worldsAreSingleUse() const;

    // vIndex: 16, symbol: ?getEducationEditionOffering@AppConfigs@@UEBA?AW4EducationEditionOffer@@XZ
    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    // vIndex: 17, symbol: ?requireTrustedContent@AppConfigs@@UEBA_NXZ
    virtual bool requireTrustedContent() const;

    // vIndex: 18, symbol: ?isExternalPlayerCommunicationAllowed@AppConfigs@@UEBA_NXZ
    virtual bool isExternalPlayerCommunicationAllowed() const;

    // vIndex: 19, symbol: ?supports3DExport@AppConfigs@@UEBA_NXZ
    virtual bool supports3DExport() const;

    // vIndex: 20, symbol: ?requireEduLevelSettings@AppConfigs@@UEBA_NXZ
    virtual bool requireEduLevelSettings() const;

    // vIndex: 21, symbol: ?getConnectionDefinition@AppConfigs@@UEBA?AUConnectionDefinition@@XZ
    virtual struct ConnectionDefinition getConnectionDefinition() const;

    // vIndex: 22, symbol: ?supportsChangingMultiplayerDuringPlay@AppConfigs@@UEBA_NXZ
    virtual bool supportsChangingMultiplayerDuringPlay() const;

    // vIndex: 23, symbol: ?webSocketsDisabled@AppConfigs@@UEBA_NXZ
    virtual bool webSocketsDisabled() const;

    // vIndex: 24, symbol: ?sendPermissionsTelemetry@AppConfigs@@UEBA_NXZ
    virtual bool sendPermissionsTelemetry() const;

    // vIndex: 25, symbol: ?useEduDemoUpsellDialog@AppConfigs@@UEBA_NXZ
    virtual bool useEduDemoUpsellDialog() const;

    // vIndex: 26, symbol: ?allowGameArguments@AppConfigs@@UEBA_NXZ
    virtual bool allowGameArguments() const;

    // vIndex: 27, symbol: ?canUseAzureNotebooks@AppConfigs@@UEBA_NXZ
    virtual bool canUseAzureNotebooks() const;

    // vIndex: 28, symbol: ?canUseMaelstrom@AppConfigs@@UEBA?AW4MaelstromEduUsabilityStatus@1@XZ
    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    // vIndex: 29, symbol: ?isSaveToCloudOn@AppConfigs@@UEBA_NXZ
    virtual bool isSaveToCloudOn() const;

    // vIndex: 30, symbol: ?setCanAccessWorldCallback@AppConfigs@@UEAAXAEAVIMinecraftGame@@@Z
    virtual void setCanAccessWorldCallback(class IMinecraftGame& minecraftGame);

    // vIndex: 31, symbol:
    // ?getAdditionalClientPacks@AppConfigs@@UEBA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@_N@Z
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;

    // vIndex: 32, symbol:
    // ?getScreenCapabilities@AppConfigs@@UEBA?AV?$unique_ptr@VIScreenCapabilities@@U?$default_delete@VIScreenCapabilities@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const& screenName) const;

    // vIndex: 33, symbol:
    // ?createContentAccessibility@AppConfigs@@UEBA?AV?$unique_ptr@VIContentAccessibilityProvider@@U?$default_delete@VIContentAccessibilityProvider@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VIEntitlementManager@@@Bedrock@@@gsl@@@Z
    virtual std::unique_ptr<class IContentAccessibilityProvider>
    createContentAccessibility(Bedrock::NotNullNonOwnerPtr<class IEntitlementManager> entitlementManager) const;

    // vIndex: 34, symbol:
    // ?getFeedbackURL@AppConfigs@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFeedbackURL() const;

    // vIndex: 35, symbol:
    // ?getHelpCenterURL@AppConfigs@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getHelpCenterURL() const;

    // vIndex: 36, symbol: ?applyLevelDataOverride@AppConfigs@@UEBAXAEAVLevelData@@@Z
    virtual void applyLevelDataOverride(class LevelData&) const;

    // symbol: ??0AppConfigs@@QEAA@XZ
    MCAPI AppConfigs();

    // NOLINTEND
};
