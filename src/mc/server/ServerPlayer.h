#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/diagnostics/CrashDumpLogStringID.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/player/Player.h"
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
class Dimension;
class EntityContext;
class FrameUpdateContextBase;
class IContainerManager;
class InventoryTransaction;
class ItemStack;
class Level;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class ResolvedTextObject;
class ServerNetworkSystem;
class TextObjectRoot;
class Vec3;
struct INpcDialogueData;
struct PlayerAuthenticationInfo;
struct PlayerMovementSettings;
struct SyncedClientOptionsComponent;
struct VariantParameterList;
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class ServerPlayer : public ::Player {
public:
    // ServerPlayer inner types declare
    // clang-format off
    struct NearbyActor;
    // clang-format on

    // ServerPlayer inner types define
    using OnPlayerLoadedCallback = ::std::function<void(::ServerPlayer&)>;

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlatformType>                          mPlatformType;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                  mNetwork;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ServerPlayer&)>> mOnPlayerLoadedCallback;
    ::ll::TypedStorage<8, 112, ::InventoryMenu>                       mInventoryMenu;
    ::ll::TypedStorage<1, 1, ::ContainerID>                           mContainerCounter;
    ::ll::TypedStorage<4, 4, uint>                                    mMaxChunkRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsInitialPlayerLoadHappening;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                                    mLocalPlayerInitialized;
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForTickingAreasPreload;
    ::ll::TypedStorage<8, 8, ::Tick>                                  mPrevShieldBlockingTick;
    ::ll::TypedStorage<4, 4, uint>                                    mClientViewRadius;
    ::ll::TypedStorage<4, 4, uint>                                    mClientRequestedRadius;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCompatibleWithClientSideChunkGen;
    ::ll::TypedStorage<4, 4, int>                                     mRemainingStructureRefreshTicks;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentStructureFeature;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ServerPlayer::NearbyActor>> mNearbyActors;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                                                    mCloseContainerToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>                          mEditorServerPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::DDUI::DataStoreSyncServer>>             mDataStoreSync;
    ::ll::TypedStorage<1, 1, bool>                                                                mHasQueuedViewMove;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPendingDisconnect;
    ::ll::TypedStorage<4, 52, ::std::array<::HudVisibility, 13>> mHudElementsVisibilityState;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~ServerPlayer() /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 146
    virtual void aiStep() /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 138
    virtual void knockback(
        ::Actor* source,
        int      dmg,
        float    xd,
        float    zd,
        float    horizontalPower,
        float    verticalPower,
        float    heightCap
    ) /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 186
    virtual void moveView() /*override*/;

    // vIndex: 187
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType) /*override*/;

    // vIndex: 184
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 52
    virtual bool isValidTarget(::Actor* attacker) const /*override*/;

    // vIndex: 111
    virtual bool swing() /*override*/;

    // vIndex: 157
    virtual void
    hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots) /*override*/;

    // vIndex: 159
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots) /*override*/;

    // vIndex: 160
    virtual void sendArmor(::std::bitset<5> const armorSlots) /*override*/;

    // vIndex: 158
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) /*override*/;

    // vIndex: 166
    virtual void sendInventory(bool shouldSelectSlot) /*override*/;

    // vIndex: 229
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    // vIndex: 230
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    // vIndex: 231
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 202
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 204
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    ) /*override*/;

    // vIndex: 203
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    ) /*override*/;

    // vIndex: 205
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 196
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    // vIndex: 194
    virtual void openPortfolio() /*override*/;

    // vIndex: 198
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 199
    virtual void openInventory() /*override*/;

    // vIndex: 195
    virtual void openBook(int, bool, int, ::BlockActor* lectern) /*override*/;

    // vIndex: 209
    virtual void openSign(::BlockPos const& position, bool isFrontSide) /*override*/;

    // vIndex: 188
    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    // vIndex: 189
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 221
    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    // vIndex: 222
    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;

    // vIndex: 223
    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

    // vIndex: 207
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 165
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 90
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 182
    virtual void changeDimensionWithCredits(::DimensionType dimension) /*override*/;

    // vIndex: 214
    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    // vIndex: 178
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 225
    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 179
    virtual void destroyRegion() /*override*/;

    // vIndex: 227
    virtual void onSuspension() /*override*/;

    // vIndex: 228
    virtual void onLinkedSlotsChanged() /*override*/;

    // vIndex: 226
    virtual bool isTeacher() const /*override*/;

    // vIndex: 211
    virtual bool isLoading() const /*override*/;

    // vIndex: 82
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 212
    virtual bool isPlayerInitialized() const /*override*/;

    // vIndex: 191
    virtual void respawn() /*override*/;

    // vIndex: 232
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 244
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 243
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 237
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 245
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 246
    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance);

    // vIndex: 6
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

    MCAPI void _removeNearbyEntities();

    MCAPI void _setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> menu);

    MCAPI void _updateNearbyActors();

    MCAPI void addActorToReplicationList(::gsl::not_null<::Actor*> actor, bool autonomous);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void disconnect();

    MCAPI void doDeleteContainerManager(bool forceDisconnect);

    MCAPI void doInitialSpawn();

    MCAPI void handleActorPickRequestOnServer(::Actor& target, bool withData, bool isActorAgentAndEduMode);

    MCAPI void handleBlockPickRequestOnServer(::BlockPos const& position, bool withData);

    MCAPI void hideAllExcept(::std::optional<::std::vector<::HudElement>> const& hudElements);

    MCAPI bool isInPickRangeOf(::BlockPos const& pos) const;

    MCAPI ::ContainerID openUnmanagedContainer();

    MCAPI void postReplicationTick(::Tick const& currentTick);

    MCAPI void preReplicationTick(::Tick const& currentTick);

    MCAPI bool selectItem(::ItemStack const& item);

    MCAPI void setClientChunkRadius(uint requestedRadius, uchar clientMaxChunkRadius);

    MCAPI void setHudVisibilityState(
        ::HudVisibility                                     hudVisibility,
        ::std::optional<::std::vector<::HudElement>> const& hudElements
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initializePlayerTickComponents(::EntityContext& entity, ::PlayerMovementSettings const& settings);

    MCAPI static ::ServerPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
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

    MCAPI void $knockback(
        ::Actor* source,
        int      dmg,
        float    xd,
        float    zd,
        float    horizontalPower,
        float    verticalPower,
        float    heightCap
    );

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCFOLD void $frameUpdate(::FrameUpdateContextBase&);

    MCAPI bool $isValidTarget(::Actor* attacker) const;

    MCAPI bool $swing();

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    MCAPI void $sendArmorDamage(::std::bitset<5> const damagedSlots);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

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
        ::ResolvedTextObject const& resolvedTextObject,
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

    MCAPI void $openBook(int, bool, int, ::BlockActor* lectern);

    MCAPI void $openSign(::BlockPos const& position, bool isFrontSide);

    MCAPI void $checkMovementStats(::Vec3 const& d);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI void $setContainerData(::IContainerManager& menu, int id, int value);

    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    );

    MCAPI void $refreshContainer(::IContainerManager& menu);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

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

    MCAPI int $_getSpawnChunkLimit() const;

    MCAPI void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);

    MCAPI void $_serverInitItemStackIds();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
