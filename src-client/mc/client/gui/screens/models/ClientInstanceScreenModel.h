#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/gui/screens/models/ChatMessageRestrictions.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/util/HudElement.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BookScreenManager;
class ItemStack;
class MinecartCommandBlockManager;
class NpcEventListener;
class ResourceLocation;
class StructureEditorData;
class StructureSettings;
class StructureTemplate;
class Vec3;
struct ActorUniqueID;
struct BossInfo;
struct GuiMessage;
struct MinecraftglTFExporter;
struct PhotoRecord;
struct TitleMessage;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ClientInstanceScreenModel : public ::MinecraftScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::BossInfo>> mBossInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceScreenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientInstanceScreenModel(::MinecraftScreenModel::Context context);

    MCAPI void addPhotoToPortfolio(::std::string const& photoName, ::std::string const& newPhotoName);

    MCAPI bool canCollectFromCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canEmptyIntoCauldron(::BlockPos const& blockPos) const;

    MCAPI bool canPlaceHeldBlock() const;

    MCAPI bool canPlaceHeldItem() const;

    MCAPI bool canPlaceWaterlily() const;

    MCAPI bool canTipArrows(::BlockPos const& blockPos) const;

    MCAPI bool canUseReed() const;

    MCAPI bool canUseSeed() const;

    MCAPI void clearTitleMessages();

    MCAPI ::std::unique_ptr<::BookScreenManager> createBookScreenManager(int bookSlot, ::BlockActor* lectern);

    MCAPI ::std::unique_ptr<::MinecartCommandBlockManager>
    createCommandBlockManager(bool isMinecart, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCAPI void createPhotoItem(::PhotoRecord const& record);

    MCAPI void displaySystemMessage(
        ::std::string const&     message,
        ::std::string const&     ttsMessage,
        ::ProfanityFilterContext profanityFilterContext
    );

    MCAPI float distanceSqrFromPlayerToBlockCenter(::Vec3 const& pos);

    MCAPI ::ChatMessageRestrictions executeCommand(::std::string const& commandLine);

    MCAPI bool exportStructureBlock(::std::string const& structureName, ::Core::Path const& filePath);

    MCAPI bool findStructure(::StructureEditorData& structureData);

    MCAPI bool forceAllowEating() const;

    MCAPI ::Block const& getBlockAt(::BlockPos const& blockPos) const;

    MCAPI ::BlockActor* getBlockEntity(::BlockPos const& pos, ::BlockActorType blockEntityType);

    MCAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCAPI ::std::vector<::GuiMessage>& getGuiMessageList();

    MCAPI ::std::string getInteractionText() const;

    MCAPI int getItemNameOffset(bool showClassicUI, bool showSurvivalUI, bool showLocatorBar) const;

    MCAPI ::std::string const getLastFilteredChatMessage();

    MCAPI int getNumberOfDaysPlayed() const;

    MCAPI ::ItemStack const& getOffhandSlot() const;

    MCAPI int getPlayerArmorValue() const;

    MCAPI int getPlayerLevel();

    MCAPI ::Vec3 getPlayerPosition() const;

    MCAPI ::BlockSource* getPlayerRegion() const;

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI ::Bedrock::Threading::Async<::ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const& playerId, ::std::string const& platformOnlineID) const;

    MCAPI ::TitleMessage const& getTitleMessage() const;

    MCAPI float getXToScreenRatio(float x) const;

    MCAPI float getYToScreenRatio(float y) const;

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

    MCAPI bool isBossProperlyRegistered(int index) const;

    MCAPI bool isChatMute() const;

    MCAPI bool isDimensionReady() const;

    MCAPI bool const isHudElementVisible(::HudElement hudElement) const;

    MCAPI bool isInteracting() const;

    MCAPI bool isPlayerFlying() const;

    MCAPI bool isPlayerHungry() const;

    MCAPI bool isRemoteProfanityFilterEnabled() const;

    MCAPI bool isTouchPressed() const;

    MCAPI bool itemFrameFilled(::BlockPos const& blockPos) const;

    MCAPI void makeStructureBlockRequest(
        ::std::string const&                structureName,
        ::BlockPos const&                   structureBlockPosition,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation exportOperation
    );

    MCAPI void navigateToImmersiveReaderScreen(::std::string readerText);

    MCAPI void navigateToLeaveLevelScreen(bool switchScreen);

    MCAPI void navigateToServerStoreScreen();

    MCAPI void queryBossInfo() const;

    MCAPI void registerNpcEventListener(::NpcEventListener& listener);

    MCAPI void requestDisconnectPlayer(::std::string const& userName);

    MCAPI void resetCanTakeScreenshot();

    MCAPI void sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCAPI ::ChatMessageRestrictions sendChatMessage(::std::string const& message);

    MCAPI void sendCommandBlockUpdatePacket(::ActorUniqueID const& entityId);

    MCAPI void sendCommandBlockUpdatePacket(::BlockPos const& pos);

    MCAPI void sendRespawnRequest() const;

    MCAPI void setMenuPointerPressed(bool pressed);

    MCAPI bool shouldDisplayDaysPlayed() const;

    MCAPI bool shouldDisplayPlayerPosition() const;

    MCAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(::std::function<void(bool, bool)> callback);

    MCAPI bool thirdPartyGamerpicAllowed(::mce::UUID const& playerId) const;

    MCAPI void toggleChatMute();

    MCAPI bool tryBroadcastGlobalPause(bool status);

    MCAPI bool tryGetAgentPosition(::BlockPos& result) const;

    MCAPI void unregisterNpcEventListener(::NpcEventListener& listener);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
