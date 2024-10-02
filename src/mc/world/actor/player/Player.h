#pragma once

#include "ll/api/base/Macro.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkPeer.h"
#include "mc/server/volume/UserEntityIdentifierComponent.h"
#include "mc/world/actor/player/EnderChestContainer.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MobSpawnMethod.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class NetworkIdentifier;
class Certificate;
class ConnectionRequest;
class Packet;
class PlayerEventCoordinator;

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct FixedSpawnPositionData;
    class PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    struct FixedSpawnPositionData {
    public:
        // prevent constructor by default
        FixedSpawnPositionData& operator=(FixedSpawnPositionData const&);
        FixedSpawnPositionData(FixedSpawnPositionData const&);
        FixedSpawnPositionData();
    };

    class PlayerSpawnPoint {
    public:
        // prevent constructor by default
        PlayerSpawnPoint& operator=(PlayerSpawnPoint const&);
        PlayerSpawnPoint(PlayerSpawnPoint const&);
        PlayerSpawnPoint();

    public:
        // NOLINTBEGIN
        MCAPI bool hasSpawnBlock() const;

        // NOLINTEND
    };

    union LevelSleepStatus {
        int data; // this+0x0
        struct {
            char unknown;
        } object; // this+0x0
    };

public:
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
     * @brief Get the player's real in-game nickname
     * @return player's real in-game nickname
     */
    LLNDAPI std::string getRealName() const;

    /**
     * @brief Get the name of the player's langtext.
     * @return The name of the player's langtext.
     * @warning This is not the player's in-game nickname.
     */
    LLNDAPI std::string getLocaleName() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief Disconnect player's client
     */
    LLAPI void disconnect(std::string_view reason) const;
    /**
     * @brief Send a message to player
     */
    LLAPI void sendMessage(std::string_view msg) const;

    LLAPI void setAbility(::AbilitiesIndex index, bool value);

    /**
     * @brief Determine if a player is an administrator of the server
     * @return Returns true if the player is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Give player item and refresh.
     * @return Whether it is a complete success
     *         (e.g. returning false if the quantity of items given to the player does not match the expectation).
     * @warning The return value does not take into account whether the refresh was successful.
     *          You can use Player::add, but it will not refresh the item, which may lead to potential issues.
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer();

    LLNDAPI optional_ref<EnderChestContainer const> getEnderChestContainer() const;

    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 8
    virtual void _serverInitItemStackIds();

    // vIndex: 10
    virtual ~Player();

    // vIndex: 11
    virtual void resetUserPos(bool clearMore);

    // vIndex: 13
    virtual void remove();

    // vIndex: 19
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 20
    virtual bool isFireImmune() const;

    // vIndex: 23
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 25
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 28
    virtual void passengerTick();

    // vIndex: 37
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 40
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 43
    virtual bool isImmobile() const;

    // vIndex: 44
    virtual bool isSilentObserver() const;

    // vIndex: 45
    virtual bool isSleeping() const;

    // vIndex: 46
    virtual void setSleeping(bool val);

    // vIndex: 48
    virtual bool isBlocking() const;

    // vIndex: 49
    virtual bool isDamageBlocked(class ActorDamageSource const& source) const;

    // vIndex: 57
    virtual bool attack(class Actor& actor, ::ActorDamageCause const& cause);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 73
    virtual void feed(int itemId);

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 75
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 77
    virtual void setArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 82
    virtual void setCarriedItem(class ItemStack const& item);

    // vIndex: 83
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 84
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 85
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 86
    virtual bool consumeTotem();

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 100
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 104
    virtual void sendMotionPacketIfNeeded(struct PlayerMovementSettings const&);

    // vIndex: 106
    virtual void startSwimming();

    // vIndex: 107
    virtual void stopSwimming();

    // vIndex: 109
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 114
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 115
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 118
    virtual void useItem(class ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem);

    // vIndex: 120
    virtual float getMapDecorationRotation() const;

    // vIndex: 122
    virtual bool add(class ItemStack& item);

    // vIndex: 123
    virtual bool drop(class ItemStack const& item, bool randomly);

    // vIndex: 127
    virtual void startSpinAttack();

    // vIndex: 128
    virtual void stopSpinAttack();

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 132
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 136
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 137
    virtual std::optional<DimensionType> getLastDeathDimension() const;

    // vIndex: 138
    virtual bool hasDiedBefore() const;

    // vIndex: 139
    virtual void doEnterWaterSplashEffect();

    // vIndex: 140
    virtual void doExitWaterSplashEffect();

    // vIndex: 142
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, class ItemStack const&) const;

    // vIndex: 143
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, class ItemStack const& item) const;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 155
    virtual float getSpeed() const;

    // vIndex: 156
    virtual void setSpeed(float _speed);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 162
    virtual int getItemUseDuration() const;

    // vIndex: 163
    virtual float getItemUseStartupProgress() const;

    // vIndex: 164
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 173
    virtual std::vector<class ItemStack const*> getAllHand() const;

    // vIndex: 174
    virtual std::vector<class ItemStack const*> getAllEquipment() const;

    // vIndex: 175
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&);

    // vIndex: 176
    virtual void dropEquipmentOnDeath();

    // vIndex: 177
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 178
    virtual void sendInventory(bool shouldSelectSlot);

    // vIndex: 185
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 186
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 190
    virtual void prepareRegion(class ChunkSource& mainChunkSource);

    // vIndex: 191
    virtual void destroyRegion();

    // vIndex: 192
    virtual void suspendRegion();

    // vIndex: 193
    virtual void _fireDimensionChanged();

    // vIndex: 194
    virtual void changeDimensionWithCredits(DimensionType dimension);

    // vIndex: 195
    virtual void tickWorld(struct Tick const&);

    // vIndex: 196
    virtual void frameUpdate(class FrameUpdateContextBase&) = 0;

    // vIndex: 197
    virtual std::vector<class ChunkPos> const& getTickingOffsets() const;

    // vIndex: 198
    virtual void moveView();

    // vIndex: 199
    virtual void moveSpawnView(class Vec3 const& spawnPosition, DimensionType dimensionType);

    // vIndex: 200
    virtual void checkMovementStats(class Vec3 const& d);

    // vIndex: 201
    virtual ::StructureFeatureType getCurrentStructureFeature() const;

    // vIndex: 202
    virtual bool isAutoJumpEnabled() const;

    // vIndex: 203
    virtual void respawn();

    // vIndex: 204
    virtual void resetRot();

    // vIndex: 205
    virtual bool isInTrialMode();

    // vIndex: 206
    virtual void openPortfolio();

    // vIndex: 207
    virtual void openBook(int bookSlot, bool editable, int page, class BlockActor* lectern);

    // vIndex: 208
    virtual void openTrading(struct ActorUniqueID const& uniqueID, bool useNewScreen);

    // vIndex: 209
    virtual void openChalkboard(class ChalkboardBlockActor& chalkboard, bool showLockToggle);

    // vIndex: 210
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData> npc);

    // vIndex: 211
    virtual void openInventory();

    // vIndex: 212
    virtual void displayChatMessage(std::string const& author, std::string const& message);

    // vIndex: 213
    virtual void displayClientMessage(std::string const& message);

    // vIndex: 214
    virtual void
    displayTextObjectMessage(class TextObjectRoot const& textObject, std::string const&, std::string const&);

    // vIndex: 215
    virtual void displayTextObjectWhisperMessage(
        class ResolvedTextObject const& resolvedTextObject,
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

    // vIndex: 218
    virtual ::BedSleepingResult startSleepInBed(class BlockPos const&);

    // vIndex: 219
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 220
    virtual bool canStartSleepInBed();

    // vIndex: 221
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 222
    virtual void playEmote(std::string const& pieceId, bool);

    // vIndex: 223
    virtual bool isLoading() const;

    // vIndex: 224
    virtual bool isPlayerInitialized() const;

    // vIndex: 225
    virtual void stopLoading();

    // vIndex: 226
    virtual void setPlayerGameType(::GameType gameType);

    // vIndex: 227
    virtual void initHUDContainerManager();

    // vIndex: 228
    virtual void _crit(class Actor& actor);

    // vIndex: 229
    virtual class IMinecraftEventing* getEventing() const;

    // vIndex: 230
    virtual uint getUserId() const;

    // vIndex: 231
    virtual void addExperience(int xp);

    // vIndex: 232
    virtual void addLevels(int levels);

    // vIndex: 233
    virtual void setContainerData(class IContainerManager& menu, int id, int value) = 0;

    // vIndex: 234
    virtual void slotChanged(
        class IContainerManager& menu,
        class Container&         container,
        int                      slot,
        class ItemStack const&   oldItem,
        class ItemStack const&   newItem,
        bool                     isResultSlot
    ) = 0;

    // vIndex: 235
    virtual void refreshContainer(class IContainerManager& menu) = 0;

    // vIndex: 236
    virtual void deleteContainerManager();

    // vIndex: 237
    virtual bool isActorRelevant(class Actor const& actor);

    // vIndex: 238
    virtual bool isTeacher() const = 0;

    // vIndex: 239
    virtual void onSuspension();

    // vIndex: 240
    virtual void onLinkedSlotsChanged();

    // vIndex: 241
    virtual void sendInventoryTransaction(class InventoryTransaction const& transaction) const = 0;

    // vIndex: 242
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction> transaction
    ) const = 0;

    // vIndex: 243
    virtual void sendNetworkPacket(class Packet& packet) const;

    // vIndex: 244
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 245
    virtual bool isSimulated() const;

    // vIndex: 246
    virtual std::string getXuid() const;

    // vIndex: 247
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 248
    virtual void requestMissingSubChunk(class SubChunkPos const&);

    // vIndex: 249
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 250
    virtual void onMovePlayerPacketNormal(class Vec3 const& pos, class Vec2 const& rot, float yHeadRot);

    // vIndex: 251
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource& mainChunkSource);

    // vIndex: 252
    virtual void setAbilities(class LayeredAbilities const&);

    // vIndex: 253
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 254
    virtual void destroyEditorPlayer() = 0;

    MCAPI
    Player(class Level&, class PacketSender&, ::GameType, bool, class NetworkIdentifier const&, ::SubClientId, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, class EntityContext&, std::string const&, std::string const&);

    MCAPI void _fireWillChangeDimension();

    MCAPI void broadcastPlayerSpawnedMobEvent(::ActorType spawnedType, ::MobSpawnMethod spawnMethod);

    MCAPI bool canBeSeenOnMap() const;

    MCAPI bool canDestroy(class Block const& block) const;

    MCAPI bool canJump();

    MCAPI bool canOpenContainerScreen();

    MCAPI bool canSleep() const;

    MCAPI bool canStackInOffhand(class ItemStack const& item) const;

    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCAPI bool canUseOperatorBlocks() const;

    MCAPI void causeFoodExhaustion(float exhaustionAmount);

    MCAPI bool checkNeedAutoJump(float, float);

    MCAPI void clearRespawnPosition();

    MCAPI void completeUsingItem();

    MCAPI void eat(class ItemStack const& instance);

    MCAPI void eat(int hungerValue, float saturationModifier);

    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const& item) const;

    MCAPI void fireDimensionChangedEvent(DimensionType fromDimension, DimensionType toDimension);

    MCAPI bool forceAllowEating() const;

    MCAPI class LayeredAbilities& getAbilities();

    MCAPI class LayeredAbilities const& getAbilities() const;

    MCAPI class Agent* getAgent() const;

    MCAPI struct ActorUniqueID getAgentID() const;

    MCAPI class Agent* getAgentIfAllowed(bool callerCanAccessOtherAgents, struct ActorUniqueID callerAgentID) const;

    MCAPI class BlockPos const& getBedPosition() const;

    MCAPI int64 getBlockedUsingDamagedShieldTimeStamp() const;

    MCAPI int64 getBlockedUsingShieldTimeStamp() const;

    MCAPI int64 getBlockingStartTimeStamp() const;

    MCAPI class Vec3 getCapePos(float a);

    MCAPI uint getChunkRadius() const;

    MCAPI std::weak_ptr<class IContainerManager> getContainerManager();

    MCAPI class ItemStack const& getCurrentActiveShield() const;

    MCAPI float getDestroyProgress(class Block const& block) const;

    MCAPI float getDestroySpeed(class Block const& block) const;

    MCAPI int getDirection() const;

    MCAPI int getEnchantmentSeed() const;

    MCAPI DimensionType getExpectedSpawnDimensionId() const;

    MCAPI class BlockPos const& getExpectedSpawnPosition() const;

    MCAPI class GameMode& getGameMode() const;

    MCAPI std::string getInteractText() const;

    MCAPI class Container& getInventory();

    MCAPI int getItemCooldownLeft(class HashedString const& type) const;

    MCAPI int getItemCooldownLeft(uint64) const;

    MCAPI class ItemStack const& getItemInUse() const;

    MCAPI std::string getItemInteractText(class Item const&) const;

    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();

    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;

    MCAPI float getLuck();

    MCAPI int getMapIndex();

    MCAPI int getMaxItemCooldownLeft() const;

    MCAPI std::string const& getName() const;

    MCAPI void getNewEnchantmentSeed();

    MCAPI class AABB getPickupArea() const;

    MCAPI ::BuildPlatform getPlatform() const;

    MCAPI std::string const& getPlatformOnlineId() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCAPI int getPlayerIndex() const;

    MCAPI int getPlayerLevel() const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    MCAPI std::string const& getPlayerSessionId() const;

    MCAPI class ItemStack const& getPlayerUIItem(::PlayerUISlot slot);

    MCAPI class BlockPos const& getRespawnAnchorPosition() const;

    MCAPI class ItemStack const& getSelectedItem() const;

    MCAPI int getSelectedItemSlot() const;

    MCAPI std::string const& getServerId() const;

    MCAPI class SerializedSkin& getSkin();

    MCAPI class SerializedSkin const& getSkin() const;

    MCAPI float getSleepRotation() const;

    MCAPI DimensionType getSpawnDimension() const;

    MCAPI class BlockPos const& getSpawnPosition() const;

    MCAPI class PlayerInventory& getSupplies();

    MCAPI class PlayerInventory const& getSupplies() const;

    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();

    MCAPI bool getUsedPotion();

    MCAPI int getXpEarnedAtCurrentLevel() const;

    MCAPI uint getXpNeededForLevelRange(int startlevel, int endlevel) const;

    MCAPI int getXpNeededForNextLevel() const;

    MCAPI void handleJumpEffects();

    MCAPI bool hasBedPosition() const;

    MCAPI bool hasOpenContainer() const;

    MCAPI bool hasOpenContainerOfContainerType(::ContainerType containerType) const;

    MCAPI bool hasOwnedChunkSource() const;

    MCAPI bool hasResource(class ItemDescriptor const& resource);

    MCAPI bool hasRespawnAnchorPosition() const;

    MCAPI bool hasRespawnPosition() const;

    MCAPI bool interact(class Actor& actor, class Vec3 const& location);

    MCAPI void inventoryChanged(
        class Container&       container,
        int                    slot,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool                   forceBalanced
    );

    MCAPI bool is2DPositionRelevant(DimensionType dimension, class BlockPos const& position);

    MCAPI bool isEmoting() const;

    MCAPI bool isFlying() const;

    MCAPI bool isForcedRespawn() const;

    MCAPI bool isHiddenFrom(class Mob& target) const;

    MCAPI bool isHostingPlayer() const;

    MCAPI bool isHungry() const;

    MCAPI bool isHurt();

    MCAPI bool isInRaid() const;

    MCAPI bool isItemOnCooldown(class HashedString const& type) const;

    MCAPI bool isRespawningFromTheEnd() const;

    MCAPI bool isSleepingLongEnough() const;

    MCAPI bool isSpawned() const;

    MCAPI bool isUsingItem() const;

    MCAPI bool isValidSpawn() const;

    MCAPI void passengerCheckMovementStats();

    MCAPI void playPredictiveSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool
    );

    MCAPI void playPredictiveSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        struct ActorDefinitionIdentifier const&,
        int,
        bool
    );

    MCAPI void recheckSpawnPosition();

    MCAPI void registerTrackedBoss(struct ActorUniqueID mob);

    MCAPI void releaseUsingItem();

    MCAPI void resendAllChunks();

    MCAPI void resetPlayerLevel();

    MCAPI void resetPublisherInitialSpawn();

    MCAPI void resetToDefaultGameMode();

    MCAPI void saveLastDeathLocation(class CompoundTag& tag) const;

    MCAPI void sendEventPacket(class LegacyTelemetryEventPacket&) const;

    MCAPI void sendPlayerTeleported();

    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const& pos, int count);

    MCAPI void setAgent(class Agent* agent);

    MCAPI void setBedRespawnPosition(class BlockPos const& bedPosition);

    MCAPI void setBlockRespawnUntilClientMessage(bool val);

    MCAPI void setChunkRadius(uint chunkRadius);

    MCAPI void setContainerManager(std::shared_ptr<class IContainerManager> manager);

    MCAPI void setCursorSelectedItem(class ItemStack const& item);

    MCAPI void setCursorSelectedItemGroup(class ItemGroup const& itemGroup);

    MCAPI void setEnchantmentSeed(int newSeed);

    MCAPI void setHasDied(bool);

    MCAPI void setHasSeenCredits(bool value);

    MCAPI void setInventoryOptions(struct InventoryOptions const&);

    MCAPI void setLastDeathDimension(DimensionType dimension);

    MCAPI void setMapIndex(int mapIndex);

    MCAPI void setName(std::string const& newName);

    MCAPI void setPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPlatformOnlineId(std::string const& platformOnlineId);

    MCAPI void setPlayerIndex(int index);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, class ItemStack const& item);

    MCAPI void setRespawnPosition(class BlockPos const& inRespawnPosition, DimensionType dimension);

    MCAPI void setRespawnPositionCandidate();

    MCAPI void setRespawnReady(class Vec3 const&);

    MCAPI void setSelectedItem(class ItemStack const& item);

    MCAPI class ItemStack const& setSelectedSlot(int slot);

    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const& spawnBlockPosition, DimensionType dimension);

    MCAPI void setUsedPotion(bool used);

    MCAPI bool shouldShowCredits() const;

    MCAPI void startCooldown(class Item const* item, bool);

    MCAPI void startCooldown(class HashedString const& type, int, bool);

    MCAPI void
    startItemUseOn(uchar face, class BlockPos const& blockPos, class BlockPos const&, class ItemStack const& item);

    MCAPI void startUsingItem(class ItemStack const& instance, int duration);

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(class BlockPos const& blockPos, class ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(class Actor& actor, int orgCount, int favoredSlot);

    MCAPI void tryDisableShield();

    MCAPI bool tryStartGliding();

    MCAPI void unRegisterTrackedBoss(struct ActorUniqueID mob);

    MCAPI void updateBlockSourceTick();

    MCAPI void updateInventoryTransactions();

    MCAPI void updateSkin(class SerializedSkin const& skin, int clientSubID);

    MCAPI void updateSpawnChunkView();

    MCAPI void updateTrackedBosses();

    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI static std::optional<struct Player::FixedSpawnPositionData> checkAndFixSpawnPosition(
        class Vec3 const&,
        std::vector<gsl::not_null<class BlockSource*>>,
        class AABB,
        bool,
        bool,
        bool,
        bool,
        bool,
        short
    );

    MCAPI static bool checkNeedAutoJump(
        class IConstBlockSource const&,
        struct AABBShapeComponent const&,
        struct ActorRotationComponent const&,
        float,
        struct StateVectorComponent const&,
        class optional_ref<class GetCollisionShapeInterface const>,
        float,
        float
    );

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&, ::ActorDamageCause);

    MCAPI static bool isDangerousVolume(class BlockSource& region, class AABB const& centeredAABB, bool);

    MCAPI static class Player*
    tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent& actor, bool);

    MCAPI static class Player* tryGetFromEntity(class EntityContext& entity, bool);

    MCAPI static class Player* tryGetFromEntity(class StackRefResult<class EntityContext>, bool);

    MCAPI static void updatePlayerGameTypeEntityData(class EntityContext&, ::GameType, ::GameType);

    MCAPI static float const DEFAULT_BB_HEIGHT;

    MCAPI static float const DEFAULT_BB_WIDTH;

    MCAPI static float const DEFAULT_PLAYER_EYE_OFFSET;

    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;

    MCAPI static float const DEFAULT_WALK_SPEED;

    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;

    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;

    MCAPI static class Attribute const EXHAUSTION;

    MCAPI static class Attribute const EXPERIENCE;

    MCAPI static int const GLIDE_STOP_DELAY;

    MCAPI static class Attribute const HUNGER;

    MCAPI static class Attribute const LEVEL;

    MCAPI static float const PLAYER_ALIVE_HEIGHT;

    MCAPI static float const PLAYER_ALIVE_WIDTH;

    MCAPI static float const PLAYER_DEAD_HEIGHT;

    MCAPI static float const PLAYER_DEAD_WIDTH;

    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS;

    MCAPI static float const PLAYER_SLEEPING_HEIGHT;

    MCAPI static float const PLAYER_SLEEPING_WIDTH;

    MCAPI static class Attribute const SATURATION;

    MCAPI static uint const SPAWN_CHUNK_LARGE_JUMP;

    MCAPI static uint const SPAWN_CHUNK_RADIUS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canChangeGameType(::GameType newGameType) const;

    MCAPI bool
    _checkAndFixSpawnPosition(class Vec3&, std::vector<gsl::not_null<class BlockSource*>>, bool, bool, bool, bool);

    MCAPI void _chooseSpawnArea();

    MCAPI bool _chooseSpawnPositionWithinArea();

    MCAPI void _registerPlayerAttributes();

    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3 pos);

    MCAPI void _updateInteraction();

    MCAPI bool _validateSpawnPositionAvailability(
        class Vec3 const&       pos,
        class BlockSource*      blockSourceChunkCheck,
        class Vec3 const* const AABBoffset
    ) const;

    MCAPI bool checkBed(class BlockSource* spawnBlockSource, class Vec3 const* const positionToCheck);

    MCAPI bool checkSpawnBlock(class BlockSource const& region) const;

    MCAPI static bool _isDangerousBlock(class Block const& block, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addLevels(int levels);

    MCAPI bool _blockUsingShield(class ActorDamageSource const& source, float damage);

    MCAPI void _ensureSafeSpawnPosition(class Vec3& pos);

    MCAPI bool _findFallbackSpawnPosition(
        class Vec3&                                    spawnPosition,
        std::vector<gsl::not_null<class BlockSource*>> regions,
        uint                                           maxDistance
    );

    MCAPI void _handleCarriedItemInteractText();

    MCAPI bool _isChunkSourceLoaded(class Vec3 const& spawnPosition, class BlockSource const& region) const;

    MCAPI void _registerElytraLoopSound();

    MCAPI void _sendShieldUpdatePacket(
        class ShieldItem const& shieldItem,
        class ItemStack const&  before,
        class ItemStack const&  after,
        ::ContainerID           container,
        int                     slot
    );

    MCAPI void _setPlayerGameType(::GameType);

    MCAPI bool _shouldCrit(class Actor const& target) const;

    MCAPI bool
    _updateFroglightCountAndTestForAchievement(class ItemStack const& oldItem, class ItemStack const& newItem);

    // NOLINTEND
};
