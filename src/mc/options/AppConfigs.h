#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationEditionOffer.h"

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
    // vIndex: 0
    virtual ~AppConfigs();

    // vIndex: 1
    virtual void loadFromData(class IAppConfigData const&);

    // vIndex: 2
    virtual bool arePremiumSkinPacksAllowed() const;

    // vIndex: 3
    virtual bool areResourcePacksAllowed() const;

    // vIndex: 4
    virtual bool isPlayScreenAllowed() const;

    // vIndex: 5
    virtual bool isChatScreenAllowed() const;

    // vIndex: 6
    virtual bool isGameTabShownInSettings() const;

    // vIndex: 7
    virtual bool areEmotesSupported() const;

    // vIndex: 8
    virtual bool useNormalizedFontSize() const;

    // vIndex: 9
    virtual bool useFullScreenByDefault() const;

    // vIndex: 10
    virtual bool muteByDefault() const;

    // vIndex: 11
    virtual bool isCoursesCacheEnabled() const;

    // vIndex: 12
    virtual bool shouldPromptBeforeExit() const;

    // vIndex: 13
    virtual bool gameArgumentsNeedAuthentication() const;

    // vIndex: 14
    virtual bool worldBuilderDisabled() const;

    // vIndex: 15
    virtual bool worldsAreSingleUse() const;

    // vIndex: 16
    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    // vIndex: 17
    virtual bool requireTrustedContent() const;

    // vIndex: 18
    virtual bool isExternalPlayerCommunicationAllowed() const;

    // vIndex: 19
    virtual bool supports3DExport() const;

    // vIndex: 20
    virtual bool requireEduLevelSettings() const;

    // vIndex: 21
    virtual struct ConnectionDefinition getConnectionDefinition() const;

    // vIndex: 22
    virtual bool supportsChangingMultiplayerDuringPlay() const;

    // vIndex: 23
    virtual bool webSocketsDisabled() const;

    // vIndex: 24
    virtual bool sendPermissionsTelemetry() const;

    // vIndex: 25
    virtual bool useEduDemoUpsellDialog() const;

    // vIndex: 26
    virtual bool allowGameArguments() const;

    // vIndex: 27
    virtual bool canUseAzureNotebooks() const;

    // vIndex: 28
    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    // vIndex: 29
    virtual bool isSaveToCloudOn() const;

    // vIndex: 30
    virtual void setCanAccessWorldCallback(class IMinecraftGame& minecraftGame);

    // vIndex: 31
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const;

    // vIndex: 32
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const& screenName) const;

    // vIndex: 33
    virtual std::unique_ptr<class IContentAccessibilityProvider>
    createContentAccessibility(Bedrock::NotNullNonOwnerPtr<class IEntitlementManager> entitlementManager) const;

    // vIndex: 34
    virtual std::string getFeedbackURL() const;

    // vIndex: 35
    virtual std::string getHelpCenterURL() const;

    // vIndex: 36
    virtual void applyLevelDataOverride(class LevelData&) const;

    MCAPI AppConfigs();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI bool allowGameArguments$() const;

    MCAPI void applyLevelDataOverride$(class LevelData&) const;

    MCAPI bool areEmotesSupported$() const;

    MCAPI bool arePremiumSkinPacksAllowed$() const;

    MCAPI bool areResourcePacksAllowed$() const;

    MCAPI bool canUseAzureNotebooks$() const;

    MCAPI ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom$() const;

    MCAPI std::unique_ptr<class IContentAccessibilityProvider>
          createContentAccessibility$(Bedrock::NotNullNonOwnerPtr<class IEntitlementManager> entitlementManager) const;

    MCAPI bool gameArgumentsNeedAuthentication$() const;

    MCAPI std::vector<struct PackIdVersion> getAdditionalClientPacks$(bool enteringLevel) const;

    MCAPI struct ConnectionDefinition getConnectionDefinition$() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffering$() const;

    MCAPI std::string getFeedbackURL$() const;

    MCAPI std::string getHelpCenterURL$() const;

    MCAPI std::unique_ptr<class IScreenCapabilities> getScreenCapabilities$(std::string const& screenName) const;

    MCAPI bool isChatScreenAllowed$() const;

    MCAPI bool isCoursesCacheEnabled$() const;

    MCAPI bool isExternalPlayerCommunicationAllowed$() const;

    MCAPI bool isGameTabShownInSettings$() const;

    MCAPI bool isPlayScreenAllowed$() const;

    MCAPI bool isSaveToCloudOn$() const;

    MCAPI void loadFromData$(class IAppConfigData const&);

    MCAPI bool muteByDefault$() const;

    MCAPI bool requireEduLevelSettings$() const;

    MCAPI bool requireTrustedContent$() const;

    MCAPI bool sendPermissionsTelemetry$() const;

    MCAPI void setCanAccessWorldCallback$(class IMinecraftGame& minecraftGame);

    MCAPI bool shouldPromptBeforeExit$() const;

    MCAPI bool supports3DExport$() const;

    MCAPI bool supportsChangingMultiplayerDuringPlay$() const;

    MCAPI bool useEduDemoUpsellDialog$() const;

    MCAPI bool useFullScreenByDefault$() const;

    MCAPI bool useNormalizedFontSize$() const;

    MCAPI bool webSocketsDisabled$() const;

    MCAPI bool worldBuilderDisabled$() const;

    MCAPI bool worldsAreSingleUse$() const;

    // NOLINTEND
};
