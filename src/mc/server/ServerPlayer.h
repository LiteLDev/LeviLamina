#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/CrashDumpLogStringID.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/HudElement.h"
#include "mc/enums/HudVisibility.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class NetworkIdentifier;
class Certificate;
class UserEntityIdentifierComponent;
class ConnectionRequest;

class ServerPlayer : public ::Player {
public:
    // prevent constructor by default
    ServerPlayer& operator=(ServerPlayer const&);
    ServerPlayer(ServerPlayer const&);
    ServerPlayer();

    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    LLNDAPI optional_ref<Certificate const> getCertificate() const;

    LLNDAPI SubClientId const& getClientSubId() const;

    /**
     * @brief Get the player's uuid
     * @return Player's uuid
     */
    LLNDAPI mce::UUID const& getUuid() const;

    /**
     * @brief Get the player's IP and port
     * @return player's IP and port
     */
    LLNDAPI std::string getIPAndPort() const;

    /**
     * @brief Determine if a player is an administrator of the server
     * @return Returns true if the player is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Get the player's lang code.
     * @return the player's lang code.
     */
    LLNDAPI std::string getLocaleCode() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief Disconnect player's client
     */
    LLAPI void disconnect(std::string_view reason) const;


public:
    // NOLINTBEGIN
    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 8
    virtual void _serverInitItemStackIds();

    // vIndex: 10
    virtual ~ServerPlayer();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 56
    virtual bool isValidTarget(class Actor* attacker) const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 77
    virtual void setArmor(::ArmorSlot armorSlot, class ItemStack const& item);

    // vIndex: 84
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 88
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 95
    virtual void changeDimension(DimensionType toId);

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 151
    virtual void knockback(class Actor* source, int dmg, float xd, float zd, float, float, float heightCap);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 169
    virtual void hurtArmorSlots(class ActorDamageSource const& source, int dmg, std::bitset<4> hurtSlots);

    // vIndex: 170
    virtual void setDamagedArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 171
    virtual void sendArmorDamage(std::bitset<4> damagedSlots);

    // vIndex: 172
    virtual void sendArmor(std::bitset<4> armorSlots);

    // vIndex: 177
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 178
    virtual void sendInventory(bool shouldSelectSlot);

    // vIndex: 190
    virtual void prepareRegion(class ChunkSource& mainChunkSource);

    // vIndex: 191
    virtual void destroyRegion();

    // vIndex: 194
    virtual void changeDimensionWithCredits(DimensionType dimension);

    // vIndex: 195
    virtual void tickWorld(struct Tick const& currentTick);

    // vIndex: 196
    virtual void frameUpdate(class FrameUpdateContextBase&);

    // vIndex: 198
    virtual void moveView();

    // vIndex: 199
    virtual void moveSpawnView(class Vec3 const& spawnPosition, DimensionType dimension);

    // vIndex: 200
    virtual void checkMovementStats(class Vec3 const& d);

    // vIndex: 201
    virtual ::StructureFeatureType getCurrentStructureFeature() const;

    // vIndex: 203
    virtual void respawn();

    // vIndex: 206
    virtual void openPortfolio();

    // vIndex: 207
    virtual void openBook(int, bool, int, class BlockActor*);

    // vIndex: 208
    virtual void openTrading(struct ActorUniqueID const& uniqueID, bool useNewScreen);

