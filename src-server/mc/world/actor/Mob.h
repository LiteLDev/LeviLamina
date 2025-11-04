#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInMobComponents.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/TravelType.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
class ActorDefinitionGroup;
class BaseAttributeMap;
class Block;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class HashedString;
class IOptionsReader;
class ItemStack;
class ListTag;
class SaveContext;
class SynchedActorDataWriter;
class Vec3;
struct ActorDefinitionIdentifier;
struct JumpPreventionResult;
struct LegacyGoalDefinition;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mHurtDir;
    ::ll::TypedStorage<4, 4, float>                      mOTilt;
    ::ll::TypedStorage<4, 4, float>                      mTilt;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>   mClockSpriteCalc;
    ::ll::TypedStorage<4, 4, float>                      mAttackAnim;
    ::ll::TypedStorage<4, 4, int>                        mSwingTime;
    ::ll::TypedStorage<8, 24, ::BuiltInMobComponents>    mBuiltInMobComponents;
    ::ll::TypedStorage<4, 4, float>                      mMovementComponentCurrentSpeed;
    ::ll::TypedStorage<1, 1, bool>                       mSwinging;
    ::ll::TypedStorage<1, 1, bool>                       mSurfaceMob;
    ::ll::TypedStorage<1, 1, bool>                       mNaturallySpawned;
    ::ll::TypedStorage<1, 1, bool>                       mWantsToBeJockey;
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
    // prevent constructor by default
    Mob();

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

    // vIndex: 138
    virtual void
    knockback(::Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    // vIndex: 122
    virtual void kill() /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 124
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 139
    virtual void spawnAnim();

    // vIndex: 47
    virtual bool isAlive() const /*override*/;

    // vIndex: 42
    virtual bool isSleeping() const /*override*/;

    // vIndex: 43
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 45
    virtual bool isBlocking() const /*override*/;

    // vIndex: 140
    virtual void setSprinting(bool shouldSprint);

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 141
    virtual ::SharedTypes::Legacy::LevelSoundEvent getDeathSound();

    // vIndex: 142
    virtual float getSpeed() const;

    // vIndex: 143
    virtual void setSpeed(float speed);

    // vIndex: 16
    virtual float getYawSpeedInDegreesPerSecond() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 25
    virtual void baseTick() /*override*/;

    // vIndex: 144
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 145
    virtual void damageCarriedItemOnAttack(::Actor& target, float);

    // vIndex: 66
    virtual bool doFireHurt(int amount) /*override*/;

    // vIndex: 146
    virtual void aiStep();

    // vIndex: 147
    virtual void pushActors();

    // vIndex: 148
    virtual bool checkSpawnRules(bool);

    // vIndex: 149
    virtual bool checkSpawnObstruction() const;

    // vIndex: 28
    virtual void addPassenger(::Actor& passenger) /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 150
    virtual int getItemUseDuration() const;

    // vIndex: 151
    virtual float getItemUseStartupProgress() const;

    // vIndex: 152
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 111
    virtual bool swing() /*override*/;

    // vIndex: 153
    virtual float getMaxHeadXRot();

    // vIndex: 40
    virtual bool isImmobile() const /*override*/;

    // vIndex: 19
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker) /*override*/;

    // vIndex: 51
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 53
    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    // vIndex: 154
    virtual bool isAlliedTo(::Mob*);

    // vIndex: 155
    virtual bool doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);

    // vIndex: 65
    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const /*override*/;

    // vIndex: 97
    virtual bool inCaravan() const /*override*/;

    // vIndex: 156
    virtual int getArmorValue() const;

    // vIndex: 157
    virtual void hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    // vIndex: 158
    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&);

    // vIndex: 159
    virtual void sendArmorDamage(::std::bitset<5> const);

    // vIndex: 160
    virtual void sendArmor(::std::bitset<5> const armorSlots);

    // vIndex: 73
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const /*override*/;

    // vIndex: 74
    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const /*override*/;

    // vIndex: 75
    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const /*override*/;

    // vIndex: 161
    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const;

    // vIndex: 162
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const;

    // vIndex: 104
    virtual int getDeathTime() const /*override*/;

    // vIndex: 164
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source);

    // vIndex: 163
    virtual void dropEquipmentOnDeath();

    // vIndex: 165
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 166
    virtual void sendInventory(bool);

    // vIndex: 102
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    // vIndex: 13
    virtual float getInterpolatedBodyRot(float a) const /*override*/;

    // vIndex: 14
    virtual float getInterpolatedHeadRot(float a) const /*override*/;

    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float a) const /*override*/;

    // vIndex: 49
    virtual bool isSurfaceMob() const /*override*/;

    // vIndex: 167
    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    // vIndex: 168
    virtual bool createAIGoals();

    // vIndex: 169
    virtual void onBorn(::Actor&, ::Actor&);

    // vIndex: 170
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    // vIndex: 171
    virtual void setTransitioningSitting(bool value);

    // vIndex: 0
    virtual bool hasComponent(::HashedString const& name) const /*override*/;

    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const&);

    // vIndex: 173
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 60
    virtual bool canPowerJump() const /*override*/;

    // vIndex: 76
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 121
    virtual void renderDebugServerState(::IOptionsReader const& options) /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 174
    virtual void tickDeath();

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 175
    virtual ::std::unique_ptr<::BodyControl> initBodyControl();

    // vIndex: 92
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 1
    virtual void outOfWorld() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool) /*override*/;

    // vIndex: 176
    virtual void newServerAiStep();

    // vIndex: 7
    virtual void _doInitialMove() /*override*/;

    // vIndex: 177
    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    Mob(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);

    MCAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    MCAPI void _doSprintParticleEffect();

    MCAPI bool _initHardCodedComponents(bool isClientSide);

    MCAPI void _initialize(::EntityContext& entityContext, bool isClientSide);

    MCAPI void _processSoulSpeed();

    MCAPI void _registerMobAttributes();

    MCAPI ::std::unique_ptr<::ListTag> _saveArmor(::SaveContext const& saveContext) const;

    MCAPI void _updateSprintingState();

    MCAPI void _verifyAttributes();

    MCAPI void
    addSpeedModifier(::mce::UUID const& attributeID, ::std::string const& attributeName, float speedModifier);

    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);

    MCAPI float calculateAttackDamage(::Actor const& target) const;

    MCAPI float calculateAttackDamage(::Actor const& target, float baseAttackDamage) const;

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

    MCAPI int getCaravanSize() const;

    MCAPI int getCarriedItemKnockbackBonus() const;

    MCAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);

    MCAPI float getDamageAfterResistanceEffect(::ActorDamageSource const& source, float damage) const;

    MCAPI ::SharedTypes::Legacy::ActorDamageCause getDamageCause() const;

    MCAPI int getEatCounter() const;

    MCAPI float getExpectedFallDamage(float distance, float multiplier) const;

    MCAPI ::Mob* getFirstCaravanHead();

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getHurtSound(::SharedTypes::Legacy::ActorDamageCause cause);

    MCAPI ::ItemStack const& getItemSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    MCAPI float getJumpEffectAmplifierValue();

    MCAPI ::JumpPreventionResult getJumpPrevention();

    MCAPI int getModifiedSwingDuration() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;

    MCAPI int getToughnessValue() const;

    MCAPI ::TravelType getTravelType();

    MCAPI float getYBodyRotation() const;

    MCAPI void hurtArmor(::ActorDamageSource const& source, int damage);

    MCAPI void jumpFromGround();

    MCAPI void knockback(::Actor* source, int damage, float xd, float zd, float horizontalPower, float verticalPower);

    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);

    MCAPI void removeSpeedModifier(::mce::UUID const& attributeID);

    MCAPI void resetAttributes();

    MCAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;

    MCAPI void sendArmorSlot(::SharedTypes::Legacy::ArmorSlot slot);

    MCAPI void setEatCounter(int value);

    MCAPI void setJumpTicks(int ticks);

    MCAPI void setYBodyRotation(float rotation);

    MCAPI bool shouldApplyWaterGravity();

    MCAPI void snapToYBodyRot(float yBodyRot);

    MCAPI void snapToYHeadRot(float yHeadRot);

    MCAPI void tickMobEffectsVisuals();

    MCAPI void updateEquipment();

    MCAPI void updateGlidingDurability();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setSprinting(::BaseAttributeMap& attributes, ::SynchedActorDataWriter data, bool shouldSprint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ASCEND_BLOCK_BY_JUMPING_SPEED();

    MCAPI static float const& DEFAULT_GRAVITY();

    MCAPI static float const& FRICTION_CONSTANT();

    MCAPI static float const& FRICTION_CONSTANT_MODIFIED();

    MCAPI static float const& FRICTION_MODIFIER();

    MCAPI static float const& GLIDING_FALL_RESET_DELTA();

    MCAPI static float const& LADDER_CLIMB_SPEED();

    MCAPI static int const& REMOVE_PASSENGERS_DELAY();

    MCAPI static float const& SLOW_FALL_GRAVITY();

    MCAPI static int const& SPAWN_XP_DELAY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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

    MCFOLD void $spawnAnim();

    MCAPI bool $isAlive() const;

    MCAPI bool $isSleeping() const;

    MCAPI void $setSleeping(bool val);

    MCAPI bool $isBlocking() const;

    MCAPI void $setSprinting(bool shouldSprint);

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getDeathSound();

    MCAPI float $getSpeed() const;

    MCAPI void $setSpeed(float speed);

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $damageCarriedItemOnAttack(::Actor& target, float);

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $aiStep();

    MCAPI void $pushActors();

    MCAPI bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI void $addPassenger(::Actor& passenger);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD int $getItemUseDuration() const;

    MCFOLD float $getItemUseStartupProgress() const;

    MCFOLD float $getItemUseIntervalProgress() const;

    MCAPI bool $swing();

    MCAPI float $getMaxHeadXRot();

    MCAPI bool $isImmobile() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $isAlliedTo(::Mob*);

    MCAPI bool $inCaravan() const;

    MCAPI int $getArmorValue() const;

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    MCFOLD void $sendArmorDamage(::std::bitset<5> const);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;

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

    MCFOLD void $onBorn(::Actor&, ::Actor&);

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setTransitioningSitting(bool value);

    MCAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCFOLD float $_getWalkTargetValue(::BlockPos const&);

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI bool $canPowerJump() const;

    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCFOLD void $renderDebugServerState(::IOptionsReader const& options);

    MCAPI bool $canFreeze() const;

    MCAPI void $tickDeath();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void $outOfWorld();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool);

    MCFOLD void $newServerAiStep();

    MCAPI void $_doInitialMove();

    MCAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
