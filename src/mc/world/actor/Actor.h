#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/DistanceSortedActor.h"
#include "mc/world/level/ClipDefaults.h"
#include "mc/world/phys/HitResult.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/PaletteColor.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/actor/provider/ActorStatusProvider.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ActorDamageSource;

class Actor : public ::ActorStatusProvider {
public:
    // Actor inner types define
    enum class InitializationMethod : uchar {
        Invalid     = 0x0,
        Loaded      = 0x1,
        Spawned     = 0x2,
        Born        = 0x3,
        Transformed = 0x4,
        Updated     = 0x5,
        Event       = 0x6,
        Legacy      = 0x7,
    };

    // vptr 8
    uchar filler[1096 - 8]; // IDA BDS-WIN 1.20.61.01 ItemActor::ItemActor line=29

public:
    LLNDAPI class EntityContext&       getEntityContext();
    LLNDAPI class EntityContext const& getEntityContext() const;

    LLAPI void refresh();

    LLAPI optional_ref<Actor> clone(Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt) const;

    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI class Vec3 getFeetPos() const;

    LLNDAPI class Vec3 getHeadPos() const;

    LLNDAPI class BlockPos getFeetBlockPos() const;

    LLNDAPI bool isSimulatedPlayer() const;

    LLNDAPI bool isOnGround() const;

