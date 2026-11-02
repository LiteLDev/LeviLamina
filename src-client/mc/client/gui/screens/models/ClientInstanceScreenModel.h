#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/util/ChatMessageRestrictions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/util/HudElement.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockEventListener;
class BlockPos;
class BlockSource;
class BookScreenManager;
class CommandOrigin;
class GuiMessage;
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
    MCNAPI void addPhotoToPortfolio(::std::string const& photoName, ::std::string const& newPhotoName);

    MCNAPI bool canAttachBalloonToBlock(::BlockPos const& blockPos) const;

    MCNAPI bool canAttachLeashedActorsToBlock(::BlockPos const& blockPos) const;

    MCNAPI bool canCollectFromCauldron(::BlockPos const& blockPos) const;

    MCNAPI bool canEmptyIntoCauldron(::BlockPos const& blockPos) const;

    MCNAPI bool canHangItemFrame(::ItemStack const& heldItemInstance, uchar face, ::BlockPos blockPos) const;

    MCNAPI bool canPlaceCamera(::ItemStack const& camera, ::BlockPos const& blockPos, uchar facing) const;

    MCNAPI bool canPlaceChalkboard(::ItemStack const& chalkboard, ::BlockPos const& blockPos, uchar facing) const;

    MCNAPI bool canPlaceHeldBlock() const;

    MCNAPI bool canPlaceHeldItem() const;

    MCNAPI bool canPlaceWaterlily() const;

    MCNAPI bool canTipArrows(::BlockPos const& blockPos) const;

    MCNAPI bool canUseReed() const;

    MCNAPI bool canUseSeed() const;

    MCNAPI void clearTitleMessages();

    MCNAPI void consumeNewScreenModal(::ModalScreenData& outModalScreenData) const;

    MCNAPI ::std::unique_ptr<::BookScreenManager> createBookScreenManager(int bookSlot, ::BlockActor* lectern);

    MCNAPI ::std::unique_ptr<::MinecartCommandBlockManager>
    createCommandBlockManager(bool isMinecart, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCNAPI void createPhotoItem(::PhotoRecord const& record);

    MCNAPI ::std::unique_ptr<::PortfolioScreenManager> createPortfolioScreenManager();

    MCNAPI void displaySubtitleMessage(::std::string const& message, ::SoundDirection direction, bool isLocalPlayer);

    MCNAPI void displaySystemMessage(
        ::std::string const&     message,
        ::std::string const&     ttsMessage,
        ::ProfanityFilterContext profanityFilterContext
    );

    MCNAPI bool endPortalFrameBlockHasEye(::BlockPos const& blockPos) const;

    MCNAPI bool exportStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCNAPI bool findStructure(::StructureEditorData& structureData);

    MCNAPI bool forceAllowEating() const;

    MCAPI ::Block const& getBlockAt(::BlockPos const& blockPos) const;

    MCNAPI ::BlockActor* getBlockEntity(::BlockPos const& pos, ::BlockActorType blockEntityType);

    MCNAPI ::mce::Color getBossBarColor(int index) const;

    MCNAPI float getBossHealthPercentage(int index) const;

    MCNAPI ::Bedrock::Safety::RedactableString getBossName(int index) const;

    MCNAPI ::ChalkboardSize getChalkboardType(::BlockPos const& pos);

    MCNAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> getDevConsoleCommandOrigin() const;

    MCNAPI ::glm::vec2 getEditorChatOffset() const;

    MCNAPI ::std::vector<::GuiMessage>& getGuiMessageList();

    MCNAPI ::std::string getInteractionText() const;

    MCNAPI int getItemNameOffset(bool showClassicUI, bool showSurvivalUI, bool showLocatorBar) const;

    MCNAPI ::std::string const& getLastChatMessage();

    MCNAPI ::std::string const getLastFilteredChatMessage();

    MCNAPI ::Block const& getLiquidBlockAt(::BlockPos const& blockPos) const;

    MCNAPI int getNumberOfDaysPlayed() const;

    MCNAPI ::ItemStack const& getOffhandSlot() const;

    MCNAPI int getPlayerArmorValue() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> getPlayerCommandOrigin() const;

    MCNAPI float getPlayerExp();

    MCNAPI int getPlayerLevel();

    MCNAPI ::Vec3 getPlayerPosition() const;

    MCAPI ::BlockSource* getPlayerRegion() const;

    MCNAPI ::std::vector<::GuiMessage> getPreexistingChatMessages();

    MCAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCNAPI ::ItemStack const& getSelectedItem() const;

    MCNAPI int getStackSplittingTrigger() const;

    MCNAPI ::std::string const& getStoreName() const;

    MCNAPI ::std::vector<::GuiMessage>& getSubtitleList();

    MCNAPI ::Bedrock::Threading::Async<::ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const& playerId, ::std::string const& platformOnlineID) const;

    MCNAPI ::TitleMessage const& getTitleMessage() const;

    MCNAPI float getXToScreenRatio(float x) const;

    MCNAPI float getYToScreenRatio(float y) const;

    MCNAPI bool hasNewScreenModal() const;

    MCNAPI ::StructureTemplate* importStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCNAPI void initiateGLBFileSave(
        ::std::string const&        defaultName,
        ::Core::Path const&         originPath,
        ::std::function<void(bool)> onComplete
    );

    MCNAPI ::std::shared_ptr<::MinecraftglTFExporter> initiateStructureModelExport(
        ::BlockPos const&            position,
        ::StructureEditorData const& structureEditorData,
        ::std::function<void(bool)>  onFileReady
    );

    MCNAPI void insertStructureBlockRequest(::std::string const& structureName, ::StructureTemplate const& temp);

    MCNAPI bool isBossProperlyRegistered(int index) const;

    MCNAPI bool isChatMute() const;

    MCNAPI bool isDimensionReady() const;

    MCNAPI bool const isHudElementVisible(::HudElement hudElement) const;

    MCNAPI bool isInteracting() const;

    MCNAPI bool isPlayerHungry() const;

    MCNAPI bool isPlayerOnGround() const;

    MCNAPI bool isRemoteProfanityFilterEnabled() const;

    MCNAPI bool isTextToSpeechEnabled() const;

    MCNAPI bool isTouchPressed() const;

    MCNAPI bool isUsingItem() const;

    MCNAPI bool itemFrameFilled(::BlockPos const& blockPos) const;

    MCNAPI void loadMode(::BlockPos const& pos, ::StructureBlockActor* act);

    MCNAPI void makeStructureBlockRequest(
        ::std::string const&                structureName,
        ::BlockPos const&                   structureBlockPosition,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation exportOperation
    );

    MCNAPI bool mayEditChalkboard(::BlockPos const& blockPos) const;

    MCNAPI void navigateToImmersiveReaderScreen(::std::string readerText);

    MCNAPI void navigateToLeaveLevelScreen(bool switchScreen);

    MCNAPI void navigateToModalScreen(::ModalScreenData const& modalScreenData);

    MCNAPI void navigateToServerStoreScreen();

    MCNAPI void queryBossInfo() const;

    MCNAPI void registerBlockEventListener(::BlockEventListener& listener);

    MCNAPI void registerClientPlayerEventCoordinatorListener(::PlayerEventListener& listener);

    MCNAPI void registerNpcEventListener(::NpcEventListener& listener);

    MCNAPI void requestClipboardData(::std::function<void(::std::string const&)> callback) const;

    MCNAPI void requestDisconnectPlayer(::std::string const& userName);

    MCNAPI void resetCanTakeScreenshot();

    MCNAPI void sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCNAPI ::ChatMessageRestrictions sendChatMessage(::std::string const& message);

    MCNAPI void sendCommandBlockUpdatePacket(::ActorUniqueID const& entityId);

    MCNAPI void sendCommandBlockUpdatePacket(::BlockPos const& pos);

    MCNAPI void sendStructureBlockUpdatePacket(
        ::BlockPos const&            pos,
        ::StructureEditorData const& structureEditorData,
        bool                         trigger
    );

    MCNAPI void setClipboardToPosition(::Vec3 const& pos);

    MCNAPI void setClipboardToPosition(::BlockPos const& pos);

    MCNAPI void setCoordinateCaptureType(::CoordinateCaptureType coordinateCaptureType);

    MCNAPI void setMenuPointerPressed(bool pressed);

    MCNAPI void setMuteChat(bool isMuted);

    MCNAPI void setPauseIntent(bool intent);

    MCNAPI bool shouldDisplayDaysPlayed() const;

    MCNAPI bool shouldDisplayPlayerPosition() const;

    MCNAPI bool shouldShowChatInEditor() const;

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(::std::function<void(bool, bool)> callback);

    MCNAPI bool thirdPartyGamerpicAllowed(::mce::UUID const& playerId) const;

    MCNAPI void toggleChatMute();

    MCNAPI bool tryBroadcastGlobalPause(bool status);

    MCNAPI bool tryGetAgentPosition(::BlockPos& result) const;

    MCNAPI void unregisterNpcEventListener(::NpcEventListener& listener);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
