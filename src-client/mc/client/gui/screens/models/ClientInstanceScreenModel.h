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
class BlockActor;
class BlockPos;
class BlockSource;
class CommandOrigin;
class ItemStack;
class NpcEventListener;
class ResourceLocation;
class StructureEditorData;
class StructureSettings;
class StructureTemplate;
class Vec3;
struct ActorUniqueID;
struct GuiMessage;
struct MinecartCommandBlockManager;
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
    ::ll::UntypedStorage<8, 64> mUnk9dc14b;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceScreenModel& operator=(ClientInstanceScreenModel const&);
    ClientInstanceScreenModel(ClientInstanceScreenModel const&);
    ClientInstanceScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstanceScreenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstanceScreenModel(::MinecraftScreenModel::Context context);

    MCNAPI void addPhotoToPortfolio(::std::string const& photoName, ::std::string const& newPhotoName);

    MCNAPI bool canCollectFromCauldron(::BlockPos const& blockPos) const;

    MCNAPI bool canEmptyIntoCauldron(::BlockPos const& blockPos) const;

    MCNAPI bool canPlaceHeldBlock() const;

    MCNAPI bool canPlaceHeldItem() const;

    MCNAPI bool canPlaceWaterlily() const;

    MCNAPI bool canTipArrows(::BlockPos const& blockPos) const;

    MCNAPI bool canUseReed() const;

    MCNAPI bool canUseSeed() const;

    MCNAPI void clearTitleMessages();

    MCNAPI ::std::unique_ptr<::MinecartCommandBlockManager>
    createCommandBlockManager(bool isMinecart, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCNAPI void createPhotoItem(::PhotoRecord const& record);

    MCNAPI void displaySystemMessage(
        ::std::string const&     message,
        ::std::string const&     ttsMessage,
        ::ProfanityFilterContext profanityFilterContext
    );

    MCNAPI float distanceSqrFromPlayerToBlockCenter(::Vec3 const& pos);

    MCNAPI ::ChatMessageRestrictions executeCommand(::std::string const& commandLine);

    MCNAPI bool findStructure(::StructureEditorData& structureData);

    MCNAPI bool forceAllowEating() const;

    MCNAPI ::BlockActor* getBlockEntity(::BlockPos const& pos, ::BlockActorType blockEntityType);

    MCNAPI ::CoordinateCaptureType getCoordinateCaptureType() const;

    MCNAPI ::std::vector<::GuiMessage>& getGuiMessageList();

    MCNAPI ::std::string getInteractionText() const;

    MCNAPI int getItemNameOffset(bool showClassicUI, bool showSurvivalUI, bool showLocatorBar) const;

    MCNAPI ::std::string const getLastFilteredChatMessage();

    MCNAPI ::ItemStack const& getOffhandSlot() const;

    MCNAPI int getPlayerArmorValue() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> getPlayerCommandOrigin() const;

    MCNAPI ::BlockSource* getPlayerRegion() const;

    MCNAPI ::ItemStack const& getSelectedItem() const;

    MCNAPI ::Bedrock::Threading::Async<::ResourceLocation>
    getThirdPartyGamerpic(::mce::UUID const& playerId, ::std::string const& platformOnlineID) const;

    MCNAPI ::TitleMessage const& getTitleMessage() const;

    MCNAPI float getXToScreenRatio(float x) const;

    MCNAPI float getYToScreenRatio(float y) const;

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

    MCNAPI bool isBossProperlyRegistered(int index) const;

    MCNAPI bool isChatMute() const;

    MCNAPI bool isDimensionReady() const;

    MCNAPI bool const isHudElementVisible(::HudElement hudElement) const;

    MCNAPI bool isInteracting() const;

    MCNAPI bool isPlayerFlying() const;

    MCNAPI bool isPlayerHungry() const;

    MCNAPI bool isRemoteProfanityFilterEnabled() const;

    MCNAPI bool isTouchPressed() const;

    MCNAPI bool itemFrameFilled(::BlockPos const& blockPos) const;

    MCNAPI void makeStructureBlockRequest(
        ::std::string const&                structureName,
        ::BlockPos const&                   structureBlockPosition,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation exportOperation
    );

    MCNAPI void navigateToImmersiveReaderScreen(::std::string readerText);

    MCNAPI void navigateToLeaveLevelScreen(bool switchScreen);

    MCNAPI void navigateToServerStoreScreen();

    MCNAPI void queryBossInfo() const;

    MCNAPI void registerNpcEventListener(::NpcEventListener& listener);

    MCNAPI void requestDisconnectPlayer(::std::string const& userName);

    MCNAPI void resetCanTakeScreenshot();

    MCNAPI void sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCNAPI ::ChatMessageRestrictions sendChatMessage(::std::string const& message);

    MCNAPI void sendCommandBlockUpdatePacket(::BlockPos const& pos);

    MCNAPI void sendRespawnRequest() const;

    MCNAPI void setMenuPointerPressed(bool pressed);

    MCNAPI bool shouldDisplayDaysPlayed() const;

    MCNAPI bool shouldDisplayPlayerPosition() const;

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(::std::function<void(bool, bool)> callback);

    MCNAPI bool thirdPartyGamerpicAllowed(::mce::UUID const& playerId) const;

    MCNAPI void toggleChatMute();

    MCNAPI bool tryBroadcastGlobalPause(bool status);

    MCNAPI bool tryGetAgentPosition(::BlockPos& result) const;

    MCNAPI void unregisterNpcEventListener(::NpcEventListener& listener);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDlcBatcher();

    MCNAPI static void** $vftableForIMinecraftScreenModel();
    // NOLINTEND
};
