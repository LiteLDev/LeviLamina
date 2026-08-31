#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/util/ChatMessageRestrictions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/util/HudElement.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockEventListener;
class BlockPos;
class BlockSource;
class BookScreenManager;
class BoundingBox;
class CommandOrigin;
class GuiMessage;
class HudContainerManagerController;
class ItemStack;
class MinecartCommandBlockManager;
class MinecraftglTFExporter;
class NpcEventListener;
class PlayerEventListener;
class PortfolioScreenManager;
class RectangleArea;
class ResourceLocation;
class StructureBlockActor;
class StructureEditorData;
class StructureSettings;
class StructureTemplate;
class TitleMessage;
class Vec3;
struct BossInfo;
struct ModalScreenData;
struct PhotoRecord;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::Safety { class RedactableString; }
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ClientInstanceScreenModel : public ::MinecraftScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::BossInfo>> mBossInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceScreenModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addPhotoToPortfolio(::std::string const& photoName, ::std::string const& newPhotoName);

    MCAPI void addToDevConsoleMessageHistory(::std::string const& message);

    MCAPI void addToSentMessageHistory(::std::string const& message);

    MCAPI void calculatePlacePos(uchar& face, ::BlockPos& pos) const;

    MCAPI bool canAttachBalloonToBlock(::BlockPos const& blockPos) const;

    MCAPI bool canAttachLeashedActorsToBlock(::BlockPos const& blockPos) const;

    MCAPI bool canCollectFromCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canDrinkMedicine(::ItemStack const& medicine) const;

    MCAPI bool canEmptyIntoCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canHangItemFrame(::ItemStack const& heldItemInstance, uchar face, ::BlockPos blockPos) const;

    MCAPI bool canPlaceCamera(::ItemStack const& camera, ::BlockPos const& blockPos, uchar facing) const;

    MCAPI bool canPlaceChalkboard(::ItemStack const& chalkboard, ::BlockPos const& blockPos, uchar facing) const;

    MCAPI bool canPlaceHeldBlock() const;

    MCAPI bool canPlaceHeldItem() const;

    MCAPI bool canPlaceWaterlily() const;

    MCAPI bool canTipArrows(::BlockPos const& blockPos) const;

    MCAPI bool canUseReed() const;

    MCAPI bool canUseSeed() const;

    MCAPI void clearInvalidDownKeys();

    MCAPI void clearTitleMessages();

    MCAPI void consumeNewScreenModal(::ModalScreenData& outModalScreenData) const;

    MCAPI ::std::unique_ptr<::BookScreenManager> createBookScreenManager(int bookSlot, ::BlockActor* lectern);

    MCAPI ::std::unique_ptr<::MinecartCommandBlockManager>
    createCommandBlockManager(bool isMinecart, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCAPI ::std::shared_ptr<::HudContainerManagerController> createHudContainerManagerController();

    MCAPI void createPhotoItem(::PhotoRecord const& record);

    MCAPI ::std::unique_ptr<::PortfolioScreenManager> createPortfolioScreenManager();

    MCAPI ::BoundingBox detectStructureBlockCorners(::BlockPos const& pos);

    MCAPI void displaySubtitleMessage(::std::string const& message, ::SoundDirection direction, bool isLocalPlayer);

    MCAPI void displaySystemMessage(
        ::std::string const&     message,
        ::std::string const&     ttsMessage,
        ::ProfanityFilterContext profanityFilterContext
    );

    MCAPI float distanceSqrFromPlayerToBlockCenter(::Vec3 const& pos);

    MCAPI bool doOtherConfigsExistInThisCategory() const;

    MCAPI bool endPortalFrameBlockHasEye(::BlockPos const& blockPos) const;

    MCAPI bool exportStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCAPI bool findStructure(::StructureEditorData& structureData);

    MCAPI bool forceAllowEating() const;

    MCAPI ::Block const& getBlockAt(::BlockPos const& blockPos) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const& pos, ::BlockActorType blockEntityType);

    MCAPI ::mce::Color getBossBarColor(int index) const;

    MCAPI float getBossHealthPercentage(int index) const;

    MCAPI ::Bedrock::Safety::RedactableString getBossName(int index) const;

    MCAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> getDevConsoleCommandOrigin() const;

    MCAPI ::std::vector<::GuiMessage>& getGuiMessageList();

    MCAPI ::std::string getInteractionText() const;

    MCAPI int getItemNameOffset(bool showClassicUI, bool showSurvivalUI, bool showLocatorBar) const;

    MCAPI ::std::string const& getLastChatMessage();

    MCAPI ::std::string const getLastFilteredChatMessage();

    MCAPI ::Block const& getLiquidBlockAt(::BlockPos const& blockPos) const;

    MCAPI ::Bedrock::Threading::Async<::ResourceLocation> getLocalThirdPartyGamerpic() const;

    MCAPI int getNumberOfActiveConfigs() const;

    MCAPI int getNumberOfDaysPlayed() const;

    MCAPI ::ItemStack const& getOffhandSlot() const;

    MCAPI int getPlayerArmorValue() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> getPlayerCommandOrigin() const;

    MCAPI float getPlayerExp();

    MCAPI int getPlayerLevel();

    MCAPI ::Vec3 getPlayerPosition() const;

    MCAPI ::BlockSource* getPlayerRegion() const;

    MCAPI ::std::vector<::GuiMessage> getPreexistingChatMessages();

    MCAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI ::std::string const& getStoreName() const;

    MCAPI ::std::vector<::GuiMessage>& getSubtitleList();

    MCAPI ::Bedrock::Threading::Async<::ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const& playerId, ::std::string const& platformOnlineID) const;

    MCAPI ::TitleMessage const& getTitleMessage() const;

    MCAPI ::WYSIWYGState getWYSIWYGState() const;

    MCAPI float getXToScreenRatio(float x) const;

    MCAPI float getYToScreenRatio(float y) const;

    MCAPI void handleQuitButtonPress();

    MCAPI bool hasNewScreenModal() const;

    MCAPI bool hasPlayerSleepFlagSet() const;

    MCAPI ::StructureTemplate* importStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCAPI void initiateGLBFileSave(
        ::std::string const&        defaultName,
        ::Core::Path const&         originPath,
        ::std::function<void(bool)> onComplete
    );

    MCAPI ::std::shared_ptr<::MinecraftglTFExporter> initiateStructureModelExport(
        ::BlockPos const&            position,
        ::StructureEditorData const& structureEditorData,
        ::std::function<void(bool)>  onFileReady
    );

    MCAPI void insertStructureBlockRequest(::std::string const& structureName, ::StructureTemplate const& temp);

    MCAPI bool isBossProperlyRegistered(int index) const;

    MCFOLD bool isChatMute() const;

    MCAPI bool isDimensionReady() const;

    MCAPI bool isEmoteChatMute() const;

    MCAPI bool const isHudElementVisible(::HudElement hudElement) const;

    MCAPI bool isInteracting() const;

    MCAPI bool isNoConfigSelected() const;

    MCAPI bool isPlayerHungry() const;

    MCAPI bool isPlayerInWater() const;

    MCAPI bool isPlayerOnGround() const;

    MCAPI bool isPlayerRidingActorType(::ActorType type) const;

    MCAPI bool isRemoteProfanityFilterEnabled() const;

    MCAPI bool isTextToSpeechEnabled() const;

    MCAPI bool isTouchPressed() const;

    MCAPI bool isUsingItem() const;

    MCAPI bool itemFrameFilled(::BlockPos const& blockPos) const;

    MCAPI void loadMode(::BlockPos const& pos, ::StructureBlockActor* act);

    MCAPI void makeStructureBlockRequest(
        ::std::string const&                structureName,
        ::BlockPos const&                   structureBlockPosition,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation exportOperation
    );

    MCAPI bool mayEditChalkboard(::BlockPos const& blockPos) const;

    MCAPI void navigateToImmersiveReaderScreen(::std::string readerText);

    MCAPI void navigateToLeaveLevelScreen(bool switchScreen);

    MCAPI void navigateToModalScreen(::ModalScreenData const& modalScreenData);

    MCAPI void navigateToServerStoreScreen();

    MCAPI void queryBossInfo() const;

    MCAPI void registerBlockEventListener(::BlockEventListener& listener);

    MCAPI void registerClientPlayerEventCoordinatorListener(::PlayerEventListener& listener);

    MCAPI void registerNpcEventListener(::NpcEventListener& listener);

    MCAPI void requestClipboardData(::std::function<void(::std::string const&)> callback) const;

    MCAPI void requestDisconnectPlayer(::std::string const& userName);

    MCAPI void resetCanTakeScreenshot();

    MCAPI void sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCAPI ::ChatMessageRestrictions sendChatMessage(::std::string const& message);

    MCAPI void sendCommandBlockUpdatePacket(::ActorUniqueID const& entityId);

    MCAPI void sendCommandBlockUpdatePacket(::BlockPos const& pos);

    MCAPI void sendRespawnRequest() const;

    MCAPI void sendStructureBlockUpdatePacket(
        ::BlockPos const&            pos,
        ::StructureEditorData const& structureEditorData,
        bool                         trigger
    );

    MCAPI void setClipboardToPosition(::Vec3 const& pos);

    MCAPI void setClipboardToPosition(::BlockPos const& pos);

    MCAPI void setCoordinateCaptureType(::CoordinateCaptureType coordinateCaptureType);

    MCAPI void setMenuPointerPressed(bool pressed);

    MCAPI void setMuteChat(bool isMuted);

    MCAPI void setPauseIntent(bool intent);

    MCAPI bool shouldDisplayDaysPlayed() const;

    MCAPI bool shouldDisplayPlayerPosition() const;

    MCAPI void splitVibrate(int milliSeconds);

    MCAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(::std::function<void(bool, bool)> callback);

    MCAPI bool thirdPartyGamerpicAllowed(::mce::UUID const& playerId) const;

    MCAPI void toggleChatMute();

    MCAPI void toggleEmoteChatMute();

    MCAPI bool tryBroadcastGlobalPause(bool status);

    MCAPI bool tryGetAgentPosition(::BlockPos& result) const;

    MCAPI void unregisterBlockEventListener(::BlockEventListener& listener);

    MCAPI void unregisterClientPlayerEventCoordinatorListener(::PlayerEventListener& listener);

    MCAPI void unregisterNpcEventListener(::NpcEventListener& listener);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
