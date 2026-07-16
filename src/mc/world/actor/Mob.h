#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorSwingSource.h"
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
class ActorHurtResult;
class BaseAttributeMap;
class Block;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class HashedString;
class ILevel;
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SynchedActorDataWriter;
class Vec3;
struct CalculateAttackDamageSettings;
struct DimensionType;
struct HurtEffectsSettings;
struct HurtParameters;
struct InterpolationPair;
struct JumpPreventionResult;
struct KnockbackParameters;
struct LegacyGoalDefinition;
struct VariantParameterList;
namespace mce { class UUID; }
class IOptionsReader;
// clang-format on

class Mob : public ::Actor {
public:
    LLAPI void refreshInventory();

    LLAPI static ::Mob* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

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
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual ~Mob() /*override*/;

    virtual void knockback(::Actor* source, int damage, float xd, float zd, ::KnockbackParameters const& parameters);

    virtual void kill() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual bool shouldDropDeathLoot() const /*override*/;

    virtual void spawnAnim();

    virtual bool isAlive() const /*override*/;

    virtual bool isSleeping() const /*override*/;

    virtual void setSleeping(bool val) /*override*/;

    virtual bool isBlocking() const /*override*/;

    virtual void setSprinting(bool shouldSprint);

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual float getSpeed() const;

    virtual void setSpeed(float speed);

    virtual float getYawSpeedInDegreesPerSecond() const /*override*/;

    virtual void normalTick() /*override*/;

    virtual void baseTick() /*override*/;

    virtual void hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);

    virtual void damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

    virtual ::ActorHurtResult doFireHurt(int amount) /*override*/;

    virtual void aiStep();

    virtual void pushActors();

    virtual bool checkSpawnRules(bool fromSpawner);

    virtual bool checkSpawnObstruction() const;

    virtual void addPassenger(::Actor& newPassenger) /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual int getItemUseDuration() const;

    virtual float getItemUseStartupProgress() const;

    virtual float getItemUseIntervalProgress() const;

#ifdef LL_PLAT_S
    virtual bool swing(::ActorSwingSource) /*override*/;
#else // LL_PLAT_C
    virtual bool swing(::ActorSwingSource swingSource) /*override*/;
#endif

    virtual float getMaxHeadXRot();

    virtual bool isImmobile() const /*override*/;

    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker) /*override*/;

    virtual void setTarget(::Actor* target) /*override*/;

    virtual ::ActorHurtResult
    attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual bool isAlliedTo(::Mob* other);

    virtual ::ActorHurtResult doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const& block) const /*override*/;

    virtual bool inCaravan() const /*override*/;

    virtual int getArmorValue() const;

    virtual void hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    virtual void setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

#ifdef LL_PLAT_S
    virtual void sendArmorDamage(::std::bitset<5> const);
#else // LL_PLAT_C
    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots);
#endif

    virtual void sendArmor(::std::bitset<5> const armorSlots);

    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const /*override*/;

    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const /*override*/;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const;

    virtual ::std::vector<::ItemStack const*> getAllEquipment() const;

    virtual int getDeathTime() const /*override*/;

    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source);

    virtual void dropEquipmentOnDeath();

    virtual void clearVanishEnchantedItemsOnDeath();

#ifdef LL_PLAT_S
    virtual void sendInventory(bool);
#else // LL_PLAT_C
    virtual void sendInventory(bool shouldSelectSlot);
#endif

    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    virtual float getInterpolatedBodyRot(float a) const /*override*/;

    virtual float getInterpolatedHeadRot(float a) const /*override*/;

    virtual float getInterpolatedBodyYaw(float a) const /*override*/;

    virtual bool isSurfaceMob() const /*override*/;

    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    virtual bool createAIGoals();

    virtual void onBorn(::Actor&, ::Actor&);

    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    virtual void setTransitioningSitting(bool value);

    virtual bool hasComponent(::HashedString const& name) const /*override*/;

    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos);

    virtual bool canExistWhenDisallowMob() const;

    virtual bool canPowerJump() const /*override*/;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    virtual void renderDebugServerState(::IOptionsReader const& options) /*override*/;

    virtual bool canFreeze() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl();

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual void outOfWorld() /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void newServerAiStep();

    virtual void _doInitialMove() /*override*/;

    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const& mobPos) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Mob(::ILevel& level, ::EntityContext& entityContext);

    MCAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    MCAPI void _doSoulSpeedParticleEffect();

    MCAPI void _doSprintParticleEffect();

    MCAPI bool _initHardCodedComponents(bool isClientSide);

    MCAPI void _initialize(::EntityContext& entityContext, bool isClientSide);

    MCAPI bool _isDoingMaceSmashAttack() const;

    MCAPI void _processSoulSpeed();

    MCAPI void _updateSprintingState();

    MCAPI void
    addSpeedModifier(::mce::UUID const& attributeID, ::std::string const& attributeName, float speedModifier);

    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);

    MCAPI float calculateAttackDamage(::Actor const& target, ::CalculateAttackDamageSettings const& settings) const;

    MCAPI ::std::optional<float> checkTotemDeathProtection(::ActorDamageSource const& killingDamage);

    MCAPI void clearMainHandSlot();

    MCAPI void containerChanged(int iSlot);

    MCAPI void createAI(::std::vector<::LegacyGoalDefinition> goals);

    MCAPI void dropContainer();

    MCAPI void emitJumpPreventedEvent(::BlockPos const& pos);

    MCAPI void frostWalk();

