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
class Dimension;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IContentKeyProvider;
class IMinecraftGame;
class MinecraftScreenModel;
class OfferCollectionComponent;
class PackManifestFactory;
class Player;
class ResourceLocation;
class ScreenController;
class UIScene;
struct ActiveDirectoryModalArgs;
struct ActorUniqueID;
struct ContentItem;
struct DlcId;
struct EDULibraryCategory;
struct IContentManager;
struct INpcDialogueData;
struct IStoreCatalogItem;
struct IUIDefRepository;
struct LevelSummary;
struct LibraryCollection;
struct LibraryItem;
struct OnlineSafetyProgressHandler;
struct PackContentItem;
struct PackSettingsInfo;
struct ProgressHandler;
struct RealmsCreateParams;
struct SkinPackCollectionModel;
struct SkinPackModel;
struct StoreCatalogItem;
struct StoreDataDrivenScreenParams;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc2f256;
    ::ll::UntypedStorage<8, 8>  mUnkdd6607;
    ::ll::UntypedStorage<8, 24> mUnkc5e561;
    ::ll::UntypedStorage<1, 1>  mUnk9927e9;
    ::ll::UntypedStorage<8, 8>  mUnkc0e448;
    ::ll::UntypedStorage<1, 1>  mUnk774be4;
    ::ll::UntypedStorage<8, 8>  mUnk3f8980;
    ::ll::UntypedStorage<8, 8>  mUnkc6f466;
    ::ll::UntypedStorage<8, 8>  mUnk285426;
    ::ll::UntypedStorage<8, 24> mUnk854f34;
    ::ll::UntypedStorage<8, 8>  mUnk822b34;
    ::ll::UntypedStorage<8, 64> mUnk39aadc;
    ::ll::UntypedStorage<8, 16> mUnk66ccac;
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
    MCNAPI SceneFactory(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );

    MCNAPI ::Json::Value _calculateSafeZoneSize(
        float safeZoneScaleFactor,
        float screenPositionOffset,
        bool  horizontal,
        bool  isToporLeft
    ) const;

    MCNAPI void _createInventoryScreenCache();

    MCNAPI ::std::shared_ptr<::AbstractScene> _createPlayScreenImpl(
        ::PlayScreenDefaultTab  tab,
        ::std::string const&    dirtyLevelId,
        ::std::function<void()> initializedCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> _createScreen(::std::shared_ptr<::BaseScreen> newScreen);

    MCNAPI void _createWorldSettingsScreenCache();

    MCNAPI void _preCacheScreen(::Json::Value const& globalVars, ::std::string const& screenName);

    MCNAPI void _setUseClientInstanceStack(bool useClientInstanceStack);

    MCNAPI ::std::shared_ptr<::AbstractScene> createAcceptDeclineInvitationScreen(
        ::std::string const&              title,
        ::std::string const&              subtitle,
        ::std::function<void(bool, bool)> callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createActiveDirectoryAuthenticationScreen(bool displaySignIn, ::LastClickedSource lastClickedSource);

    MCNAPI ::std::shared_ptr<::AbstractScene> createActiveDirectoryModal(::ActiveDirectoryModalArgs const& args);

    MCNAPI ::std::shared_ptr<::AbstractScene> createAddEditExternalServerScreen(int id);

    MCNAPI ::std::shared_ptr<::AbstractScene> createAdhocInProgressScreen(bool enableAdhoc);

    MCNAPI ::std::shared_ptr<::AbstractScene> createAdhocScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createApplyResourcePacksScreen(::std::function<void(::MinecraftScreenModel&)> applyPacks);

    MCNAPI ::std::shared_ptr<::AbstractScene> createAutoSaveInfoScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createBookScreen(int bookSlot, bool editable, int page, ::BlockActor* lectern);

    MCNAPI ::std::shared_ptr<::AbstractScene> createBundlePurchaseWarningScreen(
        ::IStoreCatalogItem const&        catalogItem,
        ::OfferCollectionComponent const& bundleCollection,
        ::std::function<void()>           onPurchaseCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createCannotUseNetworkFeaturesScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createCellularDataWarningScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createChalkboardScreen(::BlockPos const& pos, bool lockVisible);

    MCNAPI ::std::shared_ptr<::AbstractScene> createChatScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createChooseRealmScreen(
        ::std::function<void(::Realms::World)> callback,
        ::SlotSelectedAction                   action,
        ::std::function<void()>                onCancelCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createCloudUploadScreen(::Core::Path const& levelPath);

    MCNAPI ::std::shared_ptr<::AbstractScene> createCodeScreen(::OpenCodeMethod openMethod);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createCommonDialogInfoScreen(::std::string const& dialogTitle, ::std::string const& dialogBody);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createConnectGamepadScreen(::GameControllerErrorType controllerError, ::std::function<void()> onCompleteCallback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createConsoleScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createContentLogHistoryScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createCreditsScreen(::CreditsType contentType, ::std::function<void()> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createCubeMapScreen(bool flushable);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createCustomTemplatesScreen(::std::vector<::WorldTemplateInfo> const& customTemplates);

    MCNAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceIntroPopup();

    MCNAPI ::std::shared_ptr<::AbstractScene> createDayOneExperienceScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createDeathScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createDebugScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createDeeplinkConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createDeleteAccountScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createDeleteProgressScreen(
        ::std::string const&                                    uniqueEventName,
        ::IContentManager&                                      contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>&& itemsToDelete
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createDevConsole();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createDimensionChangeProgressScreen(bool localServer, ::DimensionType targetDimensionID);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createDisabledSkinScreen(bool twoButtonWithCallback, ::std::function<void()> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createDisconnectScreen(
        ::std::string const& titleMessage,
        ::std::string const& displayMessage,
        ::std::string const& screenNameOverride,
        ::std::string const& telemetryOverride,
        bool                 leaveGame,
        bool                 isSubClient
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createEDULibraryCategoryScreen(
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       description,
        ::std::string const&                       screenshotRatio,
        int                                        columnCount,
        ::std::vector<::EDULibraryCategory> const& categories,
        bool                                       firstPage
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createEDUPlayScreen(::std::string initialCode);

    MCNAPI ::std::shared_ptr<::AbstractScene> createEDUServersScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createEDUWorldTemplatesScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createEDUWorldsScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createEditWorldScreen(
        ::LevelSummary const&   levelSummary,
        ::std::string const&    packId,
        ::std::function<void()> onOpenCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createEmoteWheelScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createEncryptionWarningScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createEncyclopediaScreen(::EncyclopediaTopicIndex startingTopicIndex);

    MCNAPI ::std::shared_ptr<::AbstractScene> createExpandedSkinPackScreen(
        ::StoreCatalogItem const&  catalogItem,
        ::SkinPackModel&           skinPackModel,
        ::SkinPackCollectionModel& skinPackCollection
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createExternalLinkDialogScreen(
        ::std::string const&           title,
        ::std::string const&           externalLink,
        ::std::string const&           message,
        ::std::string const&           goToPageText,
        ::std::string const&           secondButtonText,
        ::std::function<void()> const& callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createFeedbackPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCNAPI ::std::shared_ptr<::AbstractScene> createFileDownloadProgressScreen(
        ::std::string const&        realmID,
        int                         slotIndex,
        ::std::string const&        realmName,
        ::std::string const&        realmVersion,
        ::std::string const&        realmVersionName,
        ::std::function<void(bool)> callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createFileUploadProgressScreen(
        ::std::string const&                                  realmID,
        ::std::string const&                                  fileID,
        int                                                   slotIndex,
        bool                                                  needArchiving,
        ::Core::FileUploadType                                fileUploadType,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createGameInputErrorScreen(::std::function<void()> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createGamepadDisconnectScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createGameplayScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createGammaCalibrationScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createGatheringInfoScreen(bool autoConnect);

    MCNAPI ::std::shared_ptr<::AbstractScene> createGatheringWarningScreen(::std::string const& messageOverride);

    MCNAPI ::std::shared_ptr<::AbstractScene> createGlobalPauseScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createHowToPlayScreen(::HowToPlayTopicIndex startingTopicIndex);

    MCNAPI ::std::shared_ptr<::AbstractScene> createHudScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createIPSafetyDialogScreen(int externalServerId);

    MCNAPI ::std::shared_ptr<::AbstractScene> createImmersiveReader(::std::string readerText);

    MCNAPI ::std::shared_ptr<::AbstractScene> createImportExportProgressScreen(
        ::std::string const& titleText,
        ::std::string const& uniqueEventName,
        ::std::string const& messageText
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createInBedScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createInGameSceneFromUrl(::std::string const& url, ::OreUI::RouteMode mode);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createInGameScreen(::std::string const& name, ::Player& player, ::BlockPos const& pos, ::ActorUniqueID uniqueId);

    MCNAPI ::std::shared_ptr<::AbstractScene> createInventoryScreen(::CraftingType craftingType);

    MCNAPI ::std::shared_ptr<::AbstractScene> createInviteScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createLateJoinPreGameScreen(::std::function<void()> const& userReadyCallback, bool hasXBLBroadcast);

    MCNAPI ::std::shared_ptr<::AbstractScene> createLeaveLevelScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createLegacyCreateWorldFromTemplateScreen(::LevelSummary const& levelSummary);

    MCNAPI ::std::shared_ptr<::AbstractScene> createLegacyCreateWorldScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createLegacyRealmsPDPScreen(
        ::RealmsPlusTabIndex                    tabIndex,
        ::std::function<void(::Realms::World&)> onCreateCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLegacyRealmsPlusEndedScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createLegacyWorldTemplateLoadingScreen(::std::string const& manifestId);

    MCNAPI ::std::shared_ptr<::AbstractScene> createLessonCompleteScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibraryItemScreen(
        ::std::shared_ptr<::LibraryItem>                   item,
        ::std::unordered_map<::std::string, ::std::string> additionalOptions
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibraryModalScreen(
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              callback,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibraryScreen(::std::shared_ptr<::LibraryCollection> collection);

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibrarySearchScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibraryTagScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string const&                   libraryTitle,
        ::std::string const&                   libraryIcon,
        ::std::string const&                   libraryPageDescription
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLibraryWorldScreen(
        ::std::shared_ptr<::LibraryCollection> collection,
        ::std::string                          libraryTitle,
        ::std::string                          libraryIcon,
        ::std::string                          libraryPageDescription,
        ::std::string const&                   categoryTitle
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createLocalWorldPickerScreen(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createMakeInfiniteScreen(::LevelSummary const& editedLevel, ::StorageVersion storageVersion);

    MCNAPI ::std::shared_ptr<::AbstractScene> createManageFeedScreen(::Realms::World const& world);

    MCNAPI ::std::shared_ptr<::AbstractScene> createManifestValidationScreen(
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::ResourceLocation const&                                         resourceLocation,
        ::Core::Path const&                                               originalFilePath,
        bool                                                              packInUserDataPath,
        ::std::shared_ptr<::PackContentItem const>                        item
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPDPScreen(
        ::MarketplacePassTabIndex         tabIndex,
        ::sidebar::navigationLayout::Type sidebarLayoutType
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPDPViewAllPacksScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseAmazonDeviceWarningScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassPurchaseWarningScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassUpsellScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMarketplacePassWelcomeScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMigrationErrorScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createMobEffectsScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createModalProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 forceRenderBelow,
        ::std::string const&                 screenNameOverride,
        bool                                 isCancellable,
        float                                backgroundFillAlpha
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        bool                                 allowSmallDownloads,
        bool                                 sendProgressTelem,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createNoInvitesOrJoiningScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createNoLicenseScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createNoWifiWarningScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createNotSignedIntoNintendoScreen(::std::string const& messageOverride);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createNpcInteractScreen(::Player& player, ::std::shared_ptr<::INpcDialogueData> data);

    MCNAPI ::std::shared_ptr<::AbstractScene> createOSWriteThrottleDialogScreen(
        ::std::chrono::duration<double, ::std::ratio<1, 1>> totalWait,
        ::std::shared_ptr<bool>                             dialogStillAlive
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createOnlineSafetyDialogScreen(::OnlineSafetyProgressHandler& handler);

    MCNAPI ::std::shared_ptr<::AbstractScene> createOptionsScreen(
        ::SettingsTabIndex   startingTabIndex,
        bool                 navToMenuOnExit,
        bool                 maintainOldFocus,
        ::std::string const& initialPackId
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createOptionsScreen(
        ::LevelSummary const& levelSummary,
        ::SettingsTabIndex    startingTabIndex,
        bool                  navToMenuOnExit,
        bool                  maintainOldFocus,
        ::std::string const&  initialPackId
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createPackSettingsScreen(::PackSettingsInfo packSettingsInfo);

    MCNAPI ::std::shared_ptr<::AbstractScene> createPauseScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createPermissionsScreen(::ActorUniqueID defaultPlayerId);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createPlatformNetworkConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createPlatformSplitScreenConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createPlatformStoreConnectConfirmationScreen(::std::function<void(bool)> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createPortfolioScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 sendProgressTelem,
        ::std::string const&                 overrideScreen
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                                 uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>&& progressHandlerList,
        bool                                                 loadAssets,
        bool                                                 sendProgressTelem,
        ::std::string const&                                 overrideScreen
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createProgressScreen(
        ::std::string const&                               uniqueEventName,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList,
        bool                                               loadAssets,
        bool                                               sendProgressTelem,
        bool                                               useRandomProgressMessage,
        bool                                               allowSmallDownloads,
        ::ProgressContentType                              contentType,
        ::GameType                                         gameType
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createRatingPromptPopup(::std::string const& title, ::std::string const& image, ::std::string const& buttonName);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmNetworkProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsAllowListScreen(
        ::Realms::World const&  world,
        ::std::function<void()> followUpActionAfterCreation,
        bool                    forceNewWorld
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsCreateScreen(::RealmsCreateParams const& screenDetails);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsInviteLinkSettingScreen(
        ::Realms::World const&      world,
        ::Realms::InviteLink const& link,
        ::SettingsTabIndex          initialTab
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsJoinProgressScreen(
        ::std::string const&                 uniqueEventName,
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 loadAssets,
        bool                                 realmsPlusExpired,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createRealmsManageScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsPDPViewAllPacksScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsPackErrorsScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsPendingInvitesScreen(bool hasPendingInvites);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsPlusPurchaseWarningScreen(::std::function<void()> callback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsSettingsScreen(
        ::Realms::World const& world,
        ::SettingsTabIndex     initialTab,
        ::std::string const&   initialPackId
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsSharingLauncherScreen(::std::string const& realmsInvite);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createRealmsSlotSettingsScreen(::Realms::World const& world, ::SettingsTabIndex initialTab);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsSlotsScreen(::Realms::World& world);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createRealmsWarningScreen(
        ::Realms::World const& world,
        ::std::string const&   ip,
        int                    port,
        ::std::string const&   serverRegion,
        int                    serviceQuality
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createSafeZoneScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createScreenshotScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createSelectWorldScreen(
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createServerForm(uint formId, ::std::string const& formJSON);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createSignScreen(::BlockPos const& pos, ::BlockActorType blockActorType, bool isFrontSide);

    MCNAPI ::std::shared_ptr<::AbstractScene> createSkinPickerScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createStorageMigrationProgressScreen(
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& migrationService
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createStorageSpaceWarningScreen(::std::string const& message);

    MCNAPI ::std::shared_ptr<::AbstractScene> createStoreFeaturesDisabledScreen(::std::string const& messageOverride);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createStoreInventoryScreen(::InventoryTabIndex tabIndex, ::std::optional<::StoreDataDrivenScreenParams> paramsOpt);

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createSubmitFeedbackScreen(::std::string const& itemId, int feedbackTextLimit);

    MCNAPI ::std::shared_ptr<::AbstractScene> createSunsettingScreen(::std::string& title);

    MCNAPI ::std::shared_ptr<::AbstractScene> createTTSEnabledWarningScreen(::TTSEnabledStatus status);

    MCNAPI ::std::shared_ptr<::AbstractScene> createTTSErrorScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createToastScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createTokenFAQScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createTokenPopupScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene> createTrade2Screen(::Player&, ::ActorUniqueID const& uniqueID);

    MCNAPI ::std::shared_ptr<::AbstractScene> createTradeScreen(::Player&, ::ActorUniqueID const& uniqueID);

    MCNAPI ::std::shared_ptr<::UIScene> createUIScene(
        ::IMinecraftGame&                     mc,
        ::IClientInstance&                    client,
        ::std::string const&                  screenName,
        ::std::shared_ptr<::ScreenController> controller
    );

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createUpdateWorldHeightScreen(::std::function<void(bool)> startWorldCallback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createUpsellScreen(bool isNewWorld, bool timeExpired);

    MCNAPI ::std::shared_ptr<::AbstractScene> createUserManagementModalScreen(
        ::UserManagementModalScreenData const& screenData,
        ::std::function<void(bool)>            callback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createVersionUpdateScreen(::UpdateVersionScreenContext context);

    MCNAPI ::std::shared_ptr<::AbstractScene> createWin10TrialConversionScreen();

    MCNAPI ::std::shared_ptr<::AbstractScene>
    createWorldConversionCompleteScreen(::std::string const& levelId, ::std::function<void()> cancelCallback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createWorldRecoveryScreen(::std::function<void()> successCallback);

    MCNAPI ::std::shared_ptr<::AbstractScene> createWorldSeedCatalogScreen(
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createWorldTemplateScreen(bool hideTopBar);

    MCNAPI ::std::shared_ptr<::AbstractScene> createXblConsoleSignInScreen(::std::string const& code);

    MCNAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const&    signInSource,
        ::std::function<void()> callBackAfterSignIn,
        ::std::function<void()> callBackAfterCancel
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> createXblImmediateSignInScreen(
        ::std::string const& signInSource,
        ::std::string const& redirectToRoute,
        bool                 replacePreviousRouteAfterSignIn
    );

    MCNAPI ::Json::Value generateGlobalVars(::std::string const& screenName, ::ScreenController& controller);

    MCNAPI void registerInGameScreen(
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

    MCNAPI void registerInGameScreen(
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

    MCNAPI void terminateAsyncUILoading();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IMinecraftGame&                                                minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::AbstractScene> $createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab);

    MCNAPI ::std::shared_ptr<::AbstractScene> $createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    );

    MCNAPI ::std::shared_ptr<::AbstractScene> $createStartMenuScreen(bool shouldSendEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
