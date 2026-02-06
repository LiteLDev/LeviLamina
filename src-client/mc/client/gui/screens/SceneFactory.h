#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/LibraryModalScreenType.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/RealmsPlusTabIndex.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"
#include "mc/client/gui/screens/interfaces/ISceneFactory.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/client/tts/TTSEnabledStatus.h"
#include "mc/deps/core/file/FileUploadType.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class BaseScreen;
class BlockActor;
class BlockPos;
class CachedScenes;
class Dimension;
class HashedString;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IMinecraftGame;
class MinecraftScreenModel;
class PackManifestFactory;
class Player;
class RealmsCreateParams;
class ResourceLocation;
class SceneFactoryProxy;
class ScreenController;
class SkinPackCollectionModel;
class SkinPackModel;
class TaskGroup;
class UIScene;
struct ActiveDirectoryModalArgs;
struct ActorUniqueID;
struct ContentItem;
struct DlcId;
struct EDULibraryCategory;
struct INpcDialogueData;
struct IStoreCatalogItem;
struct IUIDefRepository;
struct LevelSummary;
struct LibraryCollection;
struct LibraryItem;
struct OfferCollectionComponent;
struct OnlineSafetyProgressHandler;
struct PackContentItem;
struct PackSettingsInfo;
struct ProgressHandler;
struct StoreCatalogItem;
struct StoreDataDrivenScreenParams;
struct UISoundPlayer;
struct UserManagementModalScreenData;
struct WorldTemplateInfo;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace Realms { struct InviteLink; }
namespace Realms { struct World; }
// clang-format on

class SceneFactory : public ::ISceneFactory {
public:
    // SceneFactory inner types declare
    // clang-format off
    struct PreCachePackage;
    // clang-format on

    // SceneFactory inner types define
    struct PreCachePackage {};