#ifdef LL_PLAT_C
    MCAPI ::std::vector<int> getAllArmorID() const;
#endif

    MCAPI float getArmorCoverPercentage() const;

    MCAPI int getArmorTypeHash();

    MCAPI int getCarriedItemKnockbackBonus() const;

    MCAPI float getDamageAfterArmorReduction(::ActorDamageSource const& source, float damage) const;

    MCAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);

    MCAPI float getJumpEffectAmplifierValue();

    MCAPI float getJumpMultiplier();

    MCAPI ::JumpPreventionResult getJumpPrevention();

#ifdef LL_PLAT_S
    MCAPI int getJumpTicks() const;
#endif

    MCAPI int getModifiedSwingDuration() const;

    MCAPI int getNoActionTime() const;

#ifdef LL_PLAT_C
    MCAPI float getPassengerLockedBodyRot() const;

    MCAPI float getPassengerRotLimit() const;
#endif

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;

#ifdef LL_PLAT_C
    MCAPI float getSwimSpeedMultiplier() const;
#endif

    MCAPI int getToughnessValue() const;

    MCAPI ::TravelType getTravelType();

    MCAPI float getYBodyRotation() const;

#ifdef LL_PLAT_C
    MCAPI ::InterpolationPair getYBodyRotationsNewOld() const;
#endif

    MCAPI void hurtArmor(::ActorDamageSource const& source, int damage);

    MCAPI bool isAbleToMove() const;

    MCAPI void joinCaravan(::Mob* head);

    MCAPI void jumpFromGround();

    MCAPI void leaveCaravan();

    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);

    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

#ifdef LL_PLAT_C
    MCAPI void removeSpeedModifier(::mce::UUID const& attributeID);
#endif

    MCAPI void resetAttributes();

    MCAPI void resetNoActionTime();

    MCAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;

    MCAPI void setJumpTicks(int ticks);

    MCAPI void setSpeedModifier(float speed);

    MCAPI void setYBodyRotation(float rotation);

    MCAPI void setYBodyRotations(float rotation, float oldRotation);

    MCAPI bool shouldApplyWaterGravity();

    MCAPI void snapToYBodyRot(float yBodyRot);

    MCAPI void tickMobEffectsVisuals();

    MCAPI void updateEquipment();

    MCAPI void updateGlidingDurability();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void setSprinting(::BaseAttributeMap& attributes, ::SynchedActorDataWriter data, bool shouldSprint);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);
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

    MCAPI void $knockback(::Actor* source, int damage, float xd, float zd, ::KnockbackParameters const& parameters);

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

    MCAPI float $getSpeed() const;

    MCAPI void $setSpeed(float speed);

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);

    MCAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

    MCAPI ::ActorHurtResult $doFireHurt(int amount);

    MCAPI void $aiStep();

    MCAPI void $pushActors();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI void $addPassenger(::Actor& newPassenger);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCFOLD int $getItemUseDuration() const;

    MCFOLD float $getItemUseStartupProgress() const;

    MCFOLD float $getItemUseIntervalProgress() const;

    MCAPI bool $swing(::ActorSwingSource);

    MCAPI float $getMaxHeadXRot();

    MCAPI bool $isImmobile() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI void $setTarget(::Actor* target);

    MCAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCFOLD bool $isAlliedTo(::Mob* other);

    MCAPI ::ActorHurtResult $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCAPI bool $inCaravan() const;

    MCAPI int $getArmorValue() const;

    MCAPI void $hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    MCAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCFOLD void $sendArmorDamage(::std::bitset<5> const);

    MCAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;

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

    MCFOLD float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI bool $canPowerJump() const;

    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCFOLD void $renderDebugServerState(::IOptionsReader const& options);

    MCAPI bool $canFreeze() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void $outOfWorld();

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $newServerAiStep();

    MCAPI void $_doInitialMove();

    MCAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const& mobPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