    LLAPI void setOnFire(int time, bool isEffect = true);
    LLAPI void stopFire();

    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurtByCause(
        float               damage,
        ActorDamageCause    cause    = ActorDamageCause::Override,
        optional_ref<Actor> attacker = std::nullopt
    );

    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            [](auto&&...) -> bool { return true; }
    ) const;

    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId);

    LLAPI void setName(std::string const& name);

    LLNDAPI float evalMolang(std::string const& expression);

    // prevent constructor by default
    Actor& operator=(Actor const&);
    Actor(Actor const&);
    Actor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool getStatusFlag(::ActorFlags flag) const;

    // vIndex: 1
    virtual void setStatusFlag(::ActorFlags flag, bool value);

    // vIndex: 2
    virtual bool hasComponent(class HashedString const& name) const;

    // vIndex: 3
    virtual void outOfWorld();

    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const&);

    // vIndex: 7
    virtual void reloadComponents(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 8
    virtual void _serverInitItemStackIds();

    // vIndex: 9
    virtual void _doInitialMove();

    // vIndex: 10
    virtual ~Actor();

    // vIndex: 11
    virtual void resetUserPos(bool);

    // vIndex: 12
    virtual ::ActorType getOwnerEntityType();

    // vIndex: 13
    virtual void remove();

    // vIndex: 14
    virtual class Vec3 getFiringPos() const;

    // vIndex: 15
    virtual float getInterpolatedBodyRot(float a) const;

    // vIndex: 16
    virtual float getInterpolatedHeadRot(float lerpFactor = 0.0f) const;

    // vIndex: 17
    virtual float getInterpolatedBodyYaw(float lerpFactor = 0.0f) const;

    // vIndex: 18
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 19
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 20
    virtual bool isFireImmune() const;

    // vIndex: 21
    virtual void blockedByShield(class ActorDamageSource const& source, class Actor& blocker);

    // vIndex: 22
    virtual bool canDisableShield();

    // vIndex: 23
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    // vIndex: 24
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 25
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 27
    virtual void baseTick();

    // vIndex: 28
    virtual void passengerTick();

    // vIndex: 29
    virtual bool startRiding(class Actor& vehicle);

    // vIndex: 30
    virtual void addPassenger(class Actor& passenger);

    // vIndex: 31
    virtual std::string getExitTip(std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    // vIndex: 32
    virtual std::string getEntityLocNameString() const;

    // vIndex: 33
    virtual bool isInWall() const;

    // vIndex: 34
    virtual bool isInvisible() const;

    // vIndex: 35
    virtual bool canShowNameTag() const;

    // vIndex: 36
    virtual std::string getFormattedNameTag() const;

    // vIndex: 37
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 39
    virtual class Vec3 getHeadLookVector(float lerpFactor = 0.0f) const;

    // vIndex: 40
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 41
    virtual float getBrightness(float a, class IConstBlockSource const& region) const;

    // vIndex: 42
    virtual void playerTouch(class Player&);

    // vIndex: 43
    virtual bool isImmobile() const;

    // vIndex: 44
    virtual bool isSilentObserver() const;

    // vIndex: 45
    virtual bool isSleeping() const;

    // vIndex: 46
    virtual void setSleeping(bool);

    // vIndex: 47
    virtual void setSneaking(bool value);

    // vIndex: 48
    virtual bool isBlocking() const;

    // vIndex: 49
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;

    // vIndex: 50
    virtual bool isAlive() const;

    // vIndex: 51
    virtual bool isOnFire() const;

    // vIndex: 52
    virtual bool isSurfaceMob() const;

    // vIndex: 53
    virtual bool isTargetable() const;

    // vIndex: 54
    virtual bool canAttack(class Actor* entity, bool) const;

    // vIndex: 55
    virtual void setTarget(class Actor* entity);

    // vIndex: 56
    virtual bool isValidTarget(class Actor*) const;

    // vIndex: 57
    virtual bool attack(class Actor& target, ::ActorDamageCause const&);

    // vIndex: 58
    virtual void performRangedAttack(class Actor& target, float);

    // vIndex: 59
    virtual void setOwner(struct ActorUniqueID ownerId);

    // vIndex: 60
    virtual void setSitting(bool value);

    // vIndex: 61
    virtual void onTame();

    // vIndex: 62
    virtual void onFailedTame();

    // vIndex: 63
    virtual void setStanding(bool value);

    // vIndex: 64
    virtual bool canPowerJump() const;

    // vIndex: 65
    virtual bool isEnchanted() const;

    // vIndex: 66
    virtual bool shouldRender() const;

    // vIndex: 67
    virtual void playAmbientSound();

    // vIndex: 68
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 70
    virtual ::ActorDamageCause getBlockDamageCause(class Block const& block) const;

    // vIndex: 71
    virtual bool doFireHurt(int amount);

    // vIndex: 72
    virtual void onLightningHit();

    // vIndex: 73
    virtual void feed(int itemId);

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 75
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 76
    virtual void despawn();

    // vIndex: 77
    virtual void setArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 78
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 79
    virtual int getArmorTextureIndexInSlot(::ArmorSlot) const;

    // vIndex: 80
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 81
    virtual void setEquippedSlot(::Puv::Legacy::EquipmentSlot, class ItemStack const&);

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

    // vIndex: 87
    virtual bool save(class CompoundTag& entityTag) const;

    // vIndex: 88
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 89
    virtual class HashedString const& queryEntityRenderer() const;

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 92
    virtual class AABB getLiquidAABB(::MaterialType liquidType) const;

    // vIndex: 93
    virtual void handleInsidePortal(class BlockPos const& portalPos);

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 95
    virtual void changeDimension(DimensionType toId);

    // vIndex: 96
    virtual void changeDimension(class ChangeDimensionPacket const&);

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 100
    virtual bool canAddPassenger(class Actor& passenger) const;

    // vIndex: 101
    virtual bool canPickupItem(class ItemStack const&) const;

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 103
    virtual bool inCaravan() const;

    // vIndex: 104
    virtual void sendMotionPacketIfNeeded(struct PlayerMovementSettings const& playerMovementSettings);

    // vIndex: 105
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 106
    virtual void startSwimming();

    // vIndex: 107
    virtual void stopSwimming();

    // vIndex: 108
    virtual void buildDebugInfo(std::string&) const;

    // vIndex: 109
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 110
    virtual int getDeathTime() const;

    // vIndex: 111
    virtual bool canBeAffected(uint id) const;

    // vIndex: 112
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 113
    virtual void onEffectRemoved(class MobEffectInstance& effect);

    // vIndex: 114
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 115
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 116
    virtual void openContainerComponent(class Player& player);

    // vIndex: 117
    virtual void swing();

    // vIndex: 118
    virtual void useItem(class ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    // vIndex: 119
    virtual void getDebugText(std::vector<std::string>& outputInfo);

    // vIndex: 120
    virtual float getMapDecorationRotation() const;

    // vIndex: 121
    virtual float getPassengerYRotation(class Actor const& passenger) const;

    // vIndex: 122
    virtual bool add(class ItemStack& item);

    // vIndex: 123
    virtual bool drop(class ItemStack const& item, bool randomly);

    // vIndex: 124
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const&);

    // vIndex: 125
    virtual bool canDestroyBlock(class Block const&) const;

    // vIndex: 126
    virtual void setAuxValue(int);

    // vIndex: 127
    virtual void startSpinAttack();

    // vIndex: 128
    virtual void stopSpinAttack();

    // vIndex: 129
    virtual void renderDebugServerState(class Options const&);

    // vIndex: 130
    virtual void kill();

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 132
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 133
    virtual void
    applySnapshot(class EntityContext const& snapshotEntity, class EntityContext const& originalSnapshotEntity);

    // vIndex: 134
    virtual float getNextStep(float moveDist);

    // vIndex: 135
    virtual void onPush(class Actor&);

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

    // vIndex: 141
    virtual void doWaterSplashEffect();

    // vIndex: 142
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, class ItemStack const& item) const;

    // vIndex: 143
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, class ItemStack const& item) const;

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 145
    virtual bool shouldTryMakeStepSound();

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 150
    virtual void _doAutoAttackOnTouch(class Actor&);

    MCAPI Actor(class ILevel& level, class EntityContext& entityContext);

    MCAPI Actor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void _sendDirtyActorData();

    MCAPI void _setActorTypeId(::ActorType type);

    MCAPI void _setLevelPtr(class ILevel* level);

    MCAPI void addCategory(::ActorCategory const& category);

    MCAPI void addDefinitionGroup(std::string const& name);

    MCAPI void addEffect(class MobEffectInstance const& effect);

    MCAPI bool addTag(std::string const& tag);

    MCAPI void applyImpulse(class Vec3 const& impulse);

    MCAPI void buildDebugGroupInfo(std::string& out) const;

    MCAPI class Vec3 buildForward() const;

    MCAPI void burn(int dmg, bool bInFire);

    MCAPI class Vec3 calcCenterPos() const;

    MCAPI float calculateAttackDamage(class Actor& entity);

    MCAPI bool canBeginOrContinueClimbingLadder() const;

    MCAPI bool canCurrentlySwim() const;

    MCAPI bool canFly() const;

    MCAPI bool canMate(class Actor const& partner) const;

    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(class Actor const& target) const;

    MCAPI bool canSee(class Vec3 const& v) const;

    MCAPI bool canSeeDaylight() const;

    MCAPI void celebrateHunt(int duration, bool special);

    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    MCAPI void chorusFruitTeleport(class Vec3 const& range);

    MCAPI void clearFishingHookID();

    MCAPI bool closerThan(class Actor const& e, float distance) const;

    MCAPI bool closerThan(class Actor const& e, float distanceXZ, float distanceY) const;

    MCAPI void consumeItem(class ItemActor& itemActor, int count);

    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int containerID);

    MCAPI class UpdateTradePacket createUpdateTradePacket(int containerID);

    MCAPI void deregisterTagsFromLevelCache();

    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const& pos) const;

    MCAPI float distanceTo(class Actor const& e) const;

    MCAPI float distanceTo(class Vec3 const& pos) const;

    MCAPI float distanceToSqr(class Actor const& e) const;

    MCAPI float distanceToSqr(class Vec3 const& pos) const;

    MCAPI void dropLeash(bool createItemDrop, bool cutRope);

    MCAPI void dropTowards(class ItemStack const& item, class Vec3 towards);

    MCAPI void equip(std::string const& lootTableFilePath);

    MCAPI void equip(struct EquipmentTable const& equipmentTable);

    MCAPI void equipFromEquipmentDefinition();

    MCAPI float evaluateSeatRotation(class RideableComponent const& rideable, bool useVehicleRenderParams);

    MCAPI bool executeEvent(std::string const& name, class VariantParameterList const& list);

    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    MCAPI class FishingHook* fetchFishingHook();

    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const& distance);

    MCAPI std::vector<struct DistanceSortedActor>
          fetchNearbyActorsSorted(class Vec3 const& distance, ::ActorType actorTypeId);

    MCAPI void forEachLeashedActor(std::function<void(gsl::not_null<class Actor*>)> callback) const;

    MCAPI class AABB const& getAABB() const;

    MCAPI class Vec2 const& getAABBDim() const;

    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const;

    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;

    MCAPI class ItemStack const& getArmor(::ArmorSlot slot) const;

    MCAPI class Vec3 getAttachPos(::ActorLocation location) const;

    MCAPI class Vec3 getAttachPos(::ActorLocation location, float alpha) const;

    MCAPI class AttributeInstance const& getAttribute(class Attribute const& attribute) const;

    MCAPI gsl::not_null<class BaseAttributeMap*> getAttributes();

    MCAPI gsl::not_null<class BaseAttributeMap const*> getAttributes() const;

    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const* actor) const;

    MCAPI class BlockPos getBlockTarget() const;

    MCAPI float getBrightness(float a) const;

    MCAPI bool getCanPickupItems() const;

    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const& item) const;

    MCAPI ::ActorCategory getCategories() const;

    MCAPI bool getChainedDamageEffects() const;

    MCAPI int getChestSlots() const;

    MCAPI bool getCollidableMob() const;

    MCAPI ::PaletteColor getColor() const;

    MCAPI ::PaletteColor getColor2() const;

    MCAPI float getCurrentSwimAmount() const;

    MCAPI bool getDamageNearbyMobs() const;

    MCAPI class ActorDefinitionDiffList const* getDiffList() const;

    MCAPI class ActorDefinitionDiffList* getDiffListNonConst();

    MCAPI class Dimension& getDimension() const;

    MCAPI class BlockSource& getDimensionBlockSource() const;

    MCAPI class BlockSource const& getDimensionBlockSourceConst() const;

    MCAPI class Dimension const& getDimensionConst() const;

    MCAPI DimensionType getDimensionId() const;

    MCAPI class MobEffectInstance const* getEffect(class MobEffect const& effect) const;

    MCAPI class MobEffectInstance const* getEffect(uint effectId) const;

    MCAPI class SynchedActorDataEntityWrapper& getEntityData();

    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const;

    MCAPI class StackRefResult<class EntityRegistry> getEntityRegistry();

    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();

    MCAPI ::ActorType getEntityTypeId() const;

    MCAPI int getEquipSlots() const;

    MCAPI int getEquipmentCount() const;

    MCAPI ::Puv::Legacy::EquipmentSlot getEquipmentSlotForItem(class ItemStack const& item) const;

    MCAPI class ItemStack const& getEquippedSlot(::Puv::Legacy::EquipmentSlot slot) const;

    MCAPI class Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

    MCAPI bool getFirstAvailableSeatPos(class Actor& potentialPassenger, class Vec3& result) const;

    MCAPI class Actor* getFirstPassenger() const;

    MCAPI int getHealth() const;

    MCAPI int getHurtDir() const;

    MCAPI int getHurtTime() const;

    MCAPI class ILevel& getILevel();

    MCAPI ::ActorInitializationMethod getInitializationMethod();

    MCAPI class Vec3 getInterpolatedPosition(float lerpFactor = 0.0f) const;

    MCAPI class Vec3 getInterpolatedRidingPosition(float a) const;

    MCAPI class Vec2 getInterpolatedRotation(float lerpFactor = 0.0f) const;

    MCAPI int getInventorySize() const;

    MCAPI bool getIsExperienceDropEnabled() const;

    MCAPI class Mob* getLastHurtByMob();

    MCAPI struct ActorUniqueID getLastHurtByMobID() const;

    MCAPI int getLastHurtByMobTime();

    MCAPI int getLastHurtByMobTimestamp();

    MCAPI class Player* getLastHurtByPlayer();

    MCAPI struct ActorUniqueID getLastHurtByPlayerID() const;

    MCAPI ::ActorDamageCause getLastHurtCause() const;

    MCAPI float getLastHurtDamage() const;

    MCAPI class Mob* getLastHurtMob();

    MCAPI int getLastHurtMobTimestamp();

    MCAPI uint64 getLastHurtTimestamp() const;

    MCAPI struct ActorUniqueID getLeashHolder() const;

    MCAPI class Level& getLevel();

    MCAPI class Level const& getLevel() const;

    MCAPI uint64 getLevelTimeStamp() const;

    MCAPI int getLimitedLifetimeTicks() const;

    MCAPI std::vector<struct ActorLink> getLinks() const;

    MCAPI class LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI float getMaxAutoStep() const;

    MCAPI int getMaxHealth() const;

    MCAPI class MolangVariableMap& getMolangVariables();

    MCAPI class AttributeInstance* getMutableAttribute(class Attribute const& attribute);

    MCAPI std::string const& getNameTag() const;

    MCAPI uint64 getNameTagAsHash() const;

    MCAPI class ItemStack const& getOffhandSlot() const;

    MCAPI int getOnDeathExperience();

    MCAPI class DynamicProperties& getOrAddDynamicProperties();

    MCAPI struct ActorUniqueID const& getOrCreateUniqueID() const;

    MCAPI class Mob* getOwner() const;

    MCAPI struct ActorUniqueID const getOwnerId() const;

    MCAPI int getPassengerIndex(class Actor const& passenger) const;

    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();

    MCAPI int getPersistingTradeRiches();

    MCAPI class Player* getPlayerOwner() const;

    MCAPI class Vec3 const& getPosDelta() const;

    MCAPI class Vec3& getPosDeltaNonConst();

    MCAPI class Vec3 const& getPosPrev() const;

    MCAPI class Vec3 const& getPosition() const;

    MCAPI float getRadius() const;

    MCAPI class Random& getRandom() const;

    MCAPI class RenderParams& getRenderParams();

    MCAPI float getRidingHeight() const;

    MCAPI class Vec2 const& getRotation() const;

    MCAPI class Vec2 const& getRotationPrev() const;

    MCAPI class ActorRuntimeID getRuntimeID() const;

    MCAPI int getShakeTime() const;

    MCAPI int getSkinID() const;

    MCAPI class SpatialActorNetworkData& getSpatialNetworkData();

    MCAPI float getSpeedInMetersPerSecond() const;

    MCAPI int getStrength() const;

    MCAPI int getStrengthMax() const;

    MCAPI int getStructuralIntegrity() const;

    MCAPI float getSwimAmount(float a) const;

    MCAPI std::vector<std::string> const getTags() const;

    MCAPI class Actor* getTarget() const;

    MCAPI struct ActorUniqueID getTargetId() const;

    MCAPI bool getTradeInterest() const;

    MCAPI class MerchantRecipeList* getTradeOffers();

    MCAPI class Player* getTradingPlayer() const;

    MCAPI int getVariant() const;

    MCAPI class Actor* getVehicle() const;

    MCAPI class Actor* getVehicleRoot() const;

    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;

    MCAPI float getVerticalSpeedInMetersPerSecond() const;

    MCAPI class Vec3 getViewVector(float lerpFactor = 0.0f) const;

    MCAPI class WeakRef<class EntityContext> const getWeakEntity() const;

    MCAPI float getYHeadRot() const;

    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const;

    MCAPI void handleFallDamage(float fallDistance, float multiplier, class ActorDamageSource source);

    MCAPI void handleLeftoverFallDamage(float damage, class ActorDamageSource source);

    MCAPI bool hasAnyEffects() const;

    MCAPI bool hasBeenHurtByMobInLastTicks(int numberOfTicks) const;

    MCAPI bool hasCategory(::ActorCategory categories) const;

    MCAPI bool hasDefinitionGroup(std::string const& name) const;

    MCAPI bool hasDimension() const;

    MCAPI bool hasEffect(class MobEffect const& effect) const;

    MCAPI bool hasFamily(class HashedString const& family) const;

    MCAPI bool hasFishingHook() const;

    MCAPI bool hasLevel() const;

    MCAPI bool hasPassenger() const;

    MCAPI bool hasPersistingTrade() const;

    MCAPI bool hasPlayerPassenger() const;

    MCAPI bool hasPriorityAmmunition() const;

    MCAPI bool hasRuntimeID() const;

    MCAPI bool hasSaddle() const;

    MCAPI bool hasTag(std::string const& tag) const;

    MCAPI bool hasTags() const;

    MCAPI bool hasTeleported() const;

    MCAPI bool hasTotemEquipped() const;

    MCAPI bool hasType(::ActorType types) const;

    MCAPI bool hasUniqueID() const;

    MCAPI void heal(int heal);

    MCAPI void healEffects(int);

    MCAPI bool hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool inDownwardFlowingLiquid() const;

    MCAPI void initActorProperties();

    MCAPI void initParams(class RenderParams& params);

    MCAPI void initParams(class VariantParameterList& params);

    MCAPI bool intersects(class Vec3 const& pos1, class Vec3 const& pos2) const;

    MCAPI bool isActorLocationInMaterial(::ActorLocation actorLocation, ::MaterialType type) const;

    MCAPI bool isAdventure() const;

    MCAPI bool isAffectedByWaterBottle() const;

    MCAPI bool isAngry() const;

    MCAPI bool isAttackableGamemode() const;

    MCAPI bool isAutonomous() const;

    MCAPI bool isBaby() const;

    MCAPI bool isBodyRotationBlocked() const;

    MCAPI bool isBreakingObstruction() const;

    MCAPI bool isBribed() const;

    MCAPI bool isCharged() const;

    MCAPI bool isChested() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isClimbing() const;

    MCAPI bool isControlledByLocalInstance() const;

    MCAPI bool isCreative() const;

    MCAPI bool isDancing() const;

    MCAPI bool isDead() const;

    MCAPI bool isDoorBreaker() const;

    MCAPI bool isDoorOpener() const;

    MCAPI bool isGlobal() const;

    MCAPI bool isIgnited() const;

    MCAPI bool isImmersedInWater() const;

    MCAPI bool isInClouds() const;

    MCAPI bool isInContactWithWater() const;

    MCAPI bool isInLava() const;

    MCAPI bool isInLove() const;

    MCAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInScaffolding() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCAPI bool isInWorld() const;

    MCAPI bool isInsidePortal() const;

    MCAPI bool isInvertedHealAndHarm() const;

    MCAPI bool isJumping() const;

    MCAPI bool isLayingDown() const;

    MCAPI bool isLeashed() const;

    MCAPI bool isLocalPlayer() const;

    MCAPI bool isMovedToLimbo() const;

    MCAPI bool isMovedToUnloadedChunk() const;

    MCAPI bool isMoving() const;

    MCAPI bool isOnHotBlock() const;

    MCAPI bool isOrphan() const;

    MCAPI bool isOutOfControl() const;

    MCAPI bool isOverScaffolding() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPacified() const;

    MCAPI bool isPassenger(class Actor const& passenger) const;

    MCAPI bool isPersistent() const;

    MCAPI bool isPlayer() const;

    MCAPI bool isPlayingDead() const;

    MCAPI bool isPowered() const;

    MCAPI bool isRemotePlayer() const;

    MCAPI bool isRemoved() const;

    MCAPI bool isResting() const;

    MCAPI bool isRiding() const;

    MCAPI bool isRiding(class Actor* targetVehicle) const;

    MCAPI bool isSheared() const;

    MCAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSneaking() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isStanding() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isSwimmer() const;

    MCAPI bool isSwimming() const;

    MCAPI bool isTame() const;

    MCAPI bool isTickingEntity() const;

    MCAPI bool isTouchingDamageBlock() const;

    MCAPI bool isTrading() const;

    MCAPI bool isTrusting() const;

    MCAPI bool isType(::ActorType type) const;

    MCAPI bool isUnderLiquid(::MaterialType type) const;

    MCAPI bool isUseNewTradeScreen() const;

    MCAPI bool isWalker() const;

    MCAPI bool const isWearingLeatherArmor() const;

    MCAPI bool isWorldBuilder() const;

    MCAPI void killed(class Actor& entity);

    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, int steps);

    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, float headYaw, int steps);

    MCAPI void loadEntityFlags(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void loadLinks(
        class CompoundTag const&       entityTag,
        std::vector<struct ActorLink>& links,
        class DataLoadHelper&          dataLoadHelper
    );

    MCAPI struct ActorUniqueID const& lovePartnerId() const;

    MCAPI void migrateUniqueID(struct ActorUniqueID id);

    MCAPI void move(class Vec3 const& posDelta);

    MCAPI void moveRelative(float xa, float ya, float za, float speed);

    MCAPI void moveTo(class Vec3 const& pos, class Vec2 const& rot);

    MCAPI void onAffectedByWaterBottle();

    MCAPI bool onClimbableBlock() const;

    MCAPI void onOnewayCollision(class AABB const& oneWayVolume);

    MCAPI void onOrphan();

    MCAPI bool operator!=(class Actor const& rhs) const;

    MCAPI bool operator==(class Actor const& rhs) const;

    MCAPI void pickUpItem(class ItemActor& itemActor, int count);

    MCAPI void playMovementSound();

    MCAPI void playSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, class Block const& block);

    MCAPI void playSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, int data);

    MCAPI void playSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent type,
        class Vec3 const&              pos,
        class Block const&             block,
        bool                           isGlobal
    );

    MCAPI void
    playSynchronizedSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, int data, bool isGlobal);

    MCAPI void positionAllPassengers();

    MCAPI void
    postGameEvent(class GameEvent const& gameEvent, class Vec3 const& origin, class Block const* affectedBlock);

    MCAPI void postSplashGameEvent();

    MCAPI bool pullInEntity(class Actor& e);

    MCAPI void pushBackActionEventToActionQueue(class ActionEvent actionEvent);

    MCAPI void queueBBUpdateFromDefinition();

    MCAPI void queueBBUpdateFromValue(class Vec2 const& value);

    MCAPI void refreshComponents();

    MCAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool beingDestroyed);

    MCAPI void removeDefinitionGroup(std::string const& name);

    MCAPI void removeEffect(int effectId);

    MCAPI void removeEffectParticles();

    MCAPI void removePersistingTrade();

    MCAPI bool removeTag(std::string const& tag);

    MCAPI void saveEntityFlags(class CompoundTag& entityTag) const;

    MCAPI std::unique_ptr<class ListTag> saveLinks() const;

    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag> offersTag, int riches);

    MCAPI void saveWithoutId(class CompoundTag& entityTag) const;

    MCAPI void sendActorDefinitionEventTriggered(std::string const& event);

    MCAPI void sendMotionToServer();

    MCAPI void serializationSetHealth(int newHealth);

    MCAPI void setAABB(class AABB const& aabb);

    MCAPI void setAABBDim(class Vec2 const& dim);

    MCAPI void setActorRendererId(class HashedString actorRendererId);

    MCAPI void setAutonomous(bool g);

    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCAPI void setBlockTarget(class BlockPos const& target);

    MCAPI void setBodyRotationBlocked(bool value);

    MCAPI void setBreakingObstruction(bool breaking);

    MCAPI void setCanClimb(bool value);

    MCAPI void setCanFly(bool value);

    MCAPI void setCanPowerJump(bool value);

    MCAPI void setChainedDamageEffects(bool active);

    MCAPI void setCharged(bool value);

    MCAPI void setClimbing(bool value);

    MCAPI void setColor(::PaletteColor color);

    MCAPI void setColor2(::PaletteColor color);

    MCAPI void setDamageNearbyMobs(bool damageNearbyMobs);

    MCAPI void setDancing(bool dancing);

    MCAPI void setDead(bool isDead);

    MCAPI void setDimension(class WeakRef<class Dimension> weakDimension);

    MCAPI void setDoorBreaker(bool breaker);

    MCAPI void setDoorOpener(bool opener);

    MCAPI void setEnchanted(bool value);

    MCAPI void setFallDistance(float distance);

    MCAPI void setFishingHookID(struct ActorUniqueID newUniqueID);

    MCAPI void setGlobal(bool g);

    MCAPI void setHurtDir(int hurtDir);

    MCAPI void setHurtTime(int hurtTime);

    MCAPI void setInLove(class Actor* lovePartner);

    MCAPI void setInterpolation(bool val);

    MCAPI void setInvisible(bool value);

    MCAPI void setIsExperienceDropEnabled(bool isExperienceDropEnabled);

    MCAPI void setJumping(bool jump);

    MCAPI void setLastHitBB(class Vec3 const& pos, class Vec3 const& radius);

    MCAPI void setLastHurtByMob(class Mob* mob);

    MCAPI void setLastHurtByPlayer(class Player* player);

    MCAPI void setLastHurtMob(class Actor* target);

    MCAPI void setLayingDown(bool value);

    MCAPI void setLeashHolder(struct ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setMarkVariant(int value);

    MCAPI void setMovedToLimbo(bool moveToLimbo);

    MCAPI void setMovedToUnloadedChunk(bool movedToUnloadedChunk);

    MCAPI void setMovementSoundDistanceOffset(float movementSoundDistanceOffset);

    MCAPI void setMoving(bool value);

    MCAPI void setNameTag(std::string const& name);

    MCAPI void setNameTagVisible(bool visible);

    MCAPI void setPersistent();

    MCAPI void setPos(class Vec3 const& pos);

    MCAPI void setPosDelta(class Vec3 const& posDelta);

    MCAPI void setPosDirectLegacy(class Vec3 const& pos);

    MCAPI void setPosPrev(class Vec3 const& posPrev);

    MCAPI void setPrevPosRotSetThisTick(bool value);

    MCAPI void setPreviousPosRot();

    MCAPI void setResting(bool value);

    MCAPI void setRotationDirectly(class Vec2 const& rot);

    MCAPI void setRotationPrev(class Vec2 const& rotation);

    MCAPI void setRotationPrevY(float rotY);

    MCAPI void setRotationWrapped(class Vec2 const& rot);

    MCAPI void setRotationX(float rotX);

    MCAPI void setRotationY(float rotY);

    MCAPI void setRuntimeID(class ActorRuntimeID id);

    MCAPI void setSaddle(bool saddled);

    MCAPI void setScared(bool status);

    MCAPI void setScoreTag(std::string const& score);

    MCAPI void setShakeTime(int time);

    MCAPI void setSkinID(int value);

    MCAPI void setStrength(int strength);

    MCAPI void setStrengthMax(int strength);

    MCAPI void setStructuralIntegrity(int damage);

    MCAPI void setStunned(bool value);

    MCAPI void setSwimmer(bool swimmer);

    MCAPI void setTempted(bool tempted);

    MCAPI void setTradeInterest(bool interested);

    MCAPI void setTradingPlayer(class Player* player);

    MCAPI void setUniqueID(struct ActorUniqueID id);

    MCAPI void setVariant(int value);

    MCAPI void setVelocity(class Vec3 const& vel);

    MCAPI void setWASDControlled(bool value);

    MCAPI void setWalker(bool isWalker);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCAPI bool shouldOrphan(class BlockSource& source);

    MCAPI bool shouldTick() const;

    MCAPI bool shouldUpdateEffects() const;

    MCAPI class ItemActor* spawnAtLocation(class ItemStack const& item, float yOffs);

    MCAPI void spawnEatParticles(class ItemStack const& itemInUse, int count);

    MCAPI void spinAttack();

    MCAPI void stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(class Vec3 const& pos, int cause, int entityType);

    MCAPI void thawFreezeEffect();

    MCAPI bool tick(class BlockSource& region);

    MCAPI void transferTickingArea(class Dimension& toDimension);

    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    MCAPI std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor item) const;

    MCAPI bool tryTeleportTo(class Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    MCAPI void updateAnimationComponentOnServer();

    MCAPI void updateDescription();

    MCAPI void updateDimensionChunkMove();

    MCAPI void updateInvisibilityStatus();

    MCAPI void updateMolangVariables(class RenderParams& renderParams);

    MCAPI void updateTickingData();

    MCAPI bool useSaddle(class ItemStackBase& item, class Player* player);

    MCAPI bool wasHurt();

    MCAPI bool wasLastHitByPlayer();

    MCAPI bool wasLoadedFromNBTThisFrame() const;

    MCAPI void wobble();

    MCAPI static void _moveRelative(class Vec3& posDelta, float yRotDegrees, float xa, float ya, float za, float speed);

    MCAPI static class Vec3 buildForward(class Vec2 rotation);

    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(
        class Vec3 const&                                          pos,
        class AABB                                                 box,
        class IConstBlockSource const&                             region,
        class optional_ref<class GetCollisionShapeInterface const> other
    );

    MCAPI static class Vec3 getCenter(
        float                              a,
        struct AABBShapeComponent const&   aabbShapeComponent,
        struct StateVectorComponent const& stateVectorComponent,
        float                              heightOffset
    );

    MCAPI static class MobEffectInstance const*
    getEffect(std::vector<class MobEffectInstance> const& effects, class MobEffect const& effect);

    MCAPI static class Vec3 getInterpolatedPosition(float a, struct StateVectorComponent const& stateVectorComponent);

    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const& prevRot, class Vec2 const& rot, float a);

    MCAPI static class AABB getLiquidAABB(class AABB const& aabb, ::MaterialType liquidType);

    MCAPI static float getLiquidFlowStrength(::MaterialType liquidType);

    MCAPI static class Vec3 getViewVector(struct ActorRotationComponent const& actorRotation, float a);

    MCAPI static class Vec3 getViewVector(class Vec2 const& prevRot, class Vec2 const& rot, float a);

    MCAPI static bool isImmobile(class EntityContext const& entity);

    MCAPI static bool isInLiquid(
        ::MaterialType                 liquidType,
        class IConstBlockSource const& region,
        class AABB const&              mainAABB,
        std::vector<class AABB> const& subAABBs
    );

    MCAPI static class Actor* tryGetFromComponent(class ActorOwnerComponent& component, bool includeRemoved);

    MCAPI static class Actor const*
    tryGetFromComponent(class ActorOwnerComponent const& component, bool includeRemoved);

    MCAPI static class Actor* tryGetFromEntity(class EntityContext& entity, bool includeRemoved);

    MCAPI static class Actor* tryGetFromEntity(class StackRefResult<class EntityContext> entity, bool includeRemoved);

    MCAPI static class Actor*
    tryGetFromEntity(class StrictEntityContext const& entity, class EntityRegistry& registry, bool includeRemoved);

    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const& entity, bool includeRemoved);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class ItemActor const* _drop(class ItemStack const& item, bool randomly);

    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst();

    MCAPI class AnimationComponent& _getAnimationComponent(
        std::shared_ptr<class AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType              group
    );

    MCAPI void _initializeMaxAutoStep(float maxAutoStep);

    MCAPI bool _isDeathLootAllowed() const;

    MCAPI bool _isHeadInWater() const;

    MCAPI void _setDimensionTransitionComponent(DimensionType fromId, DimensionType toId, int portalCooldown);

    MCAPI void _setHandContainerItem(class ItemStack const& item, ::HandSlot handSlot);

    MCAPI void _setHeightOffset(float heightOffset);

    MCAPI void _setPos(class Vec3 const& pos);

    MCAPI void _setPosPrev(class Vec3 const& posPrev);

    MCAPI void enableAutoSendPosRot(bool enable);

    MCAPI class Block const& getBlockWhenClimbing();

    MCAPI void markHurt();

    MCAPI void pushOutOfBlocks(class Vec3 const& vec);

    MCAPI void spawnTrailBubbles();

    MCAPI void updateInsideBlock();

    MCAPI void updateWaterState();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents();

    MCAPI void _addActorNonBuiltInComponents();

    MCAPI void _damageNearbyMobs();

    MCAPI void _initializeLeashRopeSystem(class Actor* holder);

    MCAPI bool _isItemStackNetManagerEnabled() const;

    MCAPI void _moveHitboxTo(class Vec3 const& pos);

    MCAPI void _notifyMobEffectsOnRemoveAfterDeath();

    MCAPI void _serializeComponents(class CompoundTag& tag) const;

    MCAPI void _setupServerAnimationComponent();

    MCAPI void _tryPlantWitherRose();

    MCAPI void _updateComposition(bool reload);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void* ctor$(class ILevel& level, class EntityContext& entityContext);

    MCAPI void dtor$();

    MCAPI void _doAutoAttackOnTouch$(class Actor&);

    MCAPI void _doInitialMove$();

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void _playStepSound$(class BlockPos const& pos, class Block const& onBlock);

    MCAPI void _serverInitItemStackIds$();

    MCAPI bool _shouldProvideFeedbackOnArmorSet$(::ArmorSlot slot, class ItemStack const& item) const;

    MCAPI bool _shouldProvideFeedbackOnHandContainerItemSet$(::HandSlot handSlot, class ItemStack const& item) const;

    MCAPI bool add$(class ItemStack& item);

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void addPassenger$(class Actor& passenger);

    MCAPI void
    applySnapshot$(class EntityContext const& snapshotEntity, class EntityContext const& originalSnapshotEntity);

    MCAPI bool attack$(class Actor& target, ::ActorDamageCause const&);

    MCAPI void baseTick$();

    MCAPI void blockedByShield$(class ActorDamageSource const& source, class Actor& blocker);

    MCAPI void buildDebugInfo$(std::string&) const;

    MCAPI bool canAddPassenger$(class Actor& passenger) const;

    MCAPI bool canAttack$(class Actor* entity, bool) const;

    MCAPI bool canBeAffected$(uint id) const;

    MCAPI bool canBeAffectedByArrow$(class MobEffectInstance const& effect) const;

    MCAPI bool canBePulledIntoVehicle$() const;

    MCAPI bool canChangeDimensionsUsingPortal$() const;

    MCAPI bool canDestroyBlock$(class Block const&) const;

    MCAPI bool canDisableShield$();

    MCAPI bool canFreeze$() const;

    MCAPI bool canInteractWithOtherEntitiesInGame$() const;

    MCAPI bool canObstructSpawningAndBlockPlacement$() const;

    MCAPI bool canPickupItem$(class ItemStack const&) const;

    MCAPI bool canPowerJump$() const;

    MCAPI bool canShowNameTag$() const;

    MCAPI bool canSynchronizeNewEntity$() const;

    MCAPI float causeFallDamageToActor$(float, float, class ActorDamageSource);

    MCAPI void changeDimension$(DimensionType toId);

    MCAPI void changeDimension$(class ChangeDimensionPacket const&);

    MCAPI bool consumeTotem$();

    MCAPI void despawn$();

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI void doEnterWaterSplashEffect$();

    MCAPI void doExitWaterSplashEffect$();

    MCAPI bool doFireHurt$(int amount);

    MCAPI void doWaterSplashEffect$();

    MCAPI bool drop$(class ItemStack const& item, bool randomly);

    MCAPI void feed$(int itemId);

    MCAPI class HashedString const& getActorRendererId$() const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getAmbientSound$() const;

    MCAPI class AnimationComponent& getAnimationComponent$();

    MCAPI float getArmorColorInSlot$(::ArmorSlot, int) const;

    MCAPI ::ArmorMaterialType getArmorMaterialTypeInSlot$(::ArmorSlot) const;

    MCAPI int getArmorTextureIndexInSlot$(::ArmorSlot) const;

    MCAPI ::ActorDamageCause getBlockDamageCause$(class Block const& block) const;

    MCAPI float getBrightness$(float a, class IConstBlockSource const& region) const;

    MCAPI class ItemStack const& getCarriedItem$() const;

    MCAPI ::CommandPermissionLevel getCommandPermissionLevel$() const;

    MCAPI struct ActorUniqueID getControllingPlayer$() const;

    MCAPI int getDeathTime$() const;

    MCAPI void getDebugText$(std::vector<std::string>& outputInfo);

    MCAPI std::string getEntityLocNameString$() const;

    MCAPI class ItemStack const& getEquippedTotem$() const;

    MCAPI std::string getExitTip$(std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCAPI class Vec3 getFiringPos$() const;

    MCAPI std::string getFormattedNameTag$() const;

    MCAPI class Vec3 getHeadLookVector$(float a) const;

    MCAPI bool getInteraction$(class Player& player, class ActorInteraction& interaction, class Vec3 const&);

    MCAPI float getInterpolatedBodyRot$(float a) const;

    MCAPI float getInterpolatedBodyYaw$(float) const;

    MCAPI float getInterpolatedHeadRot$(float) const;

    MCAPI class Vec3 getInterpolatedRidingOffset$(float, int) const;

    MCAPI std::optional<DimensionType> getLastDeathDimension$() const;

    MCAPI std::optional<class BlockPos> getLastDeathPos$() const;

    MCAPI class AABB getLiquidAABB$(::MaterialType liquidType) const;

    MCAPI float getMapDecorationRotation$() const;

    MCAPI class mce::Color getNameTagTextColor$() const;

    MCAPI float getNextStep$(float moveDist);

    MCAPI ::ActorType getOwnerEntityType$();

    MCAPI float getPassengerYRotation$(class Actor const& passenger) const;

    MCAPI float getShadowRadius$() const;

    MCAPI struct ActorUniqueID getSourceUniqueID$() const;

    MCAPI bool getStatusFlag$(::ActorFlags flag) const;

    MCAPI float getYawSpeedInDegreesPerSecond$() const;

    MCAPI void handleEntityEvent$(::ActorEvent eventId, int data);

    MCAPI void handleInsidePortal$(class BlockPos const& portalPos);

    MCAPI bool hasComponent$(class HashedString const& name) const;

    MCAPI bool hasDiedBefore$() const;

    MCAPI bool inCaravan$() const;

    MCAPI void initializeComponents$(::ActorInitializationMethod method, class VariantParameterList const&);

    MCAPI bool isAlive$() const;

    MCAPI bool isBlocking$() const;

    MCAPI bool isDamageBlocked$(class ActorDamageSource const&) const;

    MCAPI bool isEnchanted$() const;

    MCAPI bool isFireImmune$() const;

    MCAPI bool isImmobile$() const;

    MCAPI bool isInWall$() const;

    MCAPI bool isInvisible$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI bool isOnFire$() const;

    MCAPI bool isSilentObserver$() const;

    MCAPI bool isSleeping$() const;

    MCAPI bool isSurfaceMob$() const;

    MCAPI bool isTargetable$() const;

    MCAPI bool isValidTarget$(class Actor*) const;

    MCAPI void kill$();

    MCAPI void lerpMotion$(class Vec3 const& delta);

    MCAPI bool load$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void normalTick$();

    MCAPI void onEffectRemoved$(class MobEffectInstance& effect);

    MCAPI void onFailedTame$();

    MCAPI void onLightningHit$();

    MCAPI void onPush$(class Actor&);

    MCAPI void onSynchedDataUpdate$(int dataId);

    MCAPI void onTame$();

    MCAPI void openContainerComponent$(class Player& player);

    MCAPI void outOfWorld$();

    MCAPI void passengerTick$();

    MCAPI void performRangedAttack$(class Actor& target, float);

    MCAPI void playAmbientSound$();

    MCAPI void playerTouch$(class Player&);

    MCAPI class HashedString const& queryEntityRenderer$() const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadComponents$(::ActorInitializationMethod, class VariantParameterList const&);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod, class VariantParameterList const&);

    MCAPI void reloadHardcodedClient$(::ActorInitializationMethod, class VariantParameterList const&);

    MCAPI void remove$();

    MCAPI void renderDebugServerState$(class Options const&);

    MCAPI void resetUserPos$(bool);

    MCAPI bool save$(class CompoundTag& entityTag) const;

    MCAPI void sendMotionPacketIfNeeded$(struct PlayerMovementSettings const& playerMovementSettings);

    MCAPI void setArmor$(::ArmorSlot slot, class ItemStack const& item);

    MCAPI void setAuxValue$(int);

    MCAPI void setCarriedItem$(class ItemStack const& item);

    MCAPI void setEquippedSlot$(::Puv::Legacy::EquipmentSlot, class ItemStack const&);

    MCAPI void setOffhandSlot$(class ItemStack const& item);

    MCAPI void setOwner$(struct ActorUniqueID ownerId);

    MCAPI void setSitting$(bool value);

    MCAPI void setSleeping$(bool);

    MCAPI void setSneaking$(bool value);

    MCAPI void setStanding$(bool value);

    MCAPI void setStatusFlag$(::ActorFlags flag, bool value);

    MCAPI void setTarget$(class Actor* entity);

    MCAPI bool shouldDropDeathLoot$() const;

    MCAPI bool shouldRender$() const;

    MCAPI bool shouldTryMakeStepSound$();

    MCAPI bool startRiding$(class Actor& vehicle);

    MCAPI void startSpinAttack$();

    MCAPI void startSwimming$();

    MCAPI void stopSpinAttack$();

    MCAPI void stopSwimming$();

    MCAPI void swing$();

    MCAPI void teleportTo$(class Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    MCAPI std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket$();

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams&);

    MCAPI void useItem$(class ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI static int const& DAMAGE_NEARBY_MOBS_DURATION();

    MCAPI static float const& DEFAULT_MAX_DISTANCE_OPTIMIZATION();

    MCAPI static uint64 const& DEFAULT_MAX_TICK_DELAY_OPTIMIZATION();

    // NOLINTEND
};
