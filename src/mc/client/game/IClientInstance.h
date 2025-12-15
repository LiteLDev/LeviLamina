#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/events/NetworkType.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationGroup;
class BlockSource;
class ClientHitDetectCoordinator;
class ClientInstanceEventCoordinator;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientScriptEventCoordinator;
class DateManager;
class EDUSystems;
class EntityContext;
class EntitySystems;
class GameCallbacks;
class GeometryGroup;
class HitResult;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IMinecraftEventing;
class IMinecraftGame;
class IOptions;
class IResourcePackRepository;
class ISceneStack;
class ItemRegistryRef;
class Level;
class LinkedAssetValidator;
class LocalPlayer;
class Minecraft;
class MultiPlayerLevel;
class Option;
class Options;
class PackManifestFactory;
class PacketSender;
class Player;
class ResourcePackManager;
class ShaderColor;
class TaskGroup;
class Timer;
class ToastManager;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
struct ActorUniqueID;
struct DisconnectionScreenParams;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldTelemetryInfo;
struct ScreenshotOptions;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace OreUI { class ITelemetry; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class User; }
namespace mce { class Camera; }
namespace mce { class TexturePtr; }
namespace mce { struct ViewportInfo; }
class BuildActionIntention;
class ClientInputHandler;
class ClientMoveInputHandler;
class FontHandle;
class GuiData;
class ItemInHandRenderer;
class KeyboardManager;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class MinecraftInputHandler;
class ScreenContext;
struct AbstractScene;
struct ActorBlockRenderer;
struct ActorRenderDispatcher;
struct ActorResourceDefinitionGroup;
struct BlockActorRenderDispatcher;
struct BlockCullingGroup;
struct BlockTessellator;
struct CachedScenes;
struct CameraRegistry;
struct ClientRequirementVerifier;
struct ClientScriptManager;
struct DeferredLighting;
struct DevConsoleLogger;
struct DisconnectionRequestHandler;
struct FileDataRequest;
struct FogDefinitionRegistry;
struct FogManager;
struct FrameUpdateContext;
struct GameModuleClient;
struct GameRenderer;
struct GuidedFlowManager;
struct HitDetectSystem;
struct HudIconActorRenderer;
struct IGameConnectionListener;
struct IGameModuleApp;
struct ISettingsRegistry;
struct ITTSEventManager;
struct IUIRepository;
struct ItemRenderer;
struct LatencyGraphDisplay;
struct ListenerState;
struct MarketplaceServicesManager;
struct MinecraftGraphics;
struct MobEffectsLayout;
struct MusicManager;
struct PersonaRepository;
struct PixelCalc;
struct PlayerAuthentication;
struct PlayerReportHandler;
struct ProfanityContext;
struct ProgressHandler;
struct SceneFactory;
struct ScreenLoadTimeTracker;
struct SkinRepository;
struct SkinRepositoryClientInterface;
struct SoundEngine;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct TextToSpeechClient;
struct TrialManager;
struct WorldTransferAgent;
namespace OreUI { struct Router; }
namespace OreUI { struct SceneProvider; }
namespace OreUI { struct UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Social { struct MultiplayerServiceManager; }
namespace World { struct WorldSystem; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

class IClientInstance : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IClientInstance() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IClientInstance() /*override*/;
#endif

    virtual void onInitMinecraftGame() = 0;

    virtual void onDestroyMinecraftGame() = 0;

    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&,
        ::ClientNetworkSystem&,
        ::Timer&,
        ::Timer&,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&,
        int,
        ::IGameModuleApp&
    ) = 0;

