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
struct LevelSummary;
struct PackIdVersion;
struct ScreenCapabilitiesRepo;
class ISceneStack;
class SceneFactory;
// clang-format on

class AppConfigs : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AppConfigs inner types define
    enum class MaelstromEduUsabilityStatus : uchar {
        Unknown   = 0,
        Unallowed = 1,
        Allowed   = 2,
    };

    using LeaveGameCallback =
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&, ::SceneFactory&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::LevelSummary const&)>> mCanAccessWorldCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenCapabilitiesRepo>>   mScreenCapabilities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AppConfigsDependencies const>> const> mDependencies;
    ::ll::
        TypedStorage<8, 64, ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&, ::SceneFactory&)>>
            mLeaveGameCallback;
    // NOLINTEND

public:
    // prevent constructor by default
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

    virtual bool isEduDedicatedServerOn() const;

    virtual void setIsEduDedicatedServerOn(bool);

    virtual bool isTimeForEduDedicatedServerRefresh() const;

    virtual void setEduDedicatedServerRefreshed();

    virtual void setEduDedicatedServerRefreshAfterSeconds(::std::chrono::seconds);

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
    MCAPI explicit AppConfigs(::AppConfigsDependencies&& dependencies);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AppConfigsDependencies&& dependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $loadFromData(::IAppConfigData const&);

    MCFOLD bool $arePremiumSkinPacksAllowed() const;

    MCFOLD bool $areResourcePacksAllowed() const;

    MCFOLD bool $isPlayScreenAllowed() const;

    MCFOLD bool $isChatScreenAllowed() const;

    MCFOLD bool $isGameTabShownInSettings() const;

    MCFOLD bool $areEmotesSupported() const;

    MCFOLD bool $useNormalizedFontSize() const;

    MCFOLD bool $useFullScreenByDefault() const;

    MCFOLD bool $muteByDefault() const;

    MCFOLD bool $isCoursesCacheEnabled() const;

    MCFOLD bool $shouldPromptBeforeExit() const;

    MCFOLD bool $gameArgumentsNeedAuthentication() const;

    MCFOLD bool $worldBuilderDisabled() const;

    MCFOLD bool $worldsAreSingleUse() const;

    MCFOLD ::EducationEditionOffer $getEducationEditionOffering() const;

    MCFOLD bool $requireTrustedContent() const;

    MCFOLD bool $isExternalPlayerCommunicationAllowed() const;

    MCAPI bool $supports3DExport() const;

    MCFOLD bool $requireEduLevelSettings() const;

    MCAPI ::ConnectionDefinition $getConnectionDefinition() const;

    MCFOLD bool $supportsChangingMultiplayerDuringPlay() const;

    MCFOLD bool $webSocketsDisabled() const;

    MCFOLD bool $sendPermissionsTelemetry() const;

    MCFOLD bool $useEduDemoUpsellDialog() const;

    MCFOLD bool $allowGameArguments() const;

    MCFOLD bool $canUseAzureNotebooks() const;

    MCFOLD ::AppConfigs::MaelstromEduUsabilityStatus $canUseMaelstrom() const;

    MCFOLD bool $isSaveToCloudOn() const;

    MCFOLD bool $isEduAIOn() const;

    MCFOLD bool $isEduDedicatedServerOn() const;

    MCFOLD void $setIsEduDedicatedServerOn(bool);

    MCFOLD bool $isTimeForEduDedicatedServerRefresh() const;

    MCFOLD void $setEduDedicatedServerRefreshed();

    MCFOLD void $setEduDedicatedServerRefreshAfterSeconds(::std::chrono::seconds);

    MCAPI ::std::vector<::PackIdVersion> $getAdditionalClientPacks(bool enteringLevel) const;

    MCAPI ::std::unique_ptr<::IScreenCapabilities> $getScreenCapabilities(::std::string const& screenName) const;

    MCAPI ::std::unique_ptr<::IContentAccessibilityProvider> $createContentAccessibility() const;

    MCAPI ::std::string $getFeedbackURL() const;

    MCAPI ::std::string $getHelpCenterURL() const;

    MCAPI ::std::string $getPrivacyAndOnlineSafetyURL() const;

    MCFOLD void $applyLevelDataOverride(::LevelData&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
