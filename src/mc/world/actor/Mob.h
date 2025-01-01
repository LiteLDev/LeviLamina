#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/TravelType.h"
#include "mc/world/item/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockPos;
class BodyControl;
class ClockSpriteCalculator;
class CompassSpriteCalculator;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class EntityContext;
class GoalSelectorComponent;
class HashedString;
class ItemStack;
class Level;
class ListTag;
class Options;
class Player;
class SaveContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct BuiltInMobComponents;
struct Description;
struct InterpolationPair;
struct JumpPreventionResult;
struct LegacyGoalDefinition;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mHurtDuration;
    ::ll::TypedStorage<4, 4, float>                      mHurtDir;
    ::ll::TypedStorage<4, 4, float>                      mOTilt;
    ::ll::TypedStorage<4, 4, float>                      mTilt;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;
    ::ll::TypedStorage<4, 4, float>                      mAttackAnim;
    ::ll::TypedStorage<4, 4, int>                        mSwingTime;
    ::ll::TypedStorage<4, 4, int>                        mDeathTime;
    ::ll::TypedStorage<8, 16, ::BuiltInMobComponents>    mBuiltInMobComponents;
    ::ll::TypedStorage<4, 4, float>                      mMovementComponentCurrentSpeed;
    ::ll::TypedStorage<1, 1, bool>                       mSwinging;
    ::ll::TypedStorage<1, 1, bool>                       mSurfaceMob;
    ::ll::TypedStorage<1, 1, bool>                       mNaturallySpawned;
    ::ll::TypedStorage<1, 1, bool>                       mWantsToBeJockey;
    ::ll::TypedStorage<1, 1, bool>                       mSpawnedXP;
    ::ll::TypedStorage<1, 1, bool>                       mHasBoundOrigin;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>      mActuallyDoKnockbackOrNotReallyBadHackDoNotUse;
    ::ll::TypedStorage<1, 1, ::MobSpawnMethod>           mSpawnMethod;
    ::ll::TypedStorage<1, 1, bool>                       mCreateAiOnReload;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanHead;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mCaravanTail;
    ::ll::TypedStorage<4, 4, float>                      mOAttackAnim;
    ::ll::TypedStorage<4, 12, ::BlockPos>                mBoundOrigin;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mTargetCaptainId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 8
    virtual ~Mob() /*override*/;

    // vIndex: 143
    virtual void
    knockback(::Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    // vIndex: 124
    virtual void kill() /*override*/;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 126
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 144
    virtual void spawnAnim();

    // vIndex: 48
    virtual bool isAlive() const /*override*/;

    // vIndex: 43
    virtual bool isSleeping() const /*override*/;

    // vIndex: 44
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 46
    virtual bool isBlocking() const /*override*/;

    // vIndex: 145
    virtual void setSprinting(bool shouldSprint);

    // vIndex: 98
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 146
    virtual ::SharedTypes::Legacy::LevelSoundEvent getDeathSound();

    // vIndex: 147
    virtual float getSpeed() const;

    // vIndex: 148
    virtual void setSpeed(float speed);

    // vIndex: 16
    virtual float getYawSpeedInDegreesPerSecond() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 25
    virtual void baseTick() /*override*/;

    // vIndex: 149
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 68
    virtual bool doFireHurt(int amount) /*override*/;

    // vIndex: 150
    virtual void aiStep();

    // vIndex: 151
    virtual void pushActors();

    // vIndex: 152
    virtual bool checkSpawnRules(bool);

    // vIndex: 153
    virtual bool checkSpawnObstruction() const;

    // vIndex: 28
    virtual void addPassenger(::Actor& newPassenger) /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 154
    virtual int getItemUseDuration() const;

    // vIndex: 155
    virtual float getItemUseStartupProgress() const;

    // vIndex: 156
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 113
    virtual void swing() /*override*/;

    // vIndex: 157
    virtual float getMaxHeadXRot();

    // vIndex: 41
    virtual bool isImmobile() const /*override*/;

    // vIndex: 19
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker) /*override*/;

    // vIndex: 52
    virtual void setTarget(::Actor* target) /*override*/;

    // vIndex: 54
    virtual bool attack(::Actor& target, ::ActorDamageCause const& cause) /*override*/;

    // vIndex: 158
    virtual bool isAlliedTo(::Mob*);

    // vIndex: 159
    virtual bool doHurtTarget(::Actor* target, ::ActorDamageCause const& cause);

    // vIndex: 67
    virtual ::ActorDamageCause getBlockDamageCause(::Block const& block) const /*override*/;

    // vIndex: 99
    virtual bool inCaravan() const /*override*/;

    // vIndex: 160
    virtual int getArmorValue() const;

    // vIndex: 161
    virtual void hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    // vIndex: 162
    virtual void setDamagedArmor(::ArmorSlot slot, ::ItemStack const& item);

    // vIndex: 163
    virtual void sendArmorDamage(::std::bitset<5> const);

    // vIndex: 164
    virtual void sendArmor(::std::bitset<5> const armorSlots);

    // vIndex: 75
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot slot) const /*override*/;

    // vIndex: 76
    virtual int getArmorTextureIndexInSlot(::ArmorSlot slot) const /*override*/;

    // vIndex: 77
    virtual float getArmorColorInSlot(::ArmorSlot slot, int channelRGBA) const /*override*/;

    // vIndex: 165
    virtual ::std::vector<::ItemStack const*> getAllHand() const;

    // vIndex: 166
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const;

    // vIndex: 106
    virtual int getDeathTime() const /*override*/;

    // vIndex: 168
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source);

    // vIndex: 167
    virtual void dropEquipmentOnDeath();

    // vIndex: 169
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 170
    virtual void sendInventory(bool);

    // vIndex: 104
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    // vIndex: 13
    virtual float getInterpolatedBodyRot(float a) const /*override*/;

    // vIndex: 14
    virtual float getInterpolatedHeadRot(float a) const /*override*/;

    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float a) const /*override*/;

    // vIndex: 50
    virtual bool isSurfaceMob() const /*override*/;

    // vIndex: 171
    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    // vIndex: 172
    virtual bool createAIGoals();

    // vIndex: 173
    virtual void onBorn(::Actor&, ::Actor&);

    // vIndex: 174
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    // vIndex: 175
    virtual void setTransitioningSitting(bool value);

    // vIndex: 0
    virtual bool hasComponent(::HashedString const& name) const /*override*/;

    // vIndex: 90
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 176
    virtual float _getWalkTargetValue(::BlockPos const&);

    // vIndex: 177
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 61
    virtual bool canPowerJump() const /*override*/;

    // vIndex: 78
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 123
    virtual void renderDebugServerState(::Options const& options) /*override*/;

    // vIndex: 87
    virtual bool canFreeze() const /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 178
    virtual ::std::unique_ptr<::BodyControl> initBodyControl();

    // vIndex: 94
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 1
    virtual void outOfWorld() /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool) /*override*/;

    // vIndex: 179
    virtual void newServerAiStep();

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 180
    virtual void tickDeath();

    // vIndex: 7
    virtual void _doInitialMove() /*override*/;

    // vIndex: 181
    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Mob(::Level& level, ::EntityContext& entityContext);

    MCAPI
    Mob(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);

    MCAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    MCAPI void _doSprintParticleEffect();

    MCAPI bool _initHardCodedComponents(bool isClientSide);

    MCAPI void _initialize(::EntityContext& entityContext, bool isClientSide);

    MCAPI bool _isDoingMaceSmashAttack() const;

    MCAPI void _logMobComponentInitializationError(
        ::std::string const& typeName,
        ::std::string const& existingName,
        char const*          descriptionJsonName
    );

    MCAPI void _processSoulSpeed();

    MCAPI void _registerMobAttributes();

    MCAPI ::GoalSelectorComponent* _tryGetGoalSelectorComponent();

    MCAPI void _updateSprintingState();

    MCAPI void _verifyAttributes();

    MCAPI void
    addSpeedModifier(::mce::UUID const& attributeID, ::std::string const& attributeName, float speedModifier);

    MCAPI void ate();

    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);

    MCAPI bool checkForPostHitDamageImmunity(float damageDifference, ::ActorDamageSource const& source);

    MCAPI bool checkTotemDeathProtection(::ActorDamageSource const& killingDamage);

    MCAPI void clearMainHandSlot();

    MCAPI void containerChanged(int iSlot);

    MCAPI void createAI(::std::vector<::LegacyGoalDefinition> goals);

    MCAPI void dropBags();

    MCAPI void dropContainer();

    MCAPI void emitJumpPreventedEvent(::BlockPos const& pos);

    MCAPI void frostWalk();

    MCAPI float getArmorCoverPercentage() const;

    MCAPI int getArmorTypeHash();

    MCAPI float getAttackAnim(float a);

    MCAPI ::BlockPos getBoundOrigin() const;

    MCAPI ::ActorUniqueID getCaravanHead() const;

    MCAPI int getCaravanSize() const;

    MCAPI int getCurrentSwingDuration();

    MCAPI float getDamageAfterArmorReduction(::ActorDamageSource const& source, float damage) const;

    MCAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);

    MCAPI float getDamageAfterPostHitDamageImmunityReduction(::ActorDamageSource const& source, float damage) const;

    MCAPI float getDamageAfterResistanceEffect(::ActorDamageSource const& source, float damage) const;

    MCAPI ::ActorDamageCause getDamageCause() const;

    MCAPI int getEatCounter() const;

    MCAPI float getExpectedFallDamage(float distance, float multiplier) const;

    MCAPI ::Mob* getFirstCaravanHead();

    MCAPI int getGlidingTicks() const;

    MCAPI ::ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    MCAPI float getJumpEffectAmplifierValue();

    MCAPI float getJumpMultiplier();

    MCAPI ::JumpPreventionResult getJumpPrevention();

    MCAPI int getJumpTicks() const;

    MCAPI int getMeleeKnockbackBonus();

    MCAPI float getMovementComponentCurrentSpeed() const;

    MCAPI int getNoActionTime() const;

    MCAPI ::ActorUniqueID getTargetCaptain() const;

    MCAPI ::TravelType getTravelType();

    MCAPI float getYBodyRotation() const;

    MCAPI ::InterpolationPair getYBodyRotationsNewOld() const;

    MCAPI bool hasBoundOrigin() const;

    MCAPI bool hasCaravanTail() const;

    MCAPI void hurtArmor(::ActorDamageSource const& source, int dmg);

    MCAPI bool isAbleToMove() const;

    MCAPI bool isEating() const;

    MCAPI bool isGliding() const;

    MCAPI bool isLayingEgg() const;

    MCAPI bool isPregnant() const;

    MCAPI bool isSprinting() const;

    MCAPI bool isTransitioningSitting() const;

    MCAPI void joinCaravan(::Mob* head);

    MCAPI void jumpFromGround();

    MCAPI void knockback(::Actor* source, int dmg, float xd, float zd);

    MCAPI void knockback(::Actor* source, int dmg, float xd, float zd, float horizontalPower, float verticalPower);

    MCAPI void leaveCaravan();

    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);

    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI void onPlayerJump(int jumpAmount);

    MCAPI void playSpawnSound();

    MCAPI void removeSpeedModifier(::mce::UUID const& attributeID);

    MCAPI void resetAttributes();

    MCAPI void resetNoActionTime();

    MCAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;

    MCAPI void sendArmorDamageSlot(::ArmorSlot slot);

    MCAPI void sendArmorSlot(::ArmorSlot slot);

    MCAPI void setEatCounter(int value);

    MCAPI void setEating(bool value);

    MCAPI void setIsLayingEgg(bool layingEgg);

    MCAPI void setIsPregnant(bool pregnant);

    MCAPI void setJumpTicks(int ticks);

    MCAPI void setMovementComponentCurrentSpeed(float movementComponentCurrentSpeed);

    MCAPI void setNaturallySpawned(bool naturallySpawned);

    MCAPI void setSpawnMethod(::MobSpawnMethod method);

    MCAPI void setSpeedModifier(float speed);

    MCAPI void setSurfaceMob(bool isSurfaceMob);

    MCAPI void setTargetCaptain(::ActorUniqueID id);

    MCAPI void setYBodyRotation(float rotation);

    MCAPI void setYBodyRotations(float rotation, float oldRotation);

    MCAPI bool shouldApplyWaterGravity();

    MCAPI void snapToYBodyRot(float yBodyRot);

    MCAPI void snapToYHeadRot(float yHeadRot);

    MCAPI void tickMobEffectsVisuals();

    MCAPI void tryFrostWalk();

    MCAPI void tryProcessSoulSpeed();

    MCAPI void tryUpdateAI();

    MCAPI void updateAttackAnim();

    MCAPI void updateEquipment();

    MCAPI void updateGlidingDurability();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static char const* _getDescriptionJsonName(::Description const* description);

    MCAPI static ::Mob* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& ARMOR_DAMAGE_DIVISOR();

    MCAPI static float const& ARMOR_PROTECTION_DIVIDER();

    MCAPI static float const& ASCEND_BLOCK_BY_JUMPING_SPEED();

    MCAPI static float const& BASE_ARMOR_TOUGHNESS();

    MCAPI static float const& DEFAULT_GRAVITY();

    MCAPI static float const& FRICTION_CONSTANT();

    MCAPI static float const& FRICTION_CONSTANT_MODIFIED();

    MCAPI static float const& FRICTION_MODIFIER();

    MCAPI static float const& GLIDING_FALL_RESET_DELTA();

    MCAPI static float const& LADDER_CLIMB_SPEED();

    MCAPI static float const& MAX_ARMOR();

    MCAPI static int const& MAX_INACTIVITY_TIMER();

    MCAPI static float const& MIN_ARMOR_RATIO();

    MCAPI static float const& NUM_ARMOR_ITEMS();

    MCAPI static float const& PLAYER_SWIMMING_SURFACE_OFFSET();

    MCAPI static int const& REMOVE_PASSENGERS_DELAY();

    MCAPI static float const& SLOW_FALL_GRAVITY();

    MCAPI static int const& SPAWN_XP_DELAY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::EntityContext& entityContext);

    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
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

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void
    $knockback(::Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $spawnAnim();

    MCAPI bool $isAlive() const;

    MCAPI bool $isSleeping() const;

    MCAPI void $setSleeping(bool val);

    MCAPI bool $isBlocking() const;

    MCAPI void $setSprinting(bool shouldSprint);

    MCAPI bool $canBePulledIntoVehicle() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getDeathSound();

    MCAPI float $getSpeed() const;

    MCAPI void $setSpeed(float speed);

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $aiStep();

    MCAPI void $pushActors();

    MCAPI bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI void $addPassenger(::Actor& newPassenger);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI int $getItemUseDuration() const;

    MCAPI float $getItemUseStartupProgress() const;

    MCAPI float $getItemUseIntervalProgress() const;

    MCAPI void $swing();

    MCAPI float $getMaxHeadXRot();

    MCAPI bool $isImmobile() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI void $setTarget(::Actor* target);

    MCAPI bool $attack(::Actor& target, ::ActorDamageCause const& cause);

    MCAPI bool $isAlliedTo(::Mob*);

    MCAPI bool $doHurtTarget(::Actor* target, ::ActorDamageCause const& cause);

    MCAPI ::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCAPI bool $inCaravan() const;

    MCAPI int $getArmorValue() const;

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int dmg, ::std::bitset<5> const hurtSlots);

    MCAPI void $setDamagedArmor(::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $sendArmorDamage(::std::bitset<5> const);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::ArmorSlot slot) const;

    MCAPI int $getArmorTextureIndexInSlot(::ArmorSlot slot) const;

    MCAPI float $getArmorColorInSlot(::ArmorSlot slot, int channelRGBA) const;

    MCAPI ::std::vector<::ItemStack const*> $getAllHand() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI int $getDeathTime() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI void $sendInventory(bool);

    MCAPI void $buildDebugInfo(::std::string& out) const;

    MCAPI float $getInterpolatedBodyRot(float a) const;

    MCAPI float $getInterpolatedHeadRot(float a) const;

    MCAPI float $getInterpolatedBodyYaw(float a) const;

    MCAPI bool $isSurfaceMob() const;

    MCAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    MCAPI bool $createAIGoals();

    MCAPI void $onBorn(::Actor&, ::Actor&);

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setTransitioningSitting(bool value);

    MCAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI float $_getWalkTargetValue(::BlockPos const&);

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI bool $canPowerJump() const;

    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $renderDebugServerState(::Options const& options);

    MCAPI bool $canFreeze() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void $outOfWorld();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool);

    MCAPI void $newServerAiStep();

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);

    MCAPI void $tickDeath();

    MCAPI void $_doInitialMove();

    MCAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