    virtual void initSceneFactory(::std::unique_ptr<::SceneFactory>, ::std::unique_ptr<::OreUI::SceneProvider>) = 0;

    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router>) = 0;

    virtual void initGraphics() = 0;

    virtual void stop() = 0;

    virtual void teardown() = 0;

    virtual void preShutDown() = 0;

    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const&) = 0;

    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() = 0;

    virtual void onStartJoinGame(
        bool,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType,
        ::Social::MultiplayerServiceIdentifier,
        bool
    ) = 0;

    virtual void onCancelJoinGame() = 0;

    virtual void requestLeaveGameAsync() = 0;

    virtual void requestLeaveGame(bool, bool) = 0;

    virtual void stopPlayScreen() = 0;

    virtual bool isLeaveGameDone() const = 0;

    virtual void setupPlayScreenForLeaveGame() = 0;

    virtual void preCacheOutOfGameViews() = 0;

    virtual void resetPrimaryClient() = 0;

    virtual void resetGameSession() = 0;

    virtual void tick() = 0;

    virtual void frameUpdate(::FrameUpdateContext& frameUpdateContext) = 0;

    virtual bool update(bool isInWorld) = 0;

    virtual void preFrameTick() = 0;

    virtual void endFrame() = 0;

    virtual float getFrameAlpha() = 0;

    virtual void startSubClientLateJoin(
        bool,
        ::std::unique_ptr<::GameModuleClient>,
        ::std::optional<::PlayerJoinWorldTelemetryInfo>
    ) = 0;

    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult>
    setupClientGame(bool, ::std::unique_ptr<::GameModuleClient>) = 0;

    virtual ::BlockSource* getRegion() = 0;

    virtual ::LocalPlayer* getLocalPlayer() const = 0;

    virtual void setupPrimaryClientEditorManager() = 0;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const = 0;

    virtual bool isPlayerInEditor() const = 0;

    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() = 0;

    virtual ::WeakEntityRef getLocalUser() const = 0;

    virtual ::Actor* getCameraActor() const = 0;

    virtual void setCameraActor(::Actor*) = 0;

    virtual ::ListenerState const* getListenerState() const = 0;

    virtual ::Actor* getCameraTargetActor() const = 0;

    virtual void setCameraTargetActor(::Actor*) = 0;

    virtual ::WeakEntityRef getCameraEntity() const = 0;

    virtual void getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const = 0;

    virtual void setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef) = 0;

    virtual ::HitResult const& getLatestHitResult() const = 0;

    virtual bool isLeavingGame() const = 0;

    virtual bool isDestroyingGame() const = 0;

    virtual bool isShuttingDown() const = 0;

    virtual bool useLowFrequencyUIRender() const = 0;

    virtual bool isSplitScreenActive() const = 0;

    virtual bool isExitingLevel() const = 0;

    virtual bool isInBedScreen() const = 0;

    virtual bool isInDeathScreen() const = 0;

    virtual bool isKeyboardEnabled() const = 0;

    virtual bool hasCommands() const = 0;

    virtual int getSplitScreenCount() const = 0;

    virtual bool isShowingLoadingScreen() const = 0;

    virtual bool shouldDisconnectOnAppSuspended() const = 0;

    virtual bool isGamePlayTipsEnabled() const = 0;

    virtual bool isPlatformNX() const = 0;

    virtual bool isLocalSplitscreenWith(::ActorUniqueID const&) const = 0;

    virtual bool isValidCrossPlatformSkin() const = 0;

    virtual bool isCurrentSkinPlatformLocked() const = 0;

    virtual bool isSelectedSkinInitialized() const = 0;

    virtual ::SplitScreenInfo getSplitScreenInfo() const = 0;

    virtual int getCurrentMaxGUIScaleIndex() const = 0;

    virtual bool getHandlingControllerDisconnect() = 0;

    virtual void setOpenControllerDisconnectScreen(bool) = 0;

    virtual ::ClientPlayMode getClientPlayMode() const = 0;

    virtual void setClientPlayMode(::ClientPlayMode const&) = 0;

    virtual ::std::function<void()> getCreditsCallback() = 0;

    virtual void setCreditsCallback(::std::function<void()>) = 0;

    virtual void setupTransitionForCredits(::std::function<void()>) = 0;

    virtual void refreshScreenSizeData() = 0;

    virtual void onScreenSizeChanged(int, int, float) = 0;

    virtual void onGuiScaleOffsetChanged() = 0;

    virtual void onSafeZoneChanged() = 0;

    virtual bool hasDismissedNewPlayerFlow() const = 0;

    virtual void quit(::std::string const&, ::std::string const&) = 0;

    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const = 0;

    virtual ::IClientInstances& getClientInstances() const = 0;

    virtual ::World::WorldSystem& getWorldSystem() const = 0;

    virtual bool isWorldSystemReady() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    virtual ::IMinecraftEventing& getEventing() const = 0;

    virtual ::IConnectionEventing& getConnectionEventing() const = 0;

    virtual ::FontHandle getFontHandle() const = 0;

    virtual ::FontHandle getRuneFontHandle() const = 0;

    virtual ::FontHandle getUnicodeFontHandle() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const = 0;

    virtual ::IResourcePackRepository& getResourcePackRepository() const = 0;

    virtual ::ResourcePackManager& getResourcePackManager() const = 0;

    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    virtual ::PacksInfoData const& getHostSpecifiedPacks() const = 0;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const = 0;

    virtual ::SkinRepositoryClientInterface& getSkinRepositoryClientInterface() const = 0;

    virtual ::PersonaRepository& getPersonaRepository() const = 0;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() = 0;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const = 0;

    virtual bool wantToQuit() const = 0;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const = 0;

    virtual bool isPrimaryLevelMultiplayer() const = 0;

    virtual bool isAdhocEnabled() const = 0;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;

    virtual bool isMarketplaceDisabled() const = 0;

    virtual ::std::pair<::StoreErrorCodes, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const = 0;

    virtual void linkToOffer(::std::string const&, bool) = 0;

    virtual void linkToPage(::std::string const&) = 0;

    virtual void linkTo3PServerOffers(::std::string const&, ::std::string const&) = 0;

    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex) = 0;

    virtual void navigateToStoreHomeScreen() = 0;

    virtual void navigateToCoinPurchaseScreen(int, ::std::function<void(bool, int)>) = 0;

    virtual void navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const) = 0;

    virtual void navigateToDressingRoomOfferScreen(::std::string const&) = 0;

    virtual bool navigateToProfileScreen(::std::string const&, bool const) = 0;

    virtual void navigateToServersScreen(bool const) = 0;

    virtual void navigateToHowToPlayScreen(::std::string const&) = 0;

    virtual void navigateToGatheringInfoScreen(bool) = 0;

    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex) = 0;

    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const&) = 0;

    virtual void tryPushLeaveGameScreen() = 0;

    virtual void tryStartDayOneExperience() = 0;

    virtual bool isReadyToRender() const = 0;

    virtual void onDimensionChangedEvent() = 0;

    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    virtual ::std::string getTopScreenName() const = 0;

    virtual void setLeaveGameInProgressAsReadyToContinue() = 0;

    virtual void stopDestroying() = 0;

    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>>,
        ::OwnerPtr<::EntityContext>
    ) = 0;

    virtual ::PlayerAuthentication& getPlayerAuthentication() = 0;

    virtual void createPlayerAuthentication() = 0;

    virtual void createPlayerAuthentication(uint64) = 0;

    virtual ::std::string getPlatformId() const = 0;

    virtual ::std::string getPlatformOnlineId() const = 0;

    virtual bool useController() const = 0;

    virtual bool useTouchscreen() const = 0;

    virtual bool getMouseGrabbed() const = 0;

    virtual bool currentInputModeIsMouseAndKeyboard() const = 0;

    virtual bool allowPicking() const = 0;

    virtual bool isShowingMenu() const = 0;

    virtual bool isShowingPauseScreen() const = 0;

    virtual bool isShowingProgressScreen() const = 0;

    virtual bool isShowingWorldProgressScreen() const = 0;

    virtual bool isShowingRealmsProgressScreen() const = 0;

    virtual bool isShowingDeathScreen() const = 0;

    virtual bool isShowingServerForm() const = 0;

    virtual bool isScreenReplaceable() const = 0;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const = 0;

    virtual bool isWorldActive() const = 0;

    virtual bool isInRealm() = 0;

    virtual bool readyForShutdown() const = 0;

    virtual bool isPrimaryClient() const = 0;

    virtual bool isEduMode() const = 0;

    virtual bool isGamepadCursorEnabled() const = 0;

    virtual bool isInControlCustomization() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const = 0;

    virtual ::MultiPlayerLevel* getLevel() = 0;

    virtual ::MultiPlayerLevel const* getLevel() const = 0;

    virtual bool hasLevel() const = 0;

    virtual bool isPreGame() const = 0;

    virtual bool isInMultiplayerGame() const = 0;

    virtual bool isMultiPlayerClient() const = 0;

    virtual ::IOptions& getOptions() = 0;

    virtual ::IOptions const& getOptions() const = 0;

    virtual ::std::shared_ptr<::Options> getOptionsPtr() = 0;

    virtual ::std::shared_ptr<::Options const> const getOptionsPtr() const = 0;

    virtual ::std::shared_ptr<::Social::User> const& getUser() const = 0;

    virtual ::std::shared_ptr<::ISettingsRegistry> getSettingsRegistry() = 0;

    virtual ::Option const& getShowLearningPromptsOption() const = 0;

    virtual ::Option& getShowControlTipsOption() = 0;

    virtual ::Option& getShowControlTipsOverrideOption() = 0;

    virtual double getControlTipsTimeElapsed() const = 0;

    virtual void setControlTipsTimeElapsedStart() = 0;

    virtual ::GameRenderer& getGameRenderer() const = 0;

    virtual ::LevelRenderer* getLevelRenderer() const = 0;

    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() = 0;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() = 0;

    virtual ::LightTexture* getLightTexture() = 0;

    virtual void setupLevelRendering(::MultiPlayerLevel&, ::WeakEntityRef) = 0;

    virtual ::mce::ViewportInfo const& getViewportInfo() const = 0;

    virtual void setViewportInfo(::mce::ViewportInfo const&) = 0;

    virtual ::Vec2 getNormalizedViewportSize() const = 0;

    virtual void updateChunkRadius() = 0;

    virtual void setUITexture(::mce::Texture*) = 0;

    virtual ::mce::Texture* getUITexture() = 0;

    virtual void setLevelTexture(::mce::Texture*) = 0;

    virtual ::mce::Texture* getLevelTexture() = 0;

    virtual void setUICursorTexture(::mce::TexturePtr) = 0;

    virtual ::mce::TexturePtr getUICursorTexture() const = 0;

    virtual ::mce::Camera& getCamera() = 0;

    virtual ::ShaderColor& getShaderColor() = 0;

    virtual ::ShaderColor& getDarkShaderColor() = 0;

    virtual void clearGraphicsCache() = 0;

    virtual void getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float) = 0;

    virtual bool shouldRenderUICursor() const = 0;

    virtual bool getRenderPlayerModel() const = 0;

    virtual ::DeferredLighting& getDeferredLighting() = 0;

    virtual float getGuiScale() const = 0;

    virtual ::Option const& getGuiScaleOption() const = 0;

    virtual int getGuiScaleOffset() const = 0;

    virtual void setGuiScaleOffset(int) = 0;

    virtual void renderImGui(::ScreenContext&, bool) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const = 0;

    virtual ::GuidedFlowManager& getGuidedFlowManager() = 0;

    virtual ::PixelCalc const& getDpadScale() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const = 0;

    virtual void addOverrideHoursToDateTime(uint const) = 0;

    virtual ::ToastManager& getToastManager() = 0;

    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() = 0;

    virtual ::AbstractScene* getTopScene() = 0;

    virtual ::AbstractScene const* getTopScene() const = 0;

    virtual ::AbstractScene* getActiveScene() = 0;

    virtual ::AbstractScene const* getActiveScene() const = 0;

    virtual ::SceneFactory& getSceneFactory() const = 0;

    virtual ::OreUI::SceneProvider& getSceneProvider() const = 0;

    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const = 0;

    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getClientSceneStack() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getClientSceneStack() = 0;

    virtual ::OreUI::Router& getClientUIRouter() const = 0;

    virtual ::ISceneStack& getMainSceneStackInterface() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getCurrentSceneStack() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack() = 0;

    virtual ::OreUI::Router& getCurrentUIRouter() = 0;

    virtual ::OreUI::Router const& getCurrentUIRouter() const = 0;

    virtual ::OreUI::ITelemetry& getOreUITelemetry() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>
    prepareSceneFor(::ui::SceneType const, ::std::function<::std::shared_ptr<::AbstractScene>()>) = 0;

    virtual ::CachedScenes& getCachedScenes() = 0;

    virtual ::std::string getScreenName() const = 0;

    virtual ::std::string getScreenTelemetry() const = 0;

    virtual ::ui::SceneType getTopSceneType() const = 0;

    virtual ::MobEffectsLayout& getMobEffectsLayout() = 0;

    virtual ::std::string emoticonifyText(::std::string const&) const = 0;

    virtual ::std::string emoticonifyText(::std::string const&, bool) = 0;

    virtual void onMobEffectsChange() = 0;

    virtual void setUISizeAndScale(int, int, float) = 0;

    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)>) = 0;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)>, bool) = 0;

    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)>, bool) const = 0;

    virtual bool updateSceneStack() = 0;

    virtual void forEachAlwaysAcceptInputScreen(::std::function<void(::AbstractScene&)>, ::AbstractScene const*) = 0;

    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)>) = 0;

    virtual void showPlayerProfile(::std::string const&, ::std::string const&) = 0;

    virtual bool isInGameInputEnabled() const = 0;

    virtual void setInGameInputEnabled(bool) = 0;

    virtual ::Vec2 getSafeZoneScale() const = 0;

    virtual void verifySkinApproval(
        ::std::string const&,
        ::std::function<void(::std::string)> const&,
        ::std::function<void()> const&
    ) const = 0;

    virtual ::InputMode getCurrentInputMode() const = 0;

    virtual bool isTouchGameplayAllowed() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const = 0;

    virtual ::KeyboardManager& getKeyboardManager() = 0;

    virtual void setLastPointerLocation(float, float, float) = 0;

    virtual ::Vec3 getLastPointerLocation() = 0;

    virtual void clearTouchPointerLocations() = 0;

    virtual void clearTouchPointerLocation(int) = 0;

    virtual void updateControlOptionState(uint, bool) = 0;

    virtual void clearActiveControlOptions() = 0;

    virtual ::std::set<uint> const& getActiveControlOptions() const = 0;

    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType) const = 0;

    virtual void setNumberOfActiveConfigs(int) = 0;

    virtual int getNumberOfActiveConfigs() const = 0;

    virtual bool isNoConfigSelected() const = 0;

    virtual void setNumberOfEnabledConfigs(int) = 0;

    virtual int getNumberOfEnabledConfigs() const = 0;

    virtual void setWYSIWYGState(::WYSIWYGState) = 0;

    virtual ::WYSIWYGState getWYSIWYGState() const = 0;

    virtual void setOtherConfigsExistInThisCategory(bool) = 0;

    virtual bool getOtherConfigsExistInThisCategory() const = 0;

    virtual void updateTouchPointerLocation(int, float, float) = 0;

    virtual ::Vec2 getTouchPointerLocation(int) const = 0;

    virtual void updateActionPointerId(int) = 0;

    virtual int getActionPointerId() const = 0;

    virtual bool shouldUseLastPointerLocationOnFocusChange() = 0;

    virtual bool currentScreenShouldStealMouse() = 0;

    virtual ::BuildActionIntention& getInProgressBAI() const = 0;

    virtual ::PacketSender& getPacketSender() = 0;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() = 0;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const = 0;

    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler>) = 0;

    virtual void setupPersistentControls(::InputMode) = 0;

    virtual void resetPlayerMovement() = 0;

    virtual void suspendPredictedMovement() = 0;

    virtual void onClientInputInitComplete() = 0;

    virtual ::glm::vec2 getGamepadCursorPosition() const = 0;

    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler>) = 0;

    virtual ::ClientInputHandler* getInput() const = 0;

    virtual int getControllerId() const = 0;

    virtual bool hasConnectedController() const = 0;

    virtual ::SubClientId getClientSubId() const = 0;

    virtual void setSuspendInput(bool) = 0;

    virtual void setSuspendDirectionalInput(bool) = 0;

    virtual void setDisableInput(bool) = 0;

    virtual void grabMouse() = 0;

    virtual void releaseMouse() = 0;

    virtual void refocusMouse(bool) = 0;

    virtual void setMouseType(::ui::MousePointerType) = 0;

    virtual void resetBai(int) = 0;

    virtual void clearInProgressBAI() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const = 0;

    virtual ::MusicManager const* getMusicManager() const = 0;

    virtual ::MusicManager* getMusicManagerNonConst() const = 0;

    virtual void play(::std::string const&, ::Vec3 const&, float, float) = 0;

    virtual void playUI(::std::string const&, float, float) = 0;

    virtual void muteAudio() = 0;

    virtual void unMuteAudio() = 0;

    virtual void fadeOutMusic() const = 0;

    virtual ::TaskGroup& getTaskGroup() = 0;

    virtual void onFullVanillaPackOnStack() = 0;

    virtual bool isFullVanillaPackOnStack() const = 0;

    virtual void onPlayerLoaded(::Player&) = 0;

    virtual void setClientGameMode(::GameType) = 0;

    virtual void resetToDefaultGameMode() = 0;

    virtual ::IGameConnectionListener& getGameConnectionListener() = 0;

    virtual void connectToThirdPartyServer(::std::string const&, int) = 0;

    virtual void connectToExperience(
        ::std::string const&,
        ::std::function<void(::std::unique_ptr<::ProgressHandler>, bool)>,
        ::std::function<void(::World::JoinServerWorldResult)>
    ) = 0;

    virtual void startExternalNetworkWorld(::Social::GameConnectionInfo, ::std::string const&, bool) = 0;

    virtual bool isReadyToReconnect() const = 0;

    virtual bool checkForPiracy() = 0;

    virtual void updateChatFilterStatus(::ProfanityContext&) = 0;

    virtual void updateControllerHandling() = 0;

    virtual void setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)>) = 0;

    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus) = 0;

    virtual void setConnectGamepadScreenActive(bool) = 0;

    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions&) = 0;

    virtual ::Core::PathBuffer<::std::string> requestScreenshotAndCreateEncryptedChecksumFile(::ScreenshotOptions&) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const = 0;

    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)>
    ) = 0;

    virtual void initializeRenderResources() = 0;

    virtual void postInitRenderResources() = 0;

    virtual void onAppSuspended() = 0;

    virtual void onAppSuspensionDisconnect() = 0;

    virtual void onAppResumed() = 0;

    virtual void onActiveResourcePacksChanged(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) = 0;

    virtual void reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&);

    virtual ::BlockTessellator& getBlockTessellator() = 0;

    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() = 0;

    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() = 0;

    virtual ::ActorBlockRenderer& getEntityBlockRenderer() = 0;

    virtual ::ItemInHandRenderer* getItemInHandRenderer() = 0;

    virtual ::ItemRenderer* getItemRenderer() = 0;

    virtual ::HudIconActorRenderer* getHudIconActorRenderer() = 0;

    virtual ::std::deque<::std::string>& getSentMessageHistory() = 0;

    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const = 0;

    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient>) = 0;

    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() = 0;

    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const = 0;

    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() = 0;

    virtual void
    addTTSMessage(::std::string const&, ::ProfanityFilterContext, bool, ::std::string const&, bool, bool) = 0;

    virtual void initCommands() = 0;

    virtual uint getUserId() const = 0;

    virtual bool isPrimaryUser() const = 0;

    virtual double getServerConnectionTime() const = 0;

    virtual void setServerPingTime(int) = 0;

    virtual int getServerPingTime() const = 0;

    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab) = 0;

    virtual void setClientInstanceState(::ClientInstanceState const&) = 0;

    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&&) = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() = 0;

    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() = 0;

    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() = 0;

    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() = 0;

    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point) = 0;

    virtual ::GameModuleClient* getGameModule() = 0;

    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() = 0;

    virtual ::GameCallbacks& getGameCallbacks() = 0;

    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea>) = 0;

    virtual void sendClientEnteredLevel() = 0;

    virtual ::HitDetectSystem* getHitDetectSystem() = 0;

    virtual bool isPlaying() const = 0;

    virtual ::ClientInstanceState getClientInstanceState() const = 0;

    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const = 0;

    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const = 0;

    virtual ::cg::math::Rect<float>
    calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const = 0;

    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() = 0;

    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() = 0;

    virtual ::ItemRegistryRef getItemRegistry() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const = 0;

    virtual float getRemoteServerTimeMs() const = 0;

    virtual void setRemoteServerTimeMs(float) = 0;

    virtual float getRemoteServerNetworkTimeMs() const = 0;

    virtual void setRemoteServerNetworkTimeMs(float) = 0;

    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() = 0;

    virtual ::Scripting::ScriptEngine* getScriptingEngine() = 0;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() = 0;

    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason) = 0;

    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const&) = 0;

    virtual void disconnectSubClient(::Connection::DisconnectFailReason) = 0;

    virtual void setClientUpdateAndRenderThrottling(bool, int, float) = 0;

    virtual bool isClientUpdateAndRenderThrottlingEnabled() const = 0;

    virtual int getClientUpdateAndRenderThrottlingThreshold() const = 0;

    virtual float getClientUpdateAndRenderThrottlingScalar() const = 0;

    virtual bool isUserBanned() const = 0;

    virtual void setupPauseManagers() = 0;

    virtual bool isEligibleForPauseFeature() const = 0;

    virtual bool requestInGamePause(bool status) = 0;

    virtual void openContentLogHistory() = 0;

    virtual double getGameUpdateDurationInSeconds() const = 0;

    virtual ::std::optional<::PlayerJoinWorldTelemetryInfo> getPlayerJoinWorldTelemetryInfo() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
