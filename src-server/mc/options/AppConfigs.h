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
class ISceneStack;
class IScreenCapabilities;
class LevelData;
class SceneFactory;
struct AppConfigsDependencies;
struct ConnectionDefinition;
struct PackIdVersion;
// clang-format on

class AppConfigs : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AppConfigs inner types define
    enum class MaelstromEduUsabilityStatus : uchar {
        Unknown = 0,
        Unallowed = 1,
        Allowed = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9f7098;
    ::ll::UntypedStorage<8, 8> mUnke1b346;
    ::ll::UntypedStorage<8, 8> mUnk401edb;
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
    // vIndex: 0
    virtual ~AppConfigs() /*override*/;

    // vIndex: 1
    virtual void loadFromData(::IAppConfigData const&);

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
    virtual ::ConnectionDefinition getConnectionDefinition() const;

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
    virtual bool isEduAIOn() const;

    // vIndex: 31
    virtual bool isDedicatedServerOn() const;

    // vIndex: 32
    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const;

    // vIndex: 33
    virtual ::std::unique_ptr<::IScreenCapabilities> getScreenCapabilities(::std::string const& screenName) const;

    // vIndex: 34
    virtual ::std::unique_ptr<::IContentAccessibilityProvider> createContentAccessibility() const;

    // vIndex: 35
    virtual ::std::string getFeedbackURL() const;

    // vIndex: 36
    virtual ::std::string getHelpCenterURL() const;

    // vIndex: 37
    virtual ::std::string getPrivacyAndOnlineSafetyURL() const;

    // vIndex: 38
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
