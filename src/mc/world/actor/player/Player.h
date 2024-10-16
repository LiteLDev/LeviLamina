#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

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

public:
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
    virtual void
    teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

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
    virtual float causeFallDamageToActor(float distance, float multiplier, class ActorDamageSource source);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 100
    virtual bool canAddPassenger(class Actor& passenger) const;

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
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, class ItemStack const& item) const;

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
    virtual void dropEquipmentOnDeath(class ActorDamageSource const& source);

    // vIndex: 176
    virtual void dropEquipmentOnDeath();

    // vIndex: 177
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 178
    virtual void sendInventory(bool);

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
    virtual void changeDimensionWithCredits(DimensionType);

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
    virtual void checkMovementStats(class Vec3 const&);

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
    virtual void openBook(int, bool, int, class BlockActor*);

    // vIndex: 208
    virtual void openTrading(struct ActorUniqueID const&, bool);

    // vIndex: 209
    virtual void openChalkboard(class ChalkboardBlockActor&, bool);

    // vIndex: 210
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData> npc);

    // vIndex: 211
    virtual void openInventory();

    // vIndex: 212
    virtual void displayChatMessage(std::string const& author, std::string const& message);

    // vIndex: 213
    virtual void displayClientMessage(std::string const& message);

    // vIndex: 214
    virtual void displayTextObjectMessage(
        class TextObjectRoot const& textObject,
        std::string const&          fromXuid,
        std::string const&          fromPlatformId
    );

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
    virtual ::BedSleepingResult startSleepInBed(class BlockPos const& bedBlockPos);

    // vIndex: 219
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 220
    virtual bool canStartSleepInBed();

    // vIndex: 221
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 222
    virtual void playEmote(std::string const&, bool);

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
    virtual bool isActorRelevant(class Actor const&);

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
    virtual void setAbilities(class LayeredAbilities const& newAbilities);

    // vIndex: 253
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 254
    virtual void destroyEditorPlayer() = 0;

    MCAPI Player(
        class Level&                       level,
        class PacketSender&                packetSender,
        ::GameType                         playerGameType,
        bool                               isHostingPlayer,
        class NetworkIdentifier const&     owner,
        ::SubClientId                      subid,
        class mce::UUID                    uuid,
        std::string const&                 playFabId,
        std::string const&                 deviceId,
        std::unique_ptr<class Certificate> certificate,
        class EntityContext&               entityContext,
        std::string const&                 platformId,
        std::string const&                 platformOnlineId
    );

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

    MCAPI bool checkNeedAutoJump(float inputMoveX, float inputMoveZ);

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

    MCAPI int getItemCooldownLeft(uint64 typeHash) const;

    MCAPI class ItemStack const& getItemInUse() const;

    MCAPI std::string getItemInteractText(class Item const& item) const;

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
        class Container&,
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
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Block const&                      block,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isGlobal
    );

    MCAPI void playPredictiveSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        struct ActorDefinitionIdentifier const& entityType,
        int                                     data,
        bool                                    isGlobal
    );

    MCAPI void recheckSpawnPosition();

    MCAPI void registerTrackedBoss(struct ActorUniqueID mob);

    MCAPI void releaseUsingItem();

    MCAPI void resendAllChunks();

    MCAPI void resetPlayerLevel();

    MCAPI void resetPublisherInitialSpawn();

    MCAPI void resetToDefaultGameMode();

    MCAPI void saveLastDeathLocation(class CompoundTag& tag) const;

    MCAPI void sendEventPacket(class LegacyTelemetryEventPacket& packet) const;

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

    MCAPI void setHasDied(bool hasDied);

    MCAPI void setHasSeenCredits(bool value);

    MCAPI void setInventoryOptions(struct InventoryOptions const& options);

    MCAPI void setLastDeathDimension(DimensionType dimension);

    MCAPI void setMapIndex(int mapIndex);

    MCAPI void setName(std::string const& newName);

    MCAPI void setPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPlatformOnlineId(std::string const& platformOnlineId);

    MCAPI void setPlayerIndex(int index);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, class ItemStack const& item);

    MCAPI void setRespawnPosition(class BlockPos const& inRespawnPosition, DimensionType dimension);

    MCAPI void setRespawnPositionCandidate();

    MCAPI void setRespawnReady(class Vec3 const& respawnPosition);

    MCAPI void setSelectedItem(class ItemStack const& item);

    MCAPI class ItemStack const& setSelectedSlot(int slot);

    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const& spawnBlockPosition, DimensionType dimension);

    MCAPI void setUsedPotion(bool used);

    MCAPI bool shouldShowCredits() const;

    MCAPI void startCooldown(class Item const* item, bool updateClient);

    MCAPI void startCooldown(class HashedString const& type, int tickDuration, bool updateClient);

    MCAPI void startItemUseOn(
        uchar                  face,
        class BlockPos const&  blockPos,
        class BlockPos const&  buildBlockPos,
        class ItemStack const& item
    );

    MCAPI void startUsingItem(class ItemStack const& instance, int duration);

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(class BlockPos const& blockPos, class ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(class Actor& actor, int, int favoredSlot);

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
        class Vec3 const&                              spawnPosition,
        std::vector<gsl::not_null<class BlockSource*>> regions,
        class AABB                                     aabb,
        bool                                           adjustYToSolidGround,
        bool,
        bool  searchUp,
        bool  positionFromSave,
        bool  spawningAtForcedSpawn,
        short dimensionHeight
    );

    MCAPI static bool checkNeedAutoJump(
        class IConstBlockSource const&                             region,
        struct AABBShapeComponent const&                           aabbShape,
        struct ActorRotationComponent const&                       actorRotation,
        float                                                      movementSpeed,
        struct StateVectorComponent const&                         stateVector,
        class optional_ref<class GetCollisionShapeInterface const> collisionShapeInterface,
        float                                                      inputMoveX,
        float                                                      inputMoveZ
    );

    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent>
    getCustomHurtSound(class Mob& mob, ::ActorDamageCause cause);

    MCAPI static bool isDangerousVolume(class BlockSource& region, class AABB const& centeredAABB, bool checkForLava);

    MCAPI static class Player* tryGetFromComponent(
        class FlagComponent<struct PlayerComponentFlag> const&,
        class ActorOwnerComponent& actor,
        bool                       includeRemoved
    );

    MCAPI static class Player* tryGetFromEntity(class EntityContext& entity, bool includeRemoved);

    MCAPI static class Player* tryGetFromEntity(class StackRefResult<class EntityContext> entity, bool includeRemoved);

    MCAPI static void
    updatePlayerGameTypeEntityData(class EntityContext& entity, ::GameType gameType, ::GameType defaultGameType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canChangeGameType(::GameType newGameType) const;

    MCAPI bool _checkAndFixSpawnPosition(
        class Vec3&                                    spawnPosition,
        std::vector<gsl::not_null<class BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           checkBlockProperties,
        bool                                           searchUp,
        bool                                           positionFromSave
    );

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

    MCAPI static bool _isDangerousBlock(class Block const& block, bool checkForLava);

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

    MCAPI void _setPlayerGameType(::GameType gameType);

    MCAPI bool _shouldCrit(class Actor const& target) const;

    MCAPI bool
    _updateFroglightCountAndTestForAchievement(class ItemStack const& oldItem, class ItemStack const& newItem);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI std::shared_ptr<class ChunkViewSource> _createChunkSource$(class ChunkSource& mainChunkSource);

    MCAPI void _crit$(class Actor& actor);

    MCAPI void _fireDimensionChanged$();

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void _serverInitItemStackIds$();

    MCAPI bool _shouldProvideFeedbackOnArmorSet$(::ArmorSlot slot, class ItemStack const& item) const;

    MCAPI bool _shouldProvideFeedbackOnHandContainerItemSet$(::HandSlot handSlot, class ItemStack const& item) const;

    MCAPI bool add$(class ItemStack& item);

    MCAPI void addAdditionalSaveData$(class CompoundTag& entityTag) const;

    MCAPI void addExperience$(int xp);

    MCAPI void addLevels$(int levels);

    MCAPI void aiStep$();

    MCAPI bool attack$(class Actor& actor, ::ActorDamageCause const& cause);

    MCAPI bool canAddPassenger$(class Actor& passenger) const;

    MCAPI bool canBePulledIntoVehicle$() const;

    MCAPI bool canChangeDimensionsUsingPortal$() const;

    MCAPI bool canExistWhenDisallowMob$() const;

    MCAPI bool canFreeze$() const;

    MCAPI bool canInteractWithOtherEntitiesInGame$() const;

    MCAPI bool canObstructSpawningAndBlockPlacement$() const;

    MCAPI bool canStartSleepInBed$();

    MCAPI float causeFallDamageToActor$(float distance, float multiplier, class ActorDamageSource source);

    MCAPI void changeDimensionWithCredits$(DimensionType);

    MCAPI void checkMovementStats$(class Vec3 const&);

    MCAPI void clearVanishEnchantedItemsOnDeath$();

    MCAPI bool consumeTotem$();

    MCAPI void deleteContainerManager$();

    MCAPI void destroyRegion$();

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI void displayChatMessage$(std::string const& author, std::string const& message);

    MCAPI void displayClientMessage$(std::string const& message);

    MCAPI void displayTextObjectMessage$(
        class TextObjectRoot const& textObject,
        std::string const&          fromXuid,
        std::string const&          fromPlatformId
    );

    MCAPI void displayTextObjectWhisperMessage$(
        class ResolvedTextObject const& resolvedTextObject,
        std::string const&              xuid,
        std::string const&              platformId
    );

    MCAPI void displayTextObjectWhisperMessage$(
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    MCAPI void displayWhisperMessage$(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    MCAPI void doEnterWaterSplashEffect$();

    MCAPI void doExitWaterSplashEffect$();

    MCAPI bool drop$(class ItemStack const& item, bool randomly);

    MCAPI void dropEquipmentOnDeath$(class ActorDamageSource const& source);

    MCAPI void dropEquipmentOnDeath$();

    MCAPI void feed$(int itemId);

    MCAPI class HashedString const& getActorRendererId$() const;

    MCAPI std::vector<class ItemStack const*> getAllEquipment$() const;

    MCAPI std::vector<class ItemStack const*> getAllHand$() const;

    MCAPI class AnimationComponent& getAnimationComponent$();

    MCAPI class ItemStack const& getCarriedItem$() const;

    MCAPI ::CommandPermissionLevel getCommandPermissionLevel$() const;

    MCAPI ::StructureFeatureType getCurrentStructureFeature$() const;

    MCAPI class ItemStack const& getEquippedTotem$() const;

    MCAPI class IMinecraftEventing* getEventing$() const;

    MCAPI class Vec3 getInterpolatedRidingOffset$(float, int) const;

    MCAPI int getItemUseDuration$() const;

    MCAPI float getItemUseIntervalProgress$() const;

    MCAPI float getItemUseStartupProgress$() const;

    MCAPI std::optional<DimensionType> getLastDeathDimension$() const;

    MCAPI std::optional<class BlockPos> getLastDeathPos$() const;

    MCAPI float getMapDecorationRotation$() const;

    MCAPI uchar getMaxChunkBuildRadius$() const;

    MCAPI struct PlayerMovementSettings const& getMovementSettings$() const;

    MCAPI class mce::Color getNameTagTextColor$() const;

    MCAPI float getShadowRadius$() const;

    MCAPI float getSpeed$() const;

    MCAPI std::vector<class ChunkPos> const& getTickingOffsets$() const;

    MCAPI uint getUserId$() const;

    MCAPI std::string getXuid$() const;

    MCAPI void handleEntityEvent$(::ActorEvent id, int data);

    MCAPI bool hasDiedBefore$() const;

    MCAPI std::unique_ptr<class BodyControl> initBodyControl$();

    MCAPI void initHUDContainerManager$();

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI bool isActorRelevant$(class Actor const&);

    MCAPI bool isAutoJumpEnabled$() const;

    MCAPI bool isBlocking$() const;

    MCAPI bool isDamageBlocked$(class ActorDamageSource const& source) const;

    MCAPI bool isFireImmune$() const;

    MCAPI bool isImmobile$() const;

    MCAPI bool isInTrialMode$();

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI bool isLoading$() const;

    MCAPI bool isPlayerInitialized$() const;

    MCAPI bool isSilentObserver$() const;

    MCAPI bool isSimulated$() const;

    MCAPI bool isSleeping$() const;

    MCAPI void moveSpawnView$(class Vec3 const& spawnPosition, DimensionType dimensionType);

    MCAPI void moveView$();

    MCAPI void normalTick$();

    MCAPI void onLinkedSlotsChanged$();

    MCAPI void onMovePlayerPacketNormal$(class Vec3 const& pos, class Vec2 const& rot, float yHeadRot);

    MCAPI void onSuspension$();

    MCAPI void onSynchedDataUpdate$(int dataId);

    MCAPI void openBook$(int, bool, int, class BlockActor*);

    MCAPI void openChalkboard$(class ChalkboardBlockActor&, bool);

    MCAPI void openInventory$();

    MCAPI void openNpcInteractScreen$(std::shared_ptr<struct INpcDialogueData> npc);

    MCAPI void openPortfolio$();

    MCAPI void openSign$(class BlockPos const&, bool);

    MCAPI void openTrading$(struct ActorUniqueID const&, bool);

    MCAPI void passengerTick$();

    MCAPI void playEmote$(std::string const&, bool);

    MCAPI void prepareRegion$(class ChunkSource& mainChunkSource);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void remove$();

    MCAPI void requestMissingSubChunk$(class SubChunkPos const&);

    MCAPI void resetRot$();

    MCAPI void resetUserPos$(bool clearMore);

    MCAPI void respawn$();

    MCAPI void sendInventory$(bool);

    MCAPI void sendMotionPacketIfNeeded$(struct PlayerMovementSettings const&);

    MCAPI void sendNetworkPacket$(class Packet& packet) const;

    MCAPI void setAbilities$(class LayeredAbilities const& newAbilities);

    MCAPI void setArmor$(::ArmorSlot slot, class ItemStack const& item);

    MCAPI void setCarriedItem$(class ItemStack const& item);

    MCAPI void setOffhandSlot$(class ItemStack const& item);

    MCAPI void setPlayerGameType$(::GameType gameType);

    MCAPI void setSleeping$(bool val);

    MCAPI void setSpeed$(float _speed);

    MCAPI bool shouldDropDeathLoot$() const;

    MCAPI ::BedSleepingResult startSleepInBed$(class BlockPos const& bedBlockPos);

    MCAPI void startSpinAttack$();

    MCAPI void startSwimming$();

    MCAPI void stopLoading$();

    MCAPI void stopSleepInBed$(bool forcefulWakeUp, bool updateLevelList);

    MCAPI void stopSpinAttack$();

    MCAPI void stopSwimming$();

    MCAPI void suspendRegion$();

    MCAPI void
    teleportTo$(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI void tickWorld$(struct Tick const&);

    MCAPI std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket$();

    MCAPI void useItem$(class ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI static float const& DEFAULT_BB_HEIGHT();

    MCAPI static float const& DEFAULT_BB_WIDTH();

    MCAPI static float const& DEFAULT_PLAYER_EYE_OFFSET();

    MCAPI static float const& DEFAULT_PLAYER_HEIGHT_OFFSET();

    MCAPI static float const& DEFAULT_WALK_SPEED();

    MCAPI static float const& DISTANCE_TO_TRANSFORM_EVENT();

    MCAPI static float const& DISTANCE_TO_TRAVELLED_EVENT();

    MCAPI static class Attribute const& EXHAUSTION();

    MCAPI static class Attribute const& EXPERIENCE();

    MCAPI static int const& GLIDE_STOP_DELAY();

    MCAPI static class Attribute const& HUNGER();

    MCAPI static class Attribute const& LEVEL();

    MCAPI static float const& PLAYER_ALIVE_HEIGHT();

    MCAPI static float const& PLAYER_ALIVE_WIDTH();

    MCAPI static float const& PLAYER_DEAD_HEIGHT();

    MCAPI static float const& PLAYER_DEAD_WIDTH();

    MCAPI static int const& PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS();

    MCAPI static float const& PLAYER_SLEEPING_HEIGHT();

    MCAPI static float const& PLAYER_SLEEPING_WIDTH();

    MCAPI static class Attribute const& SATURATION();

    MCAPI static uint const& SPAWN_CHUNK_LARGE_JUMP();

    MCAPI static uint const& SPAWN_CHUNK_RADIUS();

    // NOLINTEND
};
