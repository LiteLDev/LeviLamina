#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/GameType.h"

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
class GameServerToken;
class HashedString;
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
struct ActorUniqueID;
struct INpcDialogueData;
struct PlayerMovementSettings;
struct Tick;
struct VariantParameterList;
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
        ::ll::UntypedStorage<1, 1> mUnk6d3516;
        ::ll::UntypedStorage<4, 4> mUnk2fbf1a;
        ::ll::UntypedStorage<8, 8> mUnkbc87d2;
        // NOLINTEND

    public:
        // prevent constructor by default
        NearbyActor& operator=(NearbyActor const&);
        NearbyActor(NearbyActor const&);
        NearbyActor();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkdb462f;
    ::ll::UntypedStorage<4, 4>   mUnk95d1b9;
    ::ll::UntypedStorage<4, 4>   mUnkcbf603;
    ::ll::UntypedStorage<8, 8>   mUnk171665;
    ::ll::UntypedStorage<8, 64>  mUnk8c5640;
    ::ll::UntypedStorage<8, 112> mUnkcdade5;
    ::ll::UntypedStorage<1, 1>   mUnk89a6e5;
    ::ll::UntypedStorage<4, 4>   mUnk79cb49;
    ::ll::UntypedStorage<1, 1>   mUnk939ae5;
    ::ll::UntypedStorage<1, 1>   mUnk797704;
    ::ll::UntypedStorage<1, 1>   mUnk26a7dc;
    ::ll::UntypedStorage<1, 1>   mUnk2dee73;
    ::ll::UntypedStorage<8, 8>   mUnkaf8cdb;
    ::ll::UntypedStorage<4, 4>   mUnk63ea4d;
    ::ll::UntypedStorage<4, 4>   mUnkeff8d8;
    ::ll::UntypedStorage<1, 1>   mUnk94fdf8;
    ::ll::UntypedStorage<4, 4>   mUnke2daef;
    ::ll::UntypedStorage<8, 48>  mUnk39c820;
    ::ll::UntypedStorage<4, 4>   mUnkebef37;
    ::ll::UntypedStorage<8, 64>  mUnka2e19b;
    ::ll::UntypedStorage<8, 16>  mUnk14a1b0;
    ::ll::UntypedStorage<8, 8>   mUnkb6b13f;
    ::ll::UntypedStorage<1, 1>   mUnk8c8f70;
    ::ll::UntypedStorage<1, 1>   mUnk81899d;
    ::ll::UntypedStorage<4, 52>  mUnk18c92f;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayer() /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 145
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

    // vIndex: 185
    virtual void moveView() /*override*/;

    // vIndex: 186
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType) /*override*/;

    // vIndex: 183
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 52
    virtual bool isValidTarget(::Actor* attacker) const /*override*/;

    // vIndex: 156
    virtual void
    hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots) /*override*/;

    // vIndex: 158
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots) /*override*/;

    // vIndex: 159
    virtual void sendArmor(::std::bitset<5> const armorSlots) /*override*/;

    // vIndex: 157
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 165
    virtual void sendInventory(bool shouldSelectSlot) /*override*/;

    // vIndex: 228
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    // vIndex: 229
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    // vIndex: 230
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 201
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 203
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    ) /*override*/;

    // vIndex: 202
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    ) /*override*/;

    // vIndex: 204
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 195
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    // vIndex: 193
    virtual void openPortfolio() /*override*/;

    // vIndex: 197
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 198
    virtual void openInventory() /*override*/;

    // vIndex: 194
    virtual void openBook(int, bool, int, ::BlockActor* lectern) /*override*/;

    // vIndex: 208
    virtual void openSign(::BlockPos const& position, bool isFrontSide) /*override*/;

    // vIndex: 187
    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    // vIndex: 188
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 220
    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    // vIndex: 221
    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;

    // vIndex: 222
    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

    // vIndex: 206
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot const armorSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 164
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 90
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 181
    virtual void changeDimensionWithCredits(::DimensionType dimension) /*override*/;

    // vIndex: 213
    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    // vIndex: 177
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 224
    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 178
    virtual void destroyRegion() /*override*/;

    // vIndex: 226
    virtual void onSuspension() /*override*/;

    // vIndex: 227
    virtual void onLinkedSlotsChanged() /*override*/;

    // vIndex: 225
    virtual bool isTeacher() const /*override*/;

    // vIndex: 210
    virtual bool isLoading() const /*override*/;

    // vIndex: 82
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 211
    virtual bool isPlayerInitialized() const /*override*/;

    // vIndex: 190
    virtual void respawn() /*override*/;

    // vIndex: 231
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 241
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 236
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 242
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 243
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
        ::std::string const&                               playFabId,
        ::std::string const&                               deviceId,
        ::GameServerToken const&                           gameServerToken,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::DeviceMemoryTier                                 memoryTier,
        ::PlatformType                                     platformType,
        int                                                maxClientViewDistance,
        ::InputMode                                        inputMode
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

    MCAPI void acceptClientPosition(::Vec3 const& clientPos, ::Vec3 const& clientPosDelta);

    MCAPI void addActorToReplicationList(::gsl::not_null<::Actor*> actor, bool autonomous);

    MCAPI void checkCheating(::Vec3 const& clientPos, ::Vec3 const& clientPosDelta);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void disconnect();

    MCAPI void doDeleteContainerManager(bool forceDisconnect);

    MCAPI void doInitialSpawn();

    MCAPI void handleActorPickRequestOnServer(::Actor& target, bool withData, bool isActorAgentAndEduMode);

    MCAPI void handleBlockPickRequestOnServer(::BlockPos const& position, bool withData);

    MCAPI void hideAllExcept(::std::optional<::std::vector<::HudElement>> const& hudElements);

    MCAPI bool isInPickRangeOf(::BlockPos const& pos);

    MCAPI ::ContainerID openUnmanagedContainer();

    MCAPI void postReplicationTick(::Tick const& currentTick);

    MCAPI void preReplicationTick(::Tick const& currentTick);

    MCAPI bool selectItem(::ItemStack const& item);

    MCAPI void setClientChunkRadius(uint requestedRadius, uchar clientMaxChunkRadius);

    MCAPI void setHudVisibilityState(
        ::HudVisibility                                     hudVisibility,
        ::std::optional<::std::vector<::HudElement>> const& hudElements
    );

    MCAPI void setPlayerInput(float xxa, float zza, bool jumping, bool sneaking);
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
        ::std::string const&                               playFabId,
        ::std::string const&                               deviceId,
        ::GameServerToken const&                           gameServerToken,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext,
        ::DeviceMemoryTier                                 memoryTier,
        ::PlatformType                                     platformType,
        int                                                maxClientViewDistance,
        ::InputMode                                        inputMode
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
