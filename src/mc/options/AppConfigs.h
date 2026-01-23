#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class IAppConfigData;
class IContentAccessibilityProvider;
class IScreenCapabilities;
class LevelData;
struct AppConfigsDependencies;
struct ConnectionDefinition;
struct PackIdVersion;
class ISceneStack;
struct SceneFactory;
// clang-format on

class AppConfigs : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AppConfigs inner types define
    enum class MaelstromEduUsabilityStatus : uchar {
        Unknown   = 0,
        Unallowed = 1,
        Allowed   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9f7098;
    ::ll::UntypedStorage<8, 8>  mUnke1b346;
    ::ll::UntypedStorage<8, 8>  mUnk401edb;
    ::ll::UntypedStorage<8, 64> mUnk6aa499;
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigs& operator=(AppConfigs const&);
    AppConfigs(AppConfigs const&);
    AppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppConfigs() /*override*/;

    virtual void loadFromData(::IAppConfigData const&);

    virtual bool arePremiumSkinPacksAllowed() const;

    virtual bool areResourcePacksAllowed() const;

    virtual bool isPlayScreenAllowed() const;

    virtual bool isChatScreenAllowed() const;

    virtual bool isGameTabShownInSettings() const;

    virtual bool areEmotesSupported() const;

    virtual bool useNormalizedFontSize() const;

    virtual bool useFullScreenByDefault() const;

    virtual bool muteByDefault() const;

    virtual bool isCoursesCacheEnabled() const;

    virtual bool shouldPromptBeforeExit() const;

    virtual bool gameArgumentsNeedAuthentication() const;

    virtual bool worldBuilderDisabled() const;

    virtual bool worldsAreSingleUse() const;

    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    virtual bool requireTrustedContent() const;

    virtual bool isExternalPlayerCommunicationAllowed() const;

    virtual bool supports3DExport() const;

    virtual bool requireEduLevelSettings() const;

    virtual ::ConnectionDefinition getConnectionDefinition() const;

    virtual bool supportsChangingMultiplayerDuringPlay() const;

    virtual bool webSocketsDisabled() const;

    virtual bool sendPermissionsTelemetry() const;

    virtual bool useEduDemoUpsellDialog() const;

    virtual bool allowGameArguments() const;

    virtual bool canUseAzureNotebooks() const;

    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;

    virtual bool isSaveToCloudOn() const;

    virtual bool isEduAIOn() const;

    virtual bool isDedicatedServerOn() const;

    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const;

    virtual ::std::unique_ptr<::IScreenCapabilities> getScreenCapabilities(::std::string const& screenName) const;

    virtual ::std::unique_ptr<::IContentAccessibilityProvider> createContentAccessibility() const;

    virtual ::std::string getFeedbackURL() const;

    virtual ::std::string getHelpCenterURL() const;

    virtual ::std::string getPrivacyAndOnlineSafetyURL() const;

    virtual void applyLevelDataOverride(::LevelData&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AppConfigs(::AppConfigsDependencies&& dependencies);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AppConfigsDependencies&& dependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadFromData(::IAppConfigData const&);

    MCNAPI bool $arePremiumSkinPacksAllowed() const;

    MCNAPI bool $areResourcePacksAllowed() const;

    MCNAPI bool $isPlayScreenAllowed() const;

    MCNAPI bool $isChatScreenAllowed() const;

    MCNAPI bool $isGameTabShownInSettings() const;

    MCNAPI bool $areEmotesSupported() const;

    MCNAPI bool $useNormalizedFontSize() const;

    MCNAPI bool $useFullScreenByDefault() const;

    MCNAPI bool $muteByDefault() const;

    MCNAPI bool $isCoursesCacheEnabled() const;

    MCNAPI bool $shouldPromptBeforeExit() const;

    MCNAPI bool $gameArgumentsNeedAuthentication() const;

    MCNAPI bool $worldBuilderDisabled() const;

    MCNAPI bool $worldsAreSingleUse() const;

    MCNAPI ::EducationEditionOffer $getEducationEditionOffering() const;

    MCNAPI bool $requireTrustedContent() const;

    MCNAPI bool $isExternalPlayerCommunicationAllowed() const;

    MCNAPI bool $supports3DExport() const;

    MCNAPI bool $requireEduLevelSettings() const;

    MCNAPI ::ConnectionDefinition $getConnectionDefinition() const;

    MCNAPI bool $supportsChangingMultiplayerDuringPlay() const;

    MCNAPI bool $webSocketsDisabled() const;

    MCNAPI bool $sendPermissionsTelemetry() const;

    MCNAPI bool $useEduDemoUpsellDialog() const;

    MCNAPI bool $allowGameArguments() const;

    MCNAPI bool $canUseAzureNotebooks() const;

    MCNAPI ::AppConfigs::MaelstromEduUsabilityStatus $canUseMaelstrom() const;

    MCNAPI bool $isSaveToCloudOn() const;

    MCNAPI bool $isEduAIOn() const;

    MCNAPI bool $isDedicatedServerOn() const;

    MCNAPI ::std::vector<::PackIdVersion> $getAdditionalClientPacks(bool enteringLevel) const;

    MCNAPI ::std::unique_ptr<::IScreenCapabilities> $getScreenCapabilities(::std::string const& screenName) const;

    MCNAPI ::std::unique_ptr<::IContentAccessibilityProvider> $createContentAccessibility() const;

    MCNAPI ::std::string $getFeedbackURL() const;

    MCNAPI ::std::string $getHelpCenterURL() const;

    MCNAPI ::std::string $getPrivacyAndOnlineSafetyURL() const;

    MCNAPI void $applyLevelDataOverride(::LevelData&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
