#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/MinecraftGameFeatures.h"
#include "mc/client/gui/SettingsModalType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/GraphicsMode.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class ContentLogFileEndPoint;
class GameEditionProperties;
class IAdvancedGraphicsOptions;
class IOptionRegistry;
class InputSettingsHandler;
class LevelDataWrapper;
class LocalPlayer;
class MinecraftCommands;
class PacketSender;
class ProfanityContext;
class SoundOptions;
class StoreCatalogRepository;
class TaskGroup;
class TrialManager;
class WorldSettingsRules;
struct SettingsScreenCapabilities;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace SDL { class SessionBinaries; }
namespace Settings { class Eventing; }
namespace Social { class IGameConnectionInfoProvider; }
namespace Social { class User; }
// clang-format on

namespace Settings::RegistryBuilder {

class IBuilderContext {
public:
    // IBuilderContext inner types define
    using OnReload = ::std::function<void(::ContentItemCollection&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBuilderContext() = default;

    virtual bool isPreGame() const = 0;

    virtual bool isSplitScreenActive() const = 0;

    virtual bool isPrimaryClient() const = 0;

    virtual bool isPlayerInEditor() const = 0;

    virtual bool isEditorModeOrInEditorWorld() const = 0;

    virtual ::IOptionRegistry& getOptions() = 0;

    virtual ::IOptionRegistry const& getOptions() const = 0;

    virtual int getClampedGuiScaleOffset() const = 0;

    virtual ::SoundOptions& getSoundOptions() = 0;

    virtual ::Social::IGameConnectionInfoProvider const& getGameConnectionInfoProvider() const = 0;

    virtual ::Settings::Eventing& getSettingsEventing() = 0;

    virtual ::TrialManager& getTrialManager() = 0;

    virtual ::MinecraftCommands& getCommands() = 0;

    virtual ::InputSettingsHandler& getInputSettingsHandler() const = 0;

    virtual ::WorldSettingsRules const& getWorldSettingsRules() const = 0;

    virtual ::std::optional<::std::string> getFeedbackUrl() const = 0;

    virtual bool supportsFullScreen() const = 0;

    virtual bool supportsUserDefinedSafeZone() const = 0;

    virtual int getRecommendedRenderDistance(::GraphicsMode) const = 0;

    virtual int getMaxGUIScaleIndex() const = 0;

    virtual int getOptimalGUIScaleIndex() const = 0;

    virtual ::InputMode getCurrentInputMode() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerToUIScreenSizeChangedEvent(::std::function<void()>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerLevelChangedListener(::std::function<void(::LevelDataWrapper&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription registerToServerFormDataAvailableEvent(::std::function<void()>) = 0;

    virtual bool isServerFormDataAvailable() const = 0;

    virtual void pushRoute(::std::string_view) = 0;

    virtual void pushSettingsTabWithModal(::SettingsTabIndex, ::SettingsModalType) = 0;

    virtual void pushToast(::std::string_view) = 0;

    virtual bool supportsSetClipboard() = 0;

    virtual void navigateToJsonSettingsTab(::SettingsTabIndex) = 0;

    virtual void navigateToHowToPlayScreen() = 0;

    virtual void setClipboardData(::std::string_view) = 0;

    virtual void launchURI(::std::string const&) = 0;

    virtual void navigateToPendingRealmInvites() = 0;

    virtual void setInputBindingMode(::InputBindingMode) = 0;

    virtual ::InputBindingMode getInputBindingMode() const = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerToRawInputEvent(::std::function<void(int, ::RawInputType, ::ButtonState, bool)>) = 0;

    virtual ::Bedrock::PubSub::Subscription registerToInputModeEvent(::std::function<void(::InputMode)>) = 0;

    virtual void navigateToCustomizeTouchControl() = 0;

    virtual void refreshClientInputConfig() = 0;

    virtual bool isGamePlayTipsEnabled() const = 0;

    virtual bool isSignedInToXBL() const = 0;

    virtual bool isEligibleForPauseFeature() const = 0;

    virtual bool supportsTTSLanguage(::std::string_view) const = 0;

    virtual bool isTTSEnabled() const = 0;

    virtual bool isMultiplayerClient() const = 0;

    virtual bool hasLocalPlayer() const = 0;

    virtual bool hasCommands() const = 0;

    virtual ::LevelDataWrapper& getLevelDataWrapper() = 0;

    virtual ::PacketSender& getPacketSender() = 0;

    virtual bool supportsKeyboardAndMouse() const = 0;

    virtual bool supportsGamepad() const = 0;

    virtual bool supportsTouch() const = 0;

    virtual bool isInRealms() const = 0;

    virtual bool isRealmsEnabled() const = 0;

    virtual bool isRealmsOwner() const = 0;

    virtual bool isRealmsFeatureEnabled(::std::string_view) const = 0;

    virtual bool isConfigurableRealmsEnvironment() const = 0;

    virtual bool isPartySystemAvailable() const = 0;

    virtual bool isTrial() const = 0;

    virtual ::SettingsScreenCapabilities const& getSettingsScreenCapabilities() const = 0;

    virtual bool isEduEdition() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> getAdvancedGraphicsOptions() = 0;

    virtual void navigateToGammaCalibrationScreen() = 0;

    virtual bool supportsAntiAliasing() const = 0;

    virtual bool supportsTextureStreaming() const = 0;

    virtual bool supportsTexelAntiAliasing() const = 0;

    virtual bool supportsAdvancedGraphics() const = 0;

    virtual bool supportsDeferredGraphics() const = 0;

    virtual bool supportsDeferredPointLights() const = 0;

    virtual bool supportsImprovedInputResponse() const = 0;

    virtual bool supportsSplitScreen() const = 0;

    virtual bool isFeatureEnabled(::FeatureOptionID) const = 0;

    virtual bool isGameFeatureEnabled(::MinecraftGameFeatures) const = 0;

    virtual ::GameEditionProperties const& getGameEditionProperties() const = 0;

    virtual ::std::optional<::std::reference_wrapper<::LocalPlayer>> const getLocalPlayer() const = 0;

    virtual ::ProfanityContext const& getProfanityContext() const = 0;

    virtual ::std::optional<::std::string> getMinecraftAccountId() const = 0;

    virtual void showUserSettings() = 0;

    virtual ::std::string getDeviceId() const = 0;

    virtual bool shouldShowSignOutOfMicrosoftAccount() const = 0;

    virtual void signOutFromMicrosoftAccount() = 0;

    virtual void clearSignInData() = 0;

    virtual void navigateToDeleteMicrosoftAccount() = 0;

    virtual bool shouldShowRequestPlaystationNetworkAuthorization() const = 0;

    virtual ::Bedrock::PubSub::Subscription
        subscribeToShouldShowRequestPlaystationNetworkAuthorization(::std::function<void()>) = 0;

    virtual void requestPlaystationNetworkAuthorization() = 0;

    virtual bool isConsolePlatform() const = 0;

    virtual bool isDesktopPlatform() const = 0;

    virtual ::std::shared_ptr<::Social::User> const& getUser() const = 0;

    virtual void navigateToTabbedUpsell() = 0;

    virtual bool needPlatformConnectionBeforeXBLSignIn() const = 0;

    virtual bool isWaitingForPlatformConnection() const = 0;

    virtual void navigateToPlatformNetworkConnectConfirmation(::std::function<void(bool)>) = 0;

    virtual void navigateToXBLSignIn() = 0;

    virtual void navigateToContentLogHistoryScreen() = 0;

    virtual bool isSupportingFramePacing() const = 0;

    virtual void cancelAllDownloads() const = 0;

    virtual ::StoreCatalogRepository& getStoreCatalogRepository() const = 0;

    virtual ::std::shared_ptr<::SDL::SessionBinaries> getServiceSessionBinaries() const = 0;

    virtual ::Core::FilePathManager& getFilePathManager() const = 0;

    virtual void navigateToDeleteAreaProgressScreen(
        ::std::string_view,
        ::std::chrono::seconds const,
        ::std::chrono::seconds const,
        ::std::vector<::std::tuple<::Core::PathBuffer<::Core::BasicStackString<char, 1024>>, ::std::string>>,
        ::std::function<void()>
    ) const = 0;

    virtual ::Bedrock::PubSub::Subscription registerToContentItemCollectionReload(
        ::StorageManager::ContentType,
        ::std::function<void(::ContentItemCollection&)>
    ) = 0;

    virtual ::std::optional<::std::reference_wrapper<::ContentItemCollection>> const
        getVisibleContentItemCollection(::StorageManager::ContentType) const = 0;

    virtual bool isCloudStorageManagerEnabled() const = 0;

    virtual ::TaskGroup& getIOTaskGroup() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint const> getContentLogFileEndPoint() const = 0;

    virtual ::std::string getCurrentContentLogFileName() = 0;

    virtual bool isSupportingLegacyWorlds() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings::RegistryBuilder
