#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/TravelType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {
public:
    // prevent constructor by default
    Mob& operator=(Mob const&);
    Mob(Mob const&);
    Mob();

public:
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool hasComponent(class HashedString const& name) const;

    // vIndex: 3
    virtual void outOfWorld();

    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 9
    virtual void _doInitialMove();

    // vIndex: 10
    virtual ~Mob();

    // vIndex: 15
    virtual float getInterpolatedBodyRot(float a) const;

    // vIndex: 16
    virtual float getInterpolatedHeadRot(float a) const;

    // vIndex: 17
    virtual float getInterpolatedBodyYaw(float a) const;

    // vIndex: 18
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 21
    virtual void blockedByShield(class ActorDamageSource const& source, class Actor& blocker);

    // vIndex: 23
    virtual void
    teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 27
    virtual void baseTick();

    // vIndex: 29
    virtual bool startRiding(class Actor& vehicle);

    // vIndex: 30
    virtual void addPassenger(class Actor& newPassenger);

    // vIndex: 43
    virtual bool isImmobile() const;

    // vIndex: 45
    virtual bool isSleeping() const;

    // vIndex: 46
    virtual void setSleeping(bool val);

    // vIndex: 48
    virtual bool isBlocking() const;

    // vIndex: 50
    virtual bool isAlive() const;

    // vIndex: 52
    virtual bool isSurfaceMob() const;

    // vIndex: 55
    virtual void setTarget(class Actor* target);

    // vIndex: 57
    virtual bool attack(class Actor& target, ::ActorDamageCause const& cause);

    // vIndex: 64
    virtual bool canPowerJump() const;

    // vIndex: 70
    virtual ::ActorDamageCause getBlockDamageCause(class Block const& block) const;

    // vIndex: 71
    virtual bool doFireHurt(int amount);

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 78
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot slot) const;

    // vIndex: 79
    virtual int getArmorTextureIndexInSlot(::ArmorSlot slot) const;

    // vIndex: 80
    virtual float getArmorColorInSlot(::ArmorSlot slot, int channelRGBA) const;

    // vIndex: 81
    virtual void setEquippedSlot(::Puv::Legacy::EquipmentSlot slot, class ItemStack const& item);

    // vIndex: 91
    virtual bool canFreeze() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 98
    virtual float causeFallDamageToActor(float distance, float multiplier, class ActorDamageSource source);

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 103
    virtual bool inCaravan() const;

    // vIndex: 108
    virtual void buildDebugInfo(std::string& out) const;

    // vIndex: 110
    virtual int getDeathTime() const;

    // vIndex: 117
    virtual void swing();

    // vIndex: 129
    virtual void renderDebugServerState(class Options const& options);

    // vIndex: 130
    virtual void kill();

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 132
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 151
    virtual void
    knockback(class Actor*, int, float xd, float zd, float horizontalPower, float verticalPower, float heightCap);

    // vIndex: 152
    virtual void spawnAnim();

    // vIndex: 153
    virtual void setSprinting(bool shouldSprint);

    // vIndex: 154
    virtual ::Puv::Legacy::LevelSoundEvent getDeathSound();

    // vIndex: 155
    virtual float getSpeed() const;

    // vIndex: 156
    virtual void setSpeed(float speed);

    // vIndex: 157
    virtual void hurtEffects(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 158
    virtual void aiStep();

    // vIndex: 159
    virtual void pushActors();

    // vIndex: 160
    virtual bool checkSpawnRules(bool);

    // vIndex: 161
    virtual bool checkSpawnObstruction() const;

    // vIndex: 162
    virtual int getItemUseDuration() const;

    // vIndex: 163
    virtual float getItemUseStartupProgress() const;

    // vIndex: 164
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 165
    virtual float getMaxHeadXRot();

    // vIndex: 166
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 167
    virtual bool doHurtTarget(class Actor* target, ::ActorDamageCause const& cause);

    // vIndex: 168
    virtual int getArmorValue() const;

    // vIndex: 169
    virtual void hurtArmorSlots(class ActorDamageSource const& source, int dmg, std::bitset<4> hurtSlots);

    // vIndex: 170
    virtual void setDamagedArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 171
    virtual void sendArmorDamage(std::bitset<4>);

    // vIndex: 172
    virtual void sendArmor(std::bitset<4> armorSlots);

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

    // vIndex: 179
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const& source, float damage) const;

    // vIndex: 180
    virtual bool createAIGoals();

    // vIndex: 181
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 182
    virtual bool setItemSlot(::Puv::Legacy::EquipmentSlot slot, class ItemStack const& item);

    // vIndex: 183
    virtual void setTransitioningSitting(bool value);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const&);

    // vIndex: 185
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 186
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 187
    virtual void newServerAiStep();

    // vIndex: 188
    virtual void tickDeath();

    // vIndex: 189
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const& aabb, class Vec3 const&) const;

    MCAPI Mob(class Level& level, class EntityContext& entityContext);

    MCAPI
    Mob(class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext);

    MCAPI void
    addSpeedModifier(class mce::UUID const& attributeID, std::string const& attributeName, float speedModifier);

    MCAPI void ate();

    MCAPI float calcMoveRelativeSpeed(::TravelType travelType);

    MCAPI bool checkForPostHitDamageImmunity(float damageDifference, class ActorDamageSource const& source);

    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const& killingDamage);

    MCAPI void clearMainHandSlot();

    MCAPI void containerChanged(int iSlot);

    MCAPI void createAI(std::vector<struct LegacyGoalDefinition> goals);

    MCAPI void dropContainer();

    MCAPI void emitJumpPreventedEvent(class BlockPos const& pos);

    MCAPI void frostWalk();

    MCAPI float getArmorCoverPercentage() const;

    MCAPI int getArmorTypeHash();

    MCAPI float getAttackAnim(float a);

    MCAPI class BlockPos getBoundOrigin() const;

    MCAPI struct ActorUniqueID getCaravanHead() const;

    MCAPI int getCaravanSize() const;

    MCAPI float getDamageAfterArmorReduction(class ActorDamageSource const& source, float damage) const;

    MCAPI float getDamageAfterDamageSensorComponentAdjustments(class ActorDamageSource const& source, float damage);

    MCAPI float getDamageAfterPostHitDamageImmunityReduction(class ActorDamageSource const& source, float damage) const;

    MCAPI float getDamageAfterResistanceEffect(class ActorDamageSource const& source, float damage) const;

    MCAPI int getEatCounter() const;

    MCAPI float getExpectedFallDamage(float distance, float multiplier) const;

    MCAPI class Mob* getFirstCaravanHead();

    MCAPI int getGlidingTicks() const;

    MCAPI class ItemStack const& getItemSlot(::Puv::Legacy::EquipmentSlot slot) const;

    MCAPI float getJumpEffectAmplifierValue();

    MCAPI float getJumpMultiplier();

    MCAPI struct JumpPreventionResult getJumpPrevention();

    MCAPI int getJumpTicks() const;

    MCAPI int getMeleeKnockbackBonus();

    MCAPI int getNoActionTime() const;

    MCAPI struct ActorUniqueID getTargetCaptain() const;

    MCAPI ::TravelType getTravelType();

    MCAPI float getYBodyRotation() const;

    MCAPI bool hasBoundOrigin() const;

    MCAPI bool hasCaravanTail() const;

    MCAPI void hurtArmor(class ActorDamageSource const& source, int dmg);

    MCAPI bool isAbleToMove() const;

    MCAPI bool isEating() const;

    MCAPI bool isGliding() const;

    MCAPI bool isLayingEgg() const;

    MCAPI bool isPregnant() const;

    MCAPI bool isSprinting() const;

    MCAPI bool isTransitioningSitting() const;

    MCAPI void joinCaravan(class Mob* head);

    MCAPI void knockback(class Actor* source, int dmg, float xd, float zd);

    MCAPI void knockback(class Actor* source, int dmg, float xd, float zd, float horizontalPower, float verticalPower);

    MCAPI void leaveCaravan();

    MCAPI void lookAt(class Actor* lookAt, float yMax, float xMax);

    MCAPI void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI void onPlayerJump(int jumpAmount);

    MCAPI void removeSpeedModifier(class mce::UUID const& attributeID);

    MCAPI void resetAttributes();

    MCAPI void resetNoActionTime();

    MCAPI void sendArmorDamageSlot(::ArmorSlot slot);

    MCAPI void sendArmorSlot(::ArmorSlot slot);

    MCAPI void setEatCounter(int value);

    MCAPI void setEating(bool value);

    MCAPI void setIsLayingEgg(bool layingEgg);

    MCAPI void setIsPregnant(bool pregnant);

    MCAPI void setJumpTicks(int ticks);

    MCAPI void setNaturallySpawned(bool naturallySpawned);

    MCAPI void setSpawnMethod(::MobSpawnMethod method);

    MCAPI void setSpeedModifier(float speed);

    MCAPI void setSurfaceMob(bool isSurfaceMob);

    MCAPI void setTargetCaptain(struct ActorUniqueID id);

    MCAPI void setYBodyRotation(float rotation);

    MCAPI void setYBodyRotations(float rotation, float oldRotation);

    MCAPI bool shouldApplyWaterGravity();

    MCAPI void snapToYBodyRot(float yBodyRot);

    MCAPI void snapToYHeadRot(float yHeadRot);

    MCAPI void tryFrostWalk();

    MCAPI void tryProcessSoulSpeed();

    MCAPI void tryUpdateAI();

    MCAPI void updateEquipment();

    MCAPI static class Mob* tryGetFromEntity(class EntityContext& entity, bool);

    MCAPI static int const ARMOR_DAMAGE_DIVISOR;

    MCAPI static float const ARMOR_PROTECTION_DIVIDER;

    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;

    MCAPI static float const BASE_ARMOR_TOUGHNESS;

    MCAPI static float const DEFAULT_GRAVITY;

    MCAPI static float const FRICTION_CONSTANT;

    MCAPI static float const FRICTION_CONSTANT_MODIFIED;

    MCAPI static float const FRICTION_MODIFIER;

    MCAPI static float const GLIDING_FALL_RESET_DELTA;

    MCAPI static float const LADDER_CLIMB_SPEED;

    MCAPI static float const MAX_ARMOR;

    MCAPI static float const MIN_ARMOR_RATIO;

    MCAPI static float const NUM_ARMOR_ITEMS;

    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;

    MCAPI static int const REMOVE_PASSENGERS_DELAY;

    MCAPI static float const SLOW_FALL_GRAVITY;

    MCAPI static int const SPAWN_XP_DELAY;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct BuiltInMobComponents _addBuiltInMobComponents();

    MCAPI void _doSprintParticleEffect();

    MCAPI void _processSoulSpeed();

    MCAPI void _registerMobAttributes();

    MCAPI void dropBags();

    MCAPI int getCurrentSwingDuration();

    MCAPI void jumpFromGround(class IConstBlockSource const&);

    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;

    MCAPI void tickMobEffectsVisuals();

    MCAPI void updateAttackAnim();

    MCAPI void updateGlidingDurability();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _initHardCodedComponents(bool isClientSide);

    MCAPI void _initialize(class EntityContext& entityContext, bool isClientSide);

    MCAPI void _logMobComponentInitializationError(
        std::string const& typeName,
        std::string const& existingName,
        char const*        descriptionJsonName
    );

    MCAPI class GoalSelectorComponent* _tryGetGoalSelectorComponent();

    MCAPI void _updateSprintingState();

    MCAPI void _verifyAttributes();

    MCAPI static char const* _getDescriptionJsonName(struct Description const* description);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static int const MAX_INACTIVITY_TIMER;

    // NOLINTEND
};