    using InGameScreenCreator = ::std::function<::std::shared_ptr<::UIScene>(
        ::SceneFactory&,
        ::IMinecraftGame&,
        ::IClientInstance&,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
        ::std::string const&,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                       mUseClientInstanceStack;
    ::ll::TypedStorage<8, 8, ::OreUI::SceneProvider&>                                    mSceneProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UISoundPlayer>>                         mSoundPlayer;
    ::ll::TypedStorage<8, 8, ::CachedScenes&>                                            mCachedScenes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SceneFactory::PreCachePackage>>> mPreCachePackages;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SceneFactoryProxy>>                             mProxy;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::pair<
                ::std::string,
                ::std::function<::std::shared_ptr<::UIScene>(
                    ::SceneFactory&,
                    ::IMinecraftGame&,
                    ::IClientInstance&,
                    ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
                    ::std::string const&,
                    ::Player&,
                    ::BlockPos const&,
                    ::ActorUniqueID
                )>>>>
                                                               mRegisteredInGameScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSceneStackDestroyedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactory& operator=(SceneFactory const&);
    SceneFactory(SceneFactory const&);
    SceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SceneFactory() /*override*/;

    virtual ::std::shared_ptr<::AbstractScene>
    createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab) /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    ) /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createStartMenuScreen(bool shouldSendEvent) /*override*/;

    virtual ::Json::Value createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const>) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneFactory(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );

    MCAPI ::Json::Value _calculateSafeZoneSize(
        float safeZoneScaleFactor,
        float screenPositionOffset,
        bool  horizontal,
        bool  isToporLeft
    ) const;

    MCAPI void _createInventoryScreenCache();

    MCAPI ::std::shared_ptr<::AbstractScene> _createPlayScreenImpl(
        ::PlayScreenDefaultTab  tab,
        ::std::string const&    dirtyLevelId,
        ::std::function<void()> initializedCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> _createScreen(::std::shared_ptr<::BaseScreen> newScreen);

    MCAPI void _createWorldSettingsScreenCache();

    MCAPI void _preCacheScreen(::Json::Value const& globalVars, ::std::string const& screenName);

    MCAPI void _setUseClientInstanceStack(bool useClientInstanceStack);

    MCAPI ::std::shared_ptr<::AbstractScene> createAcceptDeclineInvitationScreen(
        ::std::string const&              title,
        ::std::string const&              subtitle,
        ::std::function<void(bool, bool)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createActiveDirectoryAuthenticationScreen(bool displaySignIn, ::LastClickedSource lastClickedSource);

    MCAPI ::std::shared_ptr<::AbstractScene> createActiveDirectoryModal(::ActiveDirectoryModalArgs const& args);

    MCAPI ::std::shared_ptr<::AbstractScene> createAddEditExternalServerScreen(int id);

    MCAPI ::std::shared_ptr<::AbstractScene> createAdhocInProgressScreen(bool enableAdhoc);

    MCAPI ::std::shared_ptr<::AbstractScene> createAdhocScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createApplyResourcePacksScreen(::std::function<void(::MinecraftScreenModel&)> applyPacks);

    MCAPI ::std::shared_ptr<::AbstractScene> createAutoSaveInfoScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createBookScreen(int bookSlot, bool editable, int page, ::BlockActor* lectern);

    MCAPI ::std::shared_ptr<::AbstractScene> createBundlePurchaseWarningScreen(
        ::IStoreCatalogItem const&        catalogItem,
        ::OfferCollectionComponent const& bundleCollection,
        ::std::function<void()>           onPurchaseCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createCannotUseNetworkFeaturesScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createCellularDataWarningScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createChalkboardScreen(::BlockPos const& pos, bool lockVisible);

    MCAPI ::std::shared_ptr<::AbstractScene> createChatScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createCodeScreen(::OpenCodeMethod openMethod);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCommonDialogInfoScreen(::std::string const& dialogTitle, ::std::string const& dialogBody);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createConnectGamepadScreen(::GameControllerErrorType controllerError, ::std::function<void()> onCompleteCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createConsoleScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createContentLogHistoryScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCreditsScreen(::CreditsType contentType, ::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createCubeMapScreen(bool flushable);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createCustomTemplatesScreen(::std::vector<::WorldTemplateInfo> const& customTemplates);

    MCAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceIntroPopup();

    MCAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeathScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDebugScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeeplinkConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createDeleteAccountScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createDeleteProgressScreen(
        ::std::string const&                                    uniqueEventName,
        ::IContentManager&                                      contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>&& itemsToDelete
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createDevConsole();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createDimensionChangeProgressScreen(bool localServer, ::DimensionType targetDimensionID);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createDisabledSkinScreen(bool twoButtonWithCallback, ::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createDisconnectScreen(
        ::std::string const& titleMessage,
        ::std::string const& displayMessage,
        ::std::string const& screenNameOverride,
        ::std::string const& telemetryOverride,
        bool                 leaveGame,
        bool                 isSubClient
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEDULibraryCategoryScreen(
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       description,
        ::std::string const&                       screenshotRatio,
        int                                        columnCount,
        ::std::vector<::EDULibraryCategory> const& categories,
        bool                                       firstPage
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUPlayScreen(::std::string initialCode);

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUServersScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUWorldTemplatesScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEDUWorldsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEditWorldScreen(
        ::LevelSummary const&   levelSummary,
        ::std::string const&    packId,
        ::std::function<void()> onOpenCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createEmoteWheelScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createEncryptionWarningScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createEncyclopediaScreen(::EncyclopediaTopicIndex startingTopicIndex);

    MCAPI ::std::shared_ptr<::AbstractScene> createExpandedSkinPackScreen(
        ::StoreCatalogItem const&  catalogItem,
        ::SkinPackModel&           skinPackModel,
        ::SkinPackCollectionModel& skinPackCollection
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createExternalLinkDialogScreen(
        ::std::string const&           title,
        ::std::string const&           externalLink,
        ::std::string const&           message,
        ::std::string const&           goToPageText,
        ::std::string const&           secondButtonText,
        ::std::function<void()> const& callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createFeedbackPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCAPI ::std::shared_ptr<::AbstractScene> createFileDownloadProgressScreen(
        ::std::string const&        realmID,
        int                         slotIndex,
        ::std::string const&        realmName,
        ::std::string const&        realmVersion,
        ::std::string const&        realmVersionName,
        ::std::function<void(bool)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createFileUploadProgressScreen(
        ::std::string const&                                  realmID,
        ::std::string const&                                  fileID,
        int                                                   slotIndex,
        bool                                                  needArchiving,
        ::Core::FileUploadType                                fileUploadType,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createGameInputErrorScreen(::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createGamepadDisconnectScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGameplayScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGammaCalibrationScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createGatheringInfoScreen(bool autoConnect);

    MCAPI ::std::shared_ptr<::AbstractScene> createGatheringWarningScreen(::std::string const& messageOverride);

    MCAPI ::std::shared_ptr<::AbstractScene> createGlobalPauseScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createHowToPlayScreen(::HowToPlayTopicIndex startingTopicIndex);

    MCAPI ::std::shared_ptr<::AbstractScene> createHudScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createIPSafetyDialogScreen(int externalServerId);

    MCAPI ::std::shared_ptr<::AbstractScene> createImmersiveReader(::std::string readerText);

    MCAPI ::std::shared_ptr<::AbstractScene> createImportExportProgressScreen(
        ::std::string const& titleText,
        ::std::string const& uniqueEventName,
        ::std::string const& messageText
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createInBedScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createInGameSceneFromUrl(::std::string const& url, ::OreUI::RouteMode mode);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createInGameScreen(::std::string const& name, ::Player& player, ::BlockPos const& pos, ::ActorUniqueID uniqueId);

    MCAPI ::std::shared_ptr<::AbstractScene> createInventoryScreen(::CraftingType craftingType);

    MCAPI ::std::shared_ptr<::AbstractScene> createInviteScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createLateJoinPreGameScreen(::std::function<void()> const& userReadyCallback, bool hasXBLBroadcast);

    MCAPI ::std::shared_ptr<::AbstractScene> createLeaveLevelScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createLegacyCreateWorldFromTemplateScreen(::LevelSummary const& levelSummary);

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyCreateWorldScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyRealmsPDPScreen(
        ::RealmsPlusTabIndex                    tabIndex,
        ::std::function<void(::Realms::World&)> onCreateCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyRealmsPlusEndedScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLegacyWorldTemplateLoadingScreen(::std::string const& manifestId);

    MCAPI ::std::shared_ptr<::AbstractScene> createLessonCompleteScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryItemScreen(
        ::std::shared_ptr<::LibraryItem>                   item,
        ::std::unordered_map<::std::string, ::std::string> additionalOptions
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryModalScreen(
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              callback,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryScreen(::std::shared_ptr<::LibraryCollection> collection);

    MCAPI ::std::shared_ptr<::AbstractScene> createLibrarySearchScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryTagScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon,
        ::std::string const&                   libraryPageDescription
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLibraryWorldScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string                          libraryTitle,
        ::std::string                          libraryIcon,
        ::std::string                          libraryPageDescription,
        ::std::string const&                   categoryTitle
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createLocalWorldPickerScreen(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createMakeInfiniteScreen(::LevelSummary const& editedLevel, ::StorageVersion storageVersion);

    MCAPI ::std::shared_ptr<::AbstractScene> createManageFeedScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createManifestValidationScreen(
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::ResourceLocation const&                                         resourceLocation,
        ::Core::Path const&                                               originalFilePath,
        bool                                                              packInUserDataPath,
        ::std::shared_ptr<::PackContentItem const>                        item
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPDPScreen(
        ::MarketplacePassTabIndex         tabIndex,
        ::sidebar::navigationLayout::Type sidebarLayoutType
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPDPViewAllPacksScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseAmazonDeviceWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassUpsellScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassWelcomeScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMigrationErrorScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createMobEffectsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable,
        float                                backgroundFillAlpha
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        bool                                 allowSmallDownloads,
        bool                                 sendProgressTelem,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createNoInvitesOrJoiningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNoLicenseScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNoWifiWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createNotSignedIntoNintendoScreen(::std::string const& messageOverride);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createNpcInteractScreen(::Player& player, ::std::shared_ptr<::INpcDialogueData> data);

    MCAPI ::std::shared_ptr<::AbstractScene> createOSWriteThrottleDialogScreen(
        ::std::chrono::duration<double, ::std::ratio<1, 1>> totalWait,
        ::std::shared_ptr<bool>                             dialogStillAlive
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createOnlineSafetyDialogScreen(::OnlineSafetyProgressHandler& handler);

    MCAPI ::std::shared_ptr<::AbstractScene> createOptionsScreen(
        ::SettingsTabIndex   startingTabIndex,
        bool                 navToMenuOnExit,
        bool                 maintainOldFocus,
        ::std::string const& initialPackId
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createOptionsScreen(
        ::LevelSummary const& levelSummary,
        ::SettingsTabIndex    startingTabIndex,
        bool                  navToMenuOnExit,
        bool                  maintainOldFocus,
        ::std::string const&  initialPackId
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createPackSettingsScreen(::PackSettingsInfo packSettingsInfo);

    MCAPI ::std::shared_ptr<::AbstractScene> createPauseScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createPermissionsScreen(::ActorUniqueID defaultPlayerId);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformSplitScreenConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createPortfolioScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 sendProgressTelem,
        ::std::string const&                 overrideScreen
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                                 uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>&& progressHandlerList,
        bool                                                 loadAssets,
        bool                                                 sendProgressTelem,
        ::std::string const&                                 overrideScreen
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets,
        bool                                               sendProgressTelem,
        bool                                               useRandomProgressMessage,
        bool                                               allowSmallDownloads,
        ::ProgressContentType                              contentType,
        ::GameType                                         gameType
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRatingPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsAllowListScreen(
        ::Realms::World const&  world,
        ::std::function<void()> followUpActionAfterCreation,
        bool                    forceNewWorld
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsCreateScreen(::RealmsCreateParams const& screenDetails);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsInviteLinkSettingScreen(
        ::Realms::World const&      world,
        ::Realms::InviteLink const& link,
        ::SettingsTabIndex          initialTab
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsInviteLinksScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsJoinProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 realmsPlusExpired,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsManageMembersScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRealmsManageScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPDPViewAllPacksScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPackErrorsScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPendingInvitesScreen(bool hasPendingInvites);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsPlusPurchaseWarningScreen(::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSettingsScreen(
        ::Realms::World const& world,
        ::SettingsTabIndex     initialTab,
        ::std::string const&   initialPackId
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSharingLauncherScreen(::std::string const& realmsInvite);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createRealmsSlotSettingsScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsSlotsScreen(::Realms::World& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreen(
        ::Realms::World const& world,
        ::std::string const&   ip,
        int                    port,
        ::std::string const&   serverRegion,
        int                    serviceQuality
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createSafeZoneScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createScreenshotScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createSelectWorldScreen(
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createServerForm(uint formId, ::std::string const& formJSON);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createSignScreen(::BlockPos const& pos, ::BlockActorType blockActorType, bool isFrontSide);

    MCAPI ::std::shared_ptr<::AbstractScene> createSkinPickerScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createStorageMigrationProgressScreen(
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& migrationService
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createStorageSpaceWarningScreen(::std::string const& message);

    MCAPI ::std::shared_ptr<::AbstractScene> createStoreFeaturesDisabledScreen(::std::string const& messageOverride);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createStoreInventoryScreen(::InventoryTabIndex tabIndex, ::std::optional<::StoreDataDrivenScreenParams> paramsOpt);

    MCAPI ::std::shared_ptr<::AbstractScene>
    createSubmitFeedbackScreen(::std::string const& itemId, int feedbackTextLimit);

    MCAPI ::std::shared_ptr<::AbstractScene> createSunsettingScreen(::std::string& title);

    MCAPI ::std::shared_ptr<::AbstractScene> createTTSEnabledWarningScreen(::TTSEnabledStatus status);

    MCAPI ::std::shared_ptr<::AbstractScene> createTTSErrorScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createToastScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTokenFAQScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTokenPopupScreen();

    MCAPI ::std::shared_ptr<::AbstractScene> createTrade2Screen(::Player&, ::ActorUniqueID const& uniqueID);

    MCAPI ::std::shared_ptr<::AbstractScene> createTradeScreen(::Player&, ::ActorUniqueID const& uniqueID);

    MCAPI ::std::shared_ptr<::UIScene> createUIScene(
        ::IMinecraftGame&                     mc,
        ::IClientInstance&                    client,
        ::std::string const&                  screenName,
        ::std::shared_ptr<::ScreenController> controller
    );

    MCAPI ::std::shared_ptr<::AbstractScene>
    createUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createUpsellScreen(bool isNewWorld, bool timeExpired);

    MCAPI ::std::shared_ptr<::AbstractScene> createUserManagementModalScreen(
        ::UserManagementModalScreenData const& screenData,
        ::std::function<void(bool)>            callback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createVersionUpdateScreen(::UpdateVersionScreenContext context);

    MCAPI ::std::shared_ptr<::AbstractScene> createWin10TrialConversionScreen();

    MCAPI ::std::shared_ptr<::AbstractScene>
    createWorldConversionCompleteScreen(::std::string const& levelId, ::std::function<void()> cancelCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldRecoveryScreen(::std::function<void()> successCallback);

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldSeedCatalogScreen(
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createWorldTemplateScreen(bool hideTopBar);

    MCAPI ::std::shared_ptr<::AbstractScene> createXblConsoleSignInScreen(::std::string const& code);

    MCAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const& signInSource,
        ::std::string const& redirectToRoute,
        bool                 replacePreviousRouteAfterSignIn
    );

    MCAPI ::Json::Value generateGlobalVars(::std::string const& screenName, ::ScreenController& controller);

    MCAPI void registerInGameScreen(
        ::std::string const& name,
        ::std::function<::std::shared_ptr<::UIScene>(
            ::SceneFactory&,
            ::IMinecraftGame&,
            ::IClientInstance&,
            ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
            ::std::string const&,
            ::Player&,
            ::BlockPos const&,
            ::ActorUniqueID
        )>                   creationFunc
    );

    MCAPI void registerInGameScreen(
        ::std::string const& registeredName,
        ::std::string const& resourceName,
        ::std::function<::std::shared_ptr<::UIScene>(
            ::SceneFactory&,
            ::IMinecraftGame&,
            ::IClientInstance&,
            ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&,
            ::std::string const&,
            ::Player&,
            ::BlockPos const&,
            ::ActorUniqueID
        )>                   creationFunc
    );

    MCAPI void terminateAsyncUILoading();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::AbstractScene> $createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab);

    MCAPI ::std::shared_ptr<::AbstractScene> $createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    );

    MCAPI ::std::shared_ptr<::AbstractScene> $createStartMenuScreen(bool shouldSendEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
