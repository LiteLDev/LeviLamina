#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/actor/player/PlayerPartyInfo.h"
#include "mc/world/actor/player/ServerLocatorBar.h"
#include "mc/world/actor/player/VanillaWaypointManager.h"
#include "mc/world/inventory/InventoryMenu.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class BlockPos;
class ChunkSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class DataLoadHelper;
class EntityContext;
class IContainerManager;
class InventoryTransaction;
class ItemStack;
class ItemStackNetManagerServer;
class Level;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class ResolvedTextObject;
class ServerNetworkSystem;
class TextObjectRoot;
class Vec3;
struct DimensionType;
struct INpcDialogueData;
struct KnockbackParameters;
struct PlayerAuthenticationInfo;
struct PlayerMovementSettings;
struct SyncedClientOptionsComponent;
struct SyncedClientOptionsUpdate;
struct VariantParameterList;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
class FrameUpdateContextBase;
// clang-format on

class ServerPlayer : public ::Player {
public:
    // ServerPlayer inner types declare
    // clang-format off
    struct NearbyActor;
    // clang-format on

    // ServerPlayer inner types define
    struct NearbyActor {
    public:
        // NearbyActor inner types define
        enum class State : int {
            Unknown  = 0,
            New      = 1,
            Exist    = 2,
            DidExist = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                               isAutonomous;
        ::ll::TypedStorage<4, 4, ::ServerPlayer::NearbyActor::State> state;
        ::ll::TypedStorage<8, 8, ::Actor*>                           tempActor;
        // NOLINTEND
    };

    using OnPlayerLoadedCallback = ::std::function<void(::ServerPlayer&)>;

public:
    LLNDAPI static ServerPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlatformType>                          mPlatformType;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLanguageCode;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                  mNetwork;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ServerPlayer&)>> mOnPlayerLoadedCallback;
    ::ll::TypedStorage<8, 112, ::InventoryMenu>                       mInventoryMenu;
    ::ll::TypedStorage<1, 1, ::ContainerID>                           mContainerCounter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                        mCloseContainerToken;
    ::ll::TypedStorage<4, 4, uint>                                    mMaxChunkRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsInitialPlayerLoadHappening;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                                    mLocalPlayerInitialized;
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForTickingAreasPreload;
    ::ll::TypedStorage<8, 8, ::Tick>                                  mPrevShieldBlockingTick;
    ::ll::TypedStorage<4, 4, uint>                                    mClientViewRadius;
    ::ll::TypedStorage<4, 4, uint>                                    mClientRequestedRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCompatibleWithClientSideChunkGen;
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>>     mPartyInfo;
    ::ll::TypedStorage<4, 4, int>                                     mRemainingStructureRefreshTicks;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentStructureFeature;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ServerPlayer::NearbyActor>> mNearbyActors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>                          mEditorServerPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::DDUI::DataStoreSyncServer>>             mDataStoreSync;
    ::ll::TypedStorage<1, 1, bool>                                                                mHasQueuedViewMove;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPendingDisconnect;
    ::ll::TypedStorage<4, 52, ::std::array<::HudVisibility, 13>> mHudElementsVisibilityState;
    ::ll::TypedStorage<8, 24, ::ServerLocatorBar>                mServerLocatorBar;
    ::ll::TypedStorage<8, 24, ::VanillaWaypointManager>          mVanillaWaypointManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayer() /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void aiStep() /*override*/;

    virtual void normalTick() /*override*/;

