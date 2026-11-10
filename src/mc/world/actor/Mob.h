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
#include "mc/world/item/HandSlot.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDamageSource;
class ActorDefinitionGroup;
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
struct ActorDefinitionIdentifier;
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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                       mHurtDir;
    ::ll::TypedStorage<4, 4, float>                       mOTilt;
    ::ll::TypedStorage<4, 4, float>                       mTilt;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>  mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>  mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>    mClockSpriteCalc;
    ::ll::TypedStorage<4, 4, float>                       mAttackAnim;
    ::ll::TypedStorage<4, 4, int>                         mSwingTime;
    ::ll::TypedStorage<8, 32, ::BuiltInMobComponents>     mBuiltInMobComponents;
    ::ll::TypedStorage<4, 4, float>                       mMovementComponentCurrentSpeed;
    ::ll::TypedStorage<1, 2, ::std::optional<::HandSlot>> mSwingingHand;
    ::ll::TypedStorage<1, 1, bool>                        mSurfaceMob;
    ::ll::TypedStorage<1, 1, bool>                        mNaturallySpawned;
    ::ll::TypedStorage<1, 1, bool>                        mWantsToBeJockey;
    ::ll::TypedStorage<1, 1, bool>                        mHasBoundOrigin;
    ::ll::TypedStorage<1, 1, ::MobSpawnMethod>            mSpawnMethod;
    ::ll::TypedStorage<1, 1, bool>                        mCreateAiOnReload;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>             mCaravanHead;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>             mCaravanTail;
    ::ll::TypedStorage<4, 4, float>                       mOAttackAnim;
    ::ll::TypedStorage<4, 12, ::BlockPos>                 mBoundOrigin;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>             mTargetCaptainId;
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

    virtual void knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);

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

    virtual bool swing(::ActorSwingSource swingSource, ::HandSlot handSlot) /*override*/;

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

    virtual void sendArmorDamage(::std::bitset<5> const damagedSlots);

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

    virtual void sendInventory(bool shouldSelectSlot);

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
    MCNAPI Mob(::ILevel& level, ::EntityContext& entityContext);

    MCNAPI
    Mob(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);

    MCNAPI ::BuiltInMobComponents _addBuiltInMobComponents();

    MCNAPI void _doSoulSpeedParticleEffect();

    MCNAPI void _doSprintParticleEffect();

    MCNAPI bool _initHardCodedComponents(bool isClientSide);

    MCNAPI void _initialize(::EntityContext& entityContext, bool isClientSide);

    MCNAPI bool _isDoingMaceSmashAttack() const;

    MCNAPI void _processSoulSpeed();

    MCNAPI void _updateSprintingState();

    MCAPI void
    addSpeedModifier(::mce::UUID const& attributeID, ::std::string const& attributeName, float speedModifier);

    MCNAPI float calcMoveRelativeSpeed(::TravelType travelType);

    MCAPI float calculateAttackDamage(::Actor const& target, ::CalculateAttackDamageSettings const& settings) const;

    MCAPI ::std::optional<float> checkTotemDeathProtection(::ActorDamageSource const& killingDamage);

    MCAPI void clearMainHandSlot();

    MCNAPI void containerChanged(int iSlot);

    MCNAPI void createAI(::std::vector<::LegacyGoalDefinition> goals);

    MCNAPI void dropContainer();

    MCNAPI void emitJumpPreventedEvent(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCNAPI ::std::vector<int> getAllArmorID() const;
#endif

    MCNAPI int getArmorTypeHash();

    MCNAPI int getCarriedItemKnockbackBonus() const;

    MCAPI float getDamageAfterArmorReduction(::ActorDamageSource const& source, float damage) const;

    MCNAPI float getDamageAfterDamageSensorComponentAdjustments(::ActorDamageSource const& source, float damage);

    MCNAPI float getJumpEffectAmplifierValue();

    MCNAPI float getJumpMultiplier();

    MCNAPI ::JumpPreventionResult getJumpPrevention();

    MCNAPI int getModifiedSwingDuration(::HandSlot handSlot) const;

    MCNAPI int getNoActionTime() const;

#ifdef LL_PLAT_C
    MCNAPI float getPassengerLockedBodyRot() const;

    MCNAPI float getPassengerRotLimit() const;
#endif

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getSpawnSound() const;

#ifdef LL_PLAT_C
    MCNAPI float getSwimSpeedMultiplier() const;
#endif

    MCNAPI int getToughnessValue() const;

    MCNAPI ::TravelType getTravelType();

    MCAPI float getYBodyRotation() const;

#ifdef LL_PLAT_C
    MCNAPI ::InterpolationPair getYBodyRotationsNewOld() const;
#endif

    MCAPI void hurtArmor(::ActorDamageSource const& source, int damage);

    MCNAPI bool isAbleToMove() const;

    MCNAPI bool isTransitioningSitting() const;

    MCNAPI void joinCaravan(::Mob* head);

    MCAPI void jumpFromGround();

    MCNAPI void leaveCaravan();

    MCAPI void lookAt(::Actor* lookAt, float yMax, float xMax);

    MCNAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI void resetAttributes();

    MCNAPI void resetNoActionTime();

    MCNAPI ::std::unique_ptr<::ListTag> saveOffhand(::SaveContext const& saveContext) const;

    MCNAPI void setJumpTicks(int ticks);

    MCAPI void setSpeedModifier(float speed);

    MCAPI void setYBodyRotation(float rotation);

    MCAPI void setYBodyRotations(float rotation, float oldRotation);

    MCNAPI bool shouldApplyWaterGravity();

    MCNAPI void snapToYBodyRot(float yBodyRot);

    MCNAPI void tickMobEffectsVisuals();

    MCAPI void updateEquipment();

    MCNAPI void updateGlidingDurability();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerMobAttributes(::BaseAttributeMap& attributes);

#ifdef LL_PLAT_C
    MCNAPI static void setSprinting(::BaseAttributeMap& attributes, ::SynchedActorDataWriter data, bool shouldSprint);
#endif

    MCAPI static ::Mob* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);

    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);

    MCNAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI void $spawnAnim();

    MCNAPI bool $isAlive() const;

    MCNAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool val);

    MCNAPI bool $isBlocking() const;

    MCAPI void $setSprinting(bool shouldSprint);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI float $getSpeed() const;

    MCNAPI void $setSpeed(float speed);

    MCNAPI float $getYawSpeedInDegreesPerSecond() const;

    MCAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);

    MCNAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

    MCNAPI ::ActorHurtResult $doFireHurt(int amount);

    MCAPI void $aiStep();

    MCAPI void $pushActors();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI void $addPassenger(::Actor& newPassenger);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI int $getItemUseDuration() const;

    MCNAPI float $getItemUseStartupProgress() const;

    MCNAPI float $getItemUseIntervalProgress() const;

    MCNAPI bool $swing(::ActorSwingSource swingSource, ::HandSlot handSlot);

    MCNAPI float $getMaxHeadXRot();

    MCNAPI bool $isImmobile() const;

    MCNAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI void $setTarget(::Actor* target);

    MCAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI bool $isAlliedTo(::Mob* other);

    MCAPI ::ActorHurtResult $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCNAPI bool $inCaravan() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI void $hurtArmorSlots(::ActorDamageSource const& source, int damage, ::std::bitset<5> const hurtSlots);

    MCNAPI void $setDamagedArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCNAPI void $sendArmorDamage(::std::bitset<5> const damagedSlots);

    MCNAPI void $sendArmor(::std::bitset<5> const armorSlots);

    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;

    MCNAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;

    MCNAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCNAPI int $getDeathTime() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCNAPI void $clearVanishEnchantedItemsOnDeath();

    MCNAPI void $sendInventory(bool shouldSelectSlot);

    MCNAPI void $buildDebugInfo(::std::string& out) const;

    MCNAPI float $getInterpolatedBodyRot(float a) const;

    MCNAPI float $getInterpolatedHeadRot(float a) const;

    MCNAPI float $getInterpolatedBodyYaw(float a) const;

    MCNAPI bool $isSurfaceMob() const;

    MCAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;

    MCNAPI bool $createAIGoals();

    MCFOLD void $onBorn(::Actor&, ::Actor&);

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCNAPI void $setTransitioningSitting(bool value);

    MCNAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI bool $canPowerJump() const;

    MCAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCNAPI void $renderDebugServerState(::IOptionsReader const& options);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCNAPI void $outOfWorld();

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $newServerAiStep();

    MCNAPI void $_doInitialMove();

    MCNAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const& aabb, ::Vec3 const& mobPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