    // vIndex: 210
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData> npc);

    // vIndex: 211
    virtual void openInventory();

    // vIndex: 214
    virtual void
    displayTextObjectMessage(class TextObjectRoot const& textObject, std::string const&, std::string const&);

    // vIndex: 215
    virtual void displayTextObjectWhisperMessage(
        class ResolvedTextObject const& textObject,
        std::string const&              xuid,
        std::string const&              platformId
    );

    // vIndex: 216
    virtual void
    displayTextObjectWhisperMessage(std::string const& message, std::string const& xuid, std::string const& platformId);

    // vIndex: 217
    virtual void displayWhisperMessage(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // vIndex: 219
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 221
    virtual void openSign(class BlockPos const& position, bool);

    // vIndex: 223
    virtual bool isLoading() const;

    // vIndex: 224
    virtual bool isPlayerInitialized() const;

    // vIndex: 226
    virtual void setPlayerGameType(::GameType gameType);

    // vIndex: 233
    virtual void setContainerData(class IContainerManager& menu, int id, int value);

    // vIndex: 234
    virtual void slotChanged(
        class IContainerManager& menu,
        class Container&         container,
        int                      slot,
        class ItemStack const&   oldItem,
        class ItemStack const&   newItem,
        bool                     isResultSlot
    );

    // vIndex: 235
    virtual void refreshContainer(class IContainerManager& menu);

    // vIndex: 237
    virtual bool isActorRelevant(class Actor const& actor);

    // vIndex: 238
    virtual bool isTeacher() const;

    // vIndex: 239
    virtual void onSuspension();

    // vIndex: 240
    virtual void onLinkedSlotsChanged();

    // vIndex: 241
    virtual void sendInventoryTransaction(class InventoryTransaction const& transaction) const;

    // vIndex: 242
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction> transaction) const;

    // vIndex: 243
    virtual void sendNetworkPacket(class Packet& packet) const;

    // vIndex: 244
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();

    // vIndex: 249
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 253
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;

    // vIndex: 254
    virtual void destroyEditorPlayer();

    // vIndex: 255
    virtual int _getSpawnChunkLimit() const;

    // vIndex: 256
    virtual void _updateChunkPublisherView(class Vec3 const& position, float minDistance);

    MCAPI
    ServerPlayer(class Level&, class PacketSender&, class ServerNetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&, ::GameType, bool, class NetworkIdentifier const&, ::SubClientId, std::function<void(class ServerPlayer&)>, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);

    MCAPI void acceptClientPosition(class Vec3 const&);

    MCAPI void addActorToReplicationList(gsl::not_null<class Actor*> actor, bool);

    MCAPI void checkCheating(class Vec3 const& clientPos);

    MCAPI void disconnect();

    MCAPI void doDeleteContainerManager(bool forceDisconnect);

    MCAPI void doInitialSpawn();

    MCAPI std::array<::HudVisibility, 13> const& getHudVisibilityState() const;

    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();

    MCAPI void handleActorPickRequestOnServer(class Actor& target, bool withData, bool isActorAgentAndEduMode);

    MCAPI void handleBlockPickRequestOnServer(class BlockPos const& position, bool withData);

    MCAPI void hideAllExcept(std::optional<std::vector<::HudElement>> const&);

    MCAPI void initiateContainerClose();

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isPendingDisconnect() const;

    MCAPI ::ContainerID openUnmanagedContainer();

    MCAPI void postLoad(bool isNewPlayer);

    MCAPI void postReplicationTick(struct Tick const& currentTick);

    MCAPI void preReplicationTick(struct Tick const& currentTick);

    MCAPI void selectItem(class ItemStack const& item);

    MCAPI void sendMobEffectPackets();

    MCAPI void sendPlayerAuthInputReceivedEvent();

    MCAPI void setClientChunkRadius(uint requestedRadius, uchar);

    MCAPI void setHudVisibilityState(::HudVisibility, std::optional<std::vector<::HudElement>> const&);

    MCAPI void setIsCompatibleWithClientSideChunkGen(bool);

    MCAPI void setIsPendingDisconnect(bool);

    MCAPI void setLocalPlayerAsInitialized();

    MCAPI void setPlayerInput(float xxa, float zza, bool jumping, bool sneaking);

    MCAPI void triggerRespawnFromCompletingTheEnd();

    MCAPI static void initializePlayerTickComponents(class EntityContext&, struct PlayerMovementSettings const&);

    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
        _logCDEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCAPI ::ContainerID _nextContainerCounter();

    MCAPI void _removeNearbyEntities();

    MCAPI void _scanForNearbyActors();

    MCAPI void _setContainerManager(std::shared_ptr<class IContainerManager> menu);

    MCAPI void _updateNearbyActors();

    // NOLINTEND
};