    virtual void
    knockback(::Actor* source, int damage, float xd, float zd, ::KnockbackParameters const& parameters) /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void moveView() /*override*/;

    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimension) /*override*/;

    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    virtual bool isValidTarget(::Actor*) const /*override*/;

    virtual bool swing(::ActorSwingSource swingSource) /*override*/;

    virtual void
    hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots) /*override*/;

    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots) /*override*/;

    virtual void sendArmor(::std::bitset<5> const armorSlots) /*override*/;

    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    virtual void sendInventory(bool shouldSelectSlot) /*override*/;

    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    ) /*override*/;

    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    ) /*override*/;

    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    virtual void openPortfolio() /*override*/;

    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    virtual void openInventory() /*override*/;

    virtual void openBook(int lectern, bool, int, ::BlockActor*) /*override*/;

    virtual void openSign(::BlockPos const& position, bool isFrontSide) /*override*/;

    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   newItem,
        ::ItemStack const&   isResultSlot,
        bool
    ) /*override*/;

    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const armorSlot, ::ItemStack const& item) /*override*/;

    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    virtual void changeDimension(::DimensionType toId) /*override*/;

    virtual void changeDimensionWithCredits(::DimensionType dimension) /*override*/;

    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual void destroyRegion() /*override*/;

    virtual void onSuspension() /*override*/;

    virtual void onLinkedSlotsChanged() /*override*/;

    virtual bool isTeacher() const /*override*/;

    virtual bool isLoading() const /*override*/;

    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool isPlayerInitialized() const /*override*/;

    virtual void respawn() /*override*/;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    virtual void destroyEditorPlayer() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    virtual ::std::optional<::PlayerPartyInfo> getPartyInfo_UNTRUSTED() const /*override*/;

    virtual int _getSpawnChunkLimit() const;

    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance);

    virtual void _serverInitItemStackIds() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerPlayer(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
    );

    MCAPI bool _checkForLoadedTickingAreas() const;

    MCAPI void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );

    MCAPI ::ContainerID _nextContainerCounter();

    MCAPI void _removeNearbyEntities();

    MCAPI void _setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> menu);

    MCAPI void _updateNearbyActors();

    MCAPI void _updateWaitingForTickingAreasPreload();

    MCAPI void addActorToReplicationList(::gsl::not_null<::Actor*> actor, bool autonomous);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void disconnect();

    MCAPI void doDeleteContainerManager(bool forceDisconnect);

    MCAPI void doInitialSpawn();

    MCAPI ::Bedrock::DDUI::DataStoreSyncServer& getDataStoreSync();

    MCAPI bool getFilterProfanity() const;

    MCAPI ::std::array<::HudVisibility, 13> const& getHudVisibilityState() const;

    MCFOLD ::ItemStackNetManagerServer& getItemStackNetManagerServer();

    MCAPI ::std::string getLanguageCode() const;

    MCAPI int getMaxClientViewDistance() const;

    MCAPI ::DeviceMemoryTier getMemoryTier() const;

    MCAPI ::PlatformType getPlatformType() const;

    MCAPI ::ServerLocatorBar& getServerLocatorBar();

    MCAPI ::std::optional<int> getTextFilteringDebugTimeoutMilliSeconds() const;

    MCAPI void handleActorPickRequestOnServer(::Actor& target, bool withData, bool isActorAgentAndEduMode);

    MCAPI void handleBlockPickRequestOnServer(::BlockPos const& position, bool withData);

    MCAPI void hideAllExcept(::std::optional<::std::vector<::HudElement>> const& hudElements);

    MCAPI void initiateContainerClose();

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isInPickRangeOf(::BlockPos const& pos) const;

    MCAPI bool isPendingDisconnect() const;

    MCAPI bool isShowingCredits() const;

    MCAPI ::ContainerID openUnmanagedContainer(
        ::SharedTypes::Legacy::ContainerType        containerType,
        ::std::variant<::BlockPos, ::ActorUniqueID> owner
    );

    MCAPI void postLoad(bool newPlayerCreated);

    MCAPI void postReplicationTick(::Tick const& currentTick);

    MCAPI void preReplicationTick(::Tick const& currentTick);

    MCAPI bool selectItem(::ItemStack const& item);

    MCAPI void sendMobEffectPackets();

    MCAPI void sendPlayerAuthInputReceivedEvent();

    MCAPI void sendPlayerContainerClosedEvent();

    MCAPI void sendPlayerContainerOpenedEvent(
        ::SharedTypes::Legacy::ContainerType        type,
        ::std::variant<::BlockPos, ::ActorUniqueID> owner
    );

    MCAPI void setClientChunkRadius(uint requestedRadius, uchar clientMaxChunkRadius);

    MCAPI void setHudVisibilityState(
        ::HudVisibility                                     hudVisibility,
        ::std::optional<::std::vector<::HudElement>> const& hudElements
    );

    MCAPI void setIsCompatibleWithClientSideChunkGen(bool isCompatible);

    MCAPI void setIsPendingDisconnect(bool isPendingDisconnect);

    MCAPI void setIsShowingCredits(bool value);

    MCAPI void setLanguageCode(::std::string const& languageCode);

    MCAPI void setLocalPlayerAsInitialized();

    MCAPI void triggerRespawnFromCompletingTheEnd();

    MCAPI void updateClientOptions(::SyncedClientOptionsUpdate const& changedOptions);

    MCAPI void updatePartyState(::std::optional<::PlayerPartyInfo> partyInfo);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initializePlayerTickComponents(::EntityContext& entity, ::PlayerMovementSettings const& settings);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        bool                                               isHostingPlayer,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             onPlayerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::PlatformType                                     platformType,
        ::InputMode                                        inputMode,
        ::SyncedClientOptionsComponent                     clientOptions
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $aiStep();

    MCAPI void $normalTick();

    MCAPI void $knockback(::Actor* source, int damage, float xd, float zd, ::KnockbackParameters const& parameters);

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimension);

    MCFOLD void $frameUpdate(::FrameUpdateContextBase&);

    MCAPI bool $isValidTarget(::Actor*) const;

    MCAPI bool $swing(::ActorSwingSource swingSource);

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    MCAPI void $sendArmorDamage(::std::bitset<5> const damagedSlots);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $sendInventory(bool shouldSelectSlot);

    MCAPI void $sendInventoryTransaction(::InventoryTransaction const& transaction) const;

    MCAPI void $sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const;

    MCAPI void $sendNetworkPacket(::Packet& packet) const;

    MCAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& textObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

    MCFOLD void $openPortfolio();

    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCAPI void $openInventory();

    MCAPI void $openBook(int lectern, bool, int, ::BlockActor*);

    MCAPI void $openSign(::BlockPos const& position, bool isFrontSide);

    MCAPI void $checkMovementStats(::Vec3 const& d);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI void $setContainerData(::IContainerManager& menu, int id, int value);

    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   newItem,
        ::ItemStack const&   isResultSlot,
        bool
    );

    MCAPI void $refreshContainer(::IContainerManager& menu);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot const armorSlot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCAPI void $changeDimensionWithCredits(::DimensionType dimension);

    MCAPI void $setPlayerGameType(::GameType gameType);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI bool $isActorRelevant(::Actor const& actor);

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI void $destroyRegion();

    MCAPI void $onSuspension();

    MCAPI void $onLinkedSlotsChanged();

    MCAPI bool $isTeacher() const;

    MCAPI bool $isLoading() const;

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $isPlayerInitialized() const;

    MCAPI void $respawn();

    MCAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCAPI void $destroyEditorPlayer();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getEditorPlayer() const;

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI ::std::optional<::PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

    MCAPI int $_getSpawnChunkLimit() const;

    MCAPI void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);

    MCAPI void $_serverInitItemStackIds();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
