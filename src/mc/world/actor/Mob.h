#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MobSpawnMethod.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/TravelType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 2, symbol: ?hasComponent@Mob@@UEBA_NAEBVHashedString@@@Z
    virtual bool hasComponent(class HashedString const&) const;

    // vIndex: 3, symbol: ?outOfWorld@Mob@@MEAAXXZ
    virtual void outOfWorld();

    // vIndex: 4, symbol: ?reloadHardcoded@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 6, symbol: ?initializeComponents@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 9, symbol: ?_doInitialMove@Mob@@MEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 10, symbol: ??1Mob@@UEAA@XZ
    virtual ~Mob();

    // vIndex: 16, symbol: ?getInterpolatedBodyRot@Mob@@UEBAMM@Z
    virtual float getInterpolatedBodyRot(float) const;

    // vIndex: 17, symbol: ?getInterpolatedHeadRot@Mob@@UEBAMM@Z
    virtual float getInterpolatedHeadRot(float) const;

    // vIndex: 18, symbol: ?getInterpolatedBodyYaw@Mob@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float) const;

    // vIndex: 19, symbol: ?getYawSpeedInDegreesPerSecond@Mob@@UEBAMXZ
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 21, symbol: ?resetInterpolated@Mob@@UEAAXXZ
    virtual void resetInterpolated();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 24, symbol: ?blockedByShield@Mob@@UEAAXAEBVActorDamageSource@@AEAVActor@@@Z
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&);

    // vIndex: 26, symbol: ?teleportTo@Mob@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);

    // vIndex: 29, symbol: ?normalTick@Mob@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 30, symbol: ?baseTick@Mob@@UEAAXXZ
    virtual void baseTick();

    // vIndex: 32, symbol: ?startRiding@Mob@@UEAA_NAEAVActor@@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 33, symbol: ?addPassenger@Mob@@UEAAXAEAVActor@@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 49, symbol: ?isImmobile@Mob@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 51, symbol: ?isPickable@Mob@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isSleeping@Mob@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 54, symbol: ?setSleeping@Mob@@UEAAX_N@Z
    virtual void setSleeping(bool);

    // vIndex: 56, symbol: ?isBlocking@Mob@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 58, symbol: ?isAlive@Mob@@UEBA_NXZ
    virtual bool isAlive() const;

    // vIndex: 60, symbol: ?isSurfaceMob@Mob@@UEBA_NXZ
    virtual bool isSurfaceMob() const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 65, symbol: ?setTarget@Mob@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 67, symbol: ?attack@Mob@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor&, ::ActorDamageCause const&);

    // vIndex: 74, symbol: ?canPowerJump@Mob@@UEBA_NXZ
    virtual bool canPowerJump() const;

    // vIndex: 80, symbol: ?getBlockDamageCause@Mob@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
    virtual ::ActorDamageCause getBlockDamageCause(class Block const&) const;

    // vIndex: 81, symbol: ?doFireHurt@Mob@@UEAA_NH@Z
    virtual bool doFireHurt(int);

    // vIndex: 84, symbol: ?handleEntityEvent@Mob@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 89, symbol: ?getArmorMaterialTypeInSlot@Mob@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 90, symbol: ?getArmorMaterialTextureTypeInSlot@Mob@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
    virtual ::ArmorTextureType getArmorMaterialTextureTypeInSlot(::ArmorSlot) const;

    // vIndex: 91, symbol: ?getArmorColorInSlot@Mob@@UEBAMW4ArmorSlot@@H@Z
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 92, symbol: ?setEquippedSlot@Mob@@UEAAXW4EquipmentSlot@@AEBVItemStack@@@Z
    virtual void setEquippedSlot(::EquipmentSlot, class ItemStack const&);

    // vIndex: 103, symbol: ?canFreeze@Mob@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 108, symbol: ?canChangeDimensionsUsingPortal@Mob@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 113, symbol: ?causeFallDamageToActor@Mob@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 117, symbol: ?canBePulledIntoVehicle@Mob@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 118, symbol: ?inCaravan@Mob@@UEBA_NXZ
    virtual bool inCaravan() const;

    // vIndex: 123, symbol:
    // ?buildDebugInfo@Mob@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string&) const;

    // vIndex: 125, symbol: ?getDeathTime@Mob@@UEBAHXZ
    virtual int getDeathTime() const;

    // vIndex: 134, symbol: ?swing@Mob@@UEAAXXZ
    virtual void swing();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 149, symbol: ?kill@Mob@@UEAAXXZ
    virtual void kill();

    // vIndex: 150, symbol: ?die@Mob@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 151, symbol: ?shouldDropDeathLoot@Mob@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@Mob@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@Mob@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Mob@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 169, symbol: ?_playStepSound@Mob@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const&, class Block const&);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Mob@@MEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?knockback@Mob@@UEAAXPEAVActor@@HMMMMM@Z
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 174, symbol: ?spawnAnim@Mob@@UEAAXXZ
    virtual void spawnAnim();

    // vIndex: 175, symbol: ?setSprinting@Mob@@UEAAX_N@Z
    virtual void setSprinting(bool);

    // vIndex: 176, symbol: ?getHurtSound@Mob@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getHurtSound();

    // vIndex: 177, symbol: ?getDeathSound@Mob@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getDeathSound();

    // vIndex: 178, symbol: ?getSpeed@Mob@@UEBAMXZ
    virtual float getSpeed() const;

    // vIndex: 179, symbol: ?setSpeed@Mob@@UEAAXM@Z
    virtual void setSpeed(float);

    // vIndex: 180, symbol: ?hurtEffects@Mob@@UEAAXAEBVActorDamageSource@@M_N1@Z
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 181, symbol: ?aiStep@Mob@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 182, symbol: ?pushActors@Mob@@UEAAXXZ
    virtual void pushActors();

    // vIndex: 183, symbol: ?checkSpawnRules@Mob@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 184, symbol: ?checkSpawnObstruction@Mob@@UEBA_NXZ
    virtual bool checkSpawnObstruction() const;

    // vIndex: 185, symbol: ?getItemUseDuration@Mob@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 186, symbol: ?getItemUseStartupProgress@Mob@@UEBAMXZ
    virtual float getItemUseStartupProgress() const;

    // vIndex: 187, symbol: ?getItemUseIntervalProgress@Mob@@UEBAMXZ
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 188, symbol: ?getMaxHeadXRot@Mob@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 189, symbol: ?isAlliedTo@Mob@@UEAA_NPEAV1@@Z
    virtual bool isAlliedTo(class Mob*);

    // vIndex: 190, symbol: ?doHurtTarget@Mob@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool doHurtTarget(class Actor*, ::ActorDamageCause const&);

    // vIndex: 191, symbol: ?getArmorValue@Mob@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 192, symbol: ?hurtArmorSlots@Mob@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, std::bitset<4>);

    // vIndex: 193, symbol: ?setDamagedArmor@Mob@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setDamagedArmor(::ArmorSlot, class ItemStack const&);

    // vIndex: 194, symbol: ?sendArmorDamage@Mob@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmorDamage(std::bitset<4>);

    // vIndex: 195, symbol: ?sendArmor@Mob@@UEAAXV?$bitset@$03@std@@@Z
    virtual void sendArmor(std::bitset<4>);

    // vIndex: 196, symbol: ?getAllHand@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllHand() const;

    // vIndex: 197, symbol:
    // ?getAllEquipment@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllEquipment() const;

    // vIndex: 198, symbol: ?dropEquipmentOnDeath@Mob@@UEAAXAEBVActorDamageSource@@H@Z
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);

    // vIndex: 199, symbol: ?dropEquipmentOnDeath@Mob@@UEAAXXZ
    virtual void dropEquipmentOnDeath();

    // vIndex: 200, symbol: ?clearVanishEnchantedItemsOnDeath@Mob@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 201, symbol: ?sendInventory@Mob@@UEAAX_N@Z
    virtual void sendInventory(bool);

    // vIndex: 202, symbol: ?getDamageAfterEnchantReduction@Mob@@UEBAMAEBVActorDamageSource@@M@Z
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const&, float) const;

    // vIndex: 203, symbol: ?createAIGoals@Mob@@UEAA_NXZ
    virtual bool createAIGoals();

    // vIndex: 204, symbol: ?onBorn@Mob@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor&, class Actor&);

    // vIndex: 205, symbol: ?setItemSlot@Mob@@UEAA_NW4EquipmentSlot@@AEBVItemStack@@@Z
    virtual bool setItemSlot(::EquipmentSlot, class ItemStack const&);

    // vIndex: 206, symbol: ?setTransitioningSitting@Mob@@UEAAX_N@Z
    virtual void setTransitioningSitting(bool);

    // vIndex: 207, symbol: ?getAttackTime@Mob@@UEAAHXZ
    virtual int getAttackTime();

    // vIndex: 208, symbol: ?_getWalkTargetValue@Mob@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const&);

    // vIndex: 209, symbol: ?canExistWhenDisallowMob@Mob@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 210, symbol:
    // ?initBodyControl@Mob@@MEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 211, symbol: ?newServerAiStep@Mob@@MEAAXXZ
    virtual void newServerAiStep();

    // vIndex: 212, symbol: ?_serverAiMobStep@Mob@@MEAAXXZ
    virtual void _serverAiMobStep();

    // vIndex: 213, symbol: ?tickDeath@Mob@@MEAAXXZ
    virtual void tickDeath();

    // vIndex: 214, symbol: ?updateGliding@Mob@@MEAAXXZ
    virtual void updateGliding();

    // vIndex: 215, symbol: ?_getAdjustedAABBForSpawnCheck@Mob@@MEBA?AVAABB@@AEBV2@AEBVVec3@@@Z
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const&, class Vec3 const&) const;

    // symbol: ?renderDebugServerState@Mob@@UEAAXAEBVOptions@@@Z
    MCVAPI void renderDebugServerState(class Options const&);

    // symbol: ??0Mob@@QEAA@AEAVLevel@@AEAVEntityContext@@@Z
    MCAPI Mob(class Level&, class EntityContext&);

    // symbol: ??0Mob@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Mob(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol:
    // ?addSpeedModifier@Mob@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
    MCAPI void addSpeedModifier(class mce::UUID const&, std::string const&, float);

    // symbol: ?ate@Mob@@QEAAXXZ
    MCAPI void ate();

    // symbol: ?attackAnimation@Mob@@QEAAXPEAVActor@@M@Z
    MCAPI void attackAnimation(class Actor*, float);

    // symbol: ?calcMoveRelativeSpeed@Mob@@QEAAMW4TravelType@@@Z
    MCAPI float calcMoveRelativeSpeed(::TravelType);

    // symbol: ?checkForPostHitDamageImmunity@Mob@@QEAA_NMAEBVActorDamageSource@@@Z
    MCAPI bool checkForPostHitDamageImmunity(float, class ActorDamageSource const&);

    // symbol: ?checkTotemDeathProtection@Mob@@QEAA_NAEBVActorDamageSource@@@Z
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const&);

    // symbol: ?containerChanged@Mob@@QEAAXH@Z
    MCAPI void containerChanged(int);

    // symbol: ?createAI@Mob@@QEAAXV?$vector@UGoalDefinition@@V?$allocator@UGoalDefinition@@@std@@@std@@@Z
    MCAPI void createAI(std::vector<struct GoalDefinition>);

    // symbol: ?dropContainer@Mob@@QEAAXXZ
    MCAPI void dropContainer();

    // symbol: ?emitJumpPreventedEvent@Mob@@QEAAXAEBVBlockPos@@@Z
    MCAPI void emitJumpPreventedEvent(class BlockPos const&);

    // symbol: ?frostWalk@Mob@@QEAAXXZ
    MCAPI void frostWalk();

    // symbol: ?getArmorCoverPercentage@Mob@@QEBAMXZ
    MCAPI float getArmorCoverPercentage() const;

    // symbol: ?getArmorTypeHash@Mob@@QEAAHXZ
    MCAPI int getArmorTypeHash();

    // symbol: ?getBoundOrigin@Mob@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getBoundOrigin() const;

    // symbol: ?getCaravanHead@Mob@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getCaravanHead() const;

    // symbol: ?getCaravanSize@Mob@@QEBAHXZ
    MCAPI int getCaravanSize() const;

    // symbol: ?getDamageAfterArmorReduction@Mob@@QEBAMAEBVActorDamageSource@@M@Z
    MCAPI float getDamageAfterArmorReduction(class ActorDamageSource const&, float) const;

    // symbol: ?getDamageAfterResistanceEffect@Mob@@QEBAMAEBVActorDamageSource@@M@Z
    MCAPI float getDamageAfterResistanceEffect(class ActorDamageSource const&, float) const;

    // symbol: ?getEatCounter@Mob@@QEBAHXZ
    MCAPI int getEatCounter() const;

    // symbol: ?getExpectedFallDamage@Mob@@QEBAMMM@Z
    MCAPI float getExpectedFallDamage(float, float) const;

    // symbol: ?getFirstCaravanHead@Mob@@QEAAPEAV1@XZ
    MCAPI class Mob* getFirstCaravanHead();

    // symbol: ?getGlidingTicks@Mob@@QEBAHXZ
    MCAPI int getGlidingTicks() const;

    // symbol: ?getItemSlot@Mob@@QEBAAEBVItemStack@@W4EquipmentSlot@@@Z
    MCAPI class ItemStack const& getItemSlot(::EquipmentSlot) const;

    // symbol: ?getJumpEffectAmplifierValue@Mob@@QEAAMXZ
    MCAPI float getJumpEffectAmplifierValue();

    // symbol: ?getJumpMultiplier@Mob@@QEAAMXZ
    MCAPI float getJumpMultiplier();

    // symbol: ?getJumpPrevention@Mob@@QEAA?AUJumpPreventionResult@@XZ
    MCAPI struct JumpPreventionResult getJumpPrevention();

    // symbol: ?getJumpTicks@Mob@@QEBAHXZ
    MCAPI int getJumpTicks() const;

    // symbol: ?getMeleeKnockbackBonus@Mob@@QEAAHXZ
    MCAPI int getMeleeKnockbackBonus();

    // symbol: ?getMovementComponentCurrentSpeed@Mob@@QEBAMXZ
    MCAPI float getMovementComponentCurrentSpeed() const;

    // symbol: ?getNoActionTime@Mob@@QEBAHXZ
    MCAPI int getNoActionTime() const;

    // symbol: ?getRollCounter@Mob@@QEBAHXZ
    MCAPI int getRollCounter() const;

    // symbol: ?getTargetCaptain@Mob@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetCaptain() const;

    // symbol: ?getTravelType@Mob@@QEAA?AW4TravelType@@XZ
    MCAPI ::TravelType getTravelType();

    // symbol: ?getYBodyRotation@Mob@@QEBAMXZ
    MCAPI float getYBodyRotation() const;

    // symbol: ?hasBoundOrigin@Mob@@QEBA_NXZ
    MCAPI bool hasBoundOrigin() const;

    // symbol: ?hasCaravanTail@Mob@@QEBA_NXZ
    MCAPI bool hasCaravanTail() const;

    // symbol: ?hurtArmor@Mob@@QEAAXAEBVActorDamageSource@@H@Z
    MCAPI void hurtArmor(class ActorDamageSource const&, int);

    // symbol: ?isAbleToMove@Mob@@QEBA_NXZ
    MCAPI bool isAbleToMove() const;

    // symbol: ?isEating@Mob@@QEBA_NXZ
    MCAPI bool isEating() const;

    // symbol: ?isGliding@Mob@@QEBA_NXZ
    MCAPI bool isGliding() const;

    // symbol: ?isLayingEgg@Mob@@QEBA_NXZ
    MCAPI bool isLayingEgg() const;

    // symbol: ?isPregnant@Mob@@QEBA_NXZ
    MCAPI bool isPregnant() const;

    // symbol: ?isRolling@Mob@@QEBA_NXZ
    MCAPI bool isRolling() const;

    // symbol: ?isSprinting@Mob@@QEBA_NXZ
    MCAPI bool isSprinting() const;

    // symbol: ?isTransitioningSitting@Mob@@QEBA_NXZ
    MCAPI bool isTransitioningSitting() const;

    // symbol: ?joinCaravan@Mob@@QEAAXPEAV1@@Z
    MCAPI void joinCaravan(class Mob*);

    // symbol: ?leaveCaravan@Mob@@QEAAXXZ
    MCAPI void leaveCaravan();

    // symbol: ?lookAt@Mob@@QEAAXPEAVActor@@MM@Z
    MCAPI void lookAt(class Actor*, float, float);

    // symbol: ?onPlayerDimensionChanged@Mob@@QEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCAPI void onPlayerDimensionChanged(class Player*, DimensionType, DimensionType);

    // symbol: ?onPlayerJump@Mob@@QEAAXH@Z
    MCAPI void onPlayerJump(int);

    // symbol: ?removeSpeedModifier@Mob@@QEAAXAEBVUUID@mce@@@Z
    MCAPI void removeSpeedModifier(class mce::UUID const&);

    // symbol: ?resetAttributes@Mob@@QEAAXXZ
    MCAPI void resetAttributes();

    // symbol: ?resetNoActionTime@Mob@@QEAAXXZ
    MCAPI void resetNoActionTime();

    // symbol: ?sendArmorDamageSlot@Mob@@QEAAXW4ArmorSlot@@@Z
    MCAPI void sendArmorDamageSlot(::ArmorSlot);

    // symbol: ?sendArmorSlot@Mob@@QEAAXW4ArmorSlot@@@Z
    MCAPI void sendArmorSlot(::ArmorSlot);

    // symbol: ?setEatCounter@Mob@@QEAAXH@Z
    MCAPI void setEatCounter(int);

    // symbol: ?setEating@Mob@@QEAAX_N@Z
    MCAPI void setEating(bool);

    // symbol: ?setIsLayingEgg@Mob@@QEAAX_N@Z
    MCAPI void setIsLayingEgg(bool);

    // symbol: ?setIsPregnant@Mob@@QEAAX_N@Z
    MCAPI void setIsPregnant(bool);

    // symbol: ?setJumpTicks@Mob@@QEAAXH@Z
    MCAPI void setJumpTicks(int);

    // symbol: ?setMovementComponentCurrentSpeed@Mob@@QEAAXM@Z
    MCAPI void setMovementComponentCurrentSpeed(float);

    // symbol: ?setNaturallySpawned@Mob@@QEAAX_N@Z
    MCAPI void setNaturallySpawned(bool);

    // symbol: ?setRolling@Mob@@QEAAX_N@Z
    MCAPI void setRolling(bool);

    // symbol: ?setSpawnMethod@Mob@@QEAAXW4MobSpawnMethod@@@Z
    MCAPI void setSpawnMethod(::MobSpawnMethod);

    // symbol: ?setSpeedModifier@Mob@@QEAAXM@Z
    MCAPI void setSpeedModifier(float);

    // symbol: ?setSurfaceMob@Mob@@QEAAX_N@Z
    MCAPI void setSurfaceMob(bool);

    // symbol: ?setTargetCaptain@Mob@@QEAAXUActorUniqueID@@@Z
    MCAPI void setTargetCaptain(struct ActorUniqueID);

    // symbol: ?setYBodyRotation@Mob@@QEAAXM@Z
    MCAPI void setYBodyRotation(float);

    // symbol: ?setYBodyRotations@Mob@@QEAAXMM@Z
    MCAPI void setYBodyRotations(float, float);

    // symbol: ?shouldApplyWaterGravity@Mob@@QEAA_NXZ
    MCAPI bool shouldApplyWaterGravity();

    // symbol: ?snapToYBodyRot@Mob@@QEAAXM@Z
    MCAPI void snapToYBodyRot(float);

    // symbol: ?snapToYHeadRot@Mob@@QEAAXM@Z
    MCAPI void snapToYHeadRot(float);

    // symbol: ?tryFrostWalk@Mob@@QEAAXXZ
    MCAPI void tryFrostWalk();

    // symbol: ?tryProcessSoulSpeed@Mob@@QEAAXXZ
    MCAPI void tryProcessSoulSpeed();

    // symbol: ?tryUpdateAI@Mob@@QEAAXXZ
    MCAPI void tryUpdateAI();

    // symbol: ?updateEquipment@Mob@@QEAAXXZ
    MCAPI void updateEquipment();

    // symbol: ?setSprinting@Mob@@SAXAEAVBaseAttributeMap@@VSynchedActorDataWriter@@_N@Z
    MCAPI static void setSprinting(class BaseAttributeMap&, class SynchedActorDataWriter, bool);

    // symbol: ?tryGetFromEntity@Mob@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Mob* tryGetFromEntity(class EntityContext&, bool);

    // symbol: ?ARMOR_DAMAGE_DIVISOR@Mob@@2HB
    MCAPI static int const ARMOR_DAMAGE_DIVISOR;

    // symbol: ?ARMOR_PROTECTION_DIVIDER@Mob@@2MB
    MCAPI static float const ARMOR_PROTECTION_DIVIDER;

    // symbol: ?ASCEND_BLOCK_BY_JUMPING_SPEED@Mob@@2MB
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;

    // symbol: ?BASE_ARMOR_TOUGHNESS@Mob@@2MB
    MCAPI static float const BASE_ARMOR_TOUGHNESS;

    // symbol: ?DEFAULT_GRAVITY@Mob@@2MB
    MCAPI static float const DEFAULT_GRAVITY;

    // symbol: ?FRICTION_CONSTANT@Mob@@2MB
    MCAPI static float const FRICTION_CONSTANT;

    // symbol: ?FRICTION_CONSTANT_MODIFIED@Mob@@2MB
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;

    // symbol: ?FRICTION_MODIFIER@Mob@@2MB
    MCAPI static float const FRICTION_MODIFIER;

    // symbol: ?GLIDING_FALL_RESET_DELTA@Mob@@2MB
    MCAPI static float const GLIDING_FALL_RESET_DELTA;

    // symbol: ?LADDER_CLIMB_SPEED@Mob@@2MB
    MCAPI static float const LADDER_CLIMB_SPEED;

    // symbol: ?MAX_ARMOR@Mob@@2MB
    MCAPI static float const MAX_ARMOR;

    // symbol: ?MIN_ARMOR_RATIO@Mob@@2MB
    MCAPI static float const MIN_ARMOR_RATIO;

    // symbol: ?NUM_ARMOR_ITEMS@Mob@@2MB
    MCAPI static float const NUM_ARMOR_ITEMS;

    // symbol: ?PLAYER_SWIMMING_SURFACE_OFFSET@Mob@@2MB
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;

    // symbol: ?REMOVE_PASSENGERS_DELAY@Mob@@2HB
    MCAPI static int const REMOVE_PASSENGERS_DELAY;

    // symbol: ?SLOW_FALL_GRAVITY@Mob@@2MB
    MCAPI static float const SLOW_FALL_GRAVITY;

    // symbol: ?SPAWN_XP_DELAY@Mob@@2HB
    MCAPI static int const SPAWN_XP_DELAY;

    // symbol: ?TOTAL_ROLL_STEPS@Mob@@2HB
    MCAPI static int const TOTAL_ROLL_STEPS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addBuiltInMobComponents@Mob@@IEAA?AUBuiltInMobComponents@@XZ
    MCAPI struct BuiltInMobComponents _addBuiltInMobComponents();

    // symbol: ?_doSprintParticleEffect@Mob@@IEAAXXZ
    MCAPI void _doSprintParticleEffect();

    // symbol: ?_processSoulSpeed@Mob@@IEAAXXZ
    MCAPI void _processSoulSpeed();

    // symbol: ?_registerMobAttributes@Mob@@IEAAXXZ
    MCAPI void _registerMobAttributes();

    // symbol: ?dropBags@Mob@@IEAAXXZ
    MCAPI void dropBags();

    // symbol: ?getCurrentSwingDuration@Mob@@IEAAHXZ
    MCAPI int getCurrentSwingDuration();

    // symbol: ?jumpFromGround@Mob@@IEAAXAEBVIConstBlockSource@@@Z
    MCAPI void jumpFromGround(class IConstBlockSource const&);

    // symbol: ?saveOffhand@Mob@@IEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;

    // symbol: ?tickEffects@Mob@@IEAAXXZ
    MCAPI void tickEffects();

    // symbol: ?updateAttackAnim@Mob@@IEAAXXZ
    MCAPI void updateAttackAnim();

    // symbol: ?updateGlidingDurability@Mob@@IEAA_NXZ
    MCAPI bool updateGlidingDurability();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initHardCodedComponents@Mob@@AEAA_N_N@Z
    MCAPI bool _initHardCodedComponents(bool);

    // symbol: ?_initialize@Mob@@AEAAXAEAVEntityContext@@_N@Z
    MCAPI void _initialize(class EntityContext&, bool);

    // symbol: ?_saveArmor@Mob@@AEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> _saveArmor() const;

    // symbol: ?_updateSprintingState@Mob@@AEAAXXZ
    MCAPI void _updateSprintingState();

    // symbol: ?_verifyAttributes@Mob@@AEAAXXZ
    MCAPI void _verifyAttributes();

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?MAX_INACTIVITY_TIMER@Mob@@1HB
    MCAPI static int const MAX_INACTIVITY_TIMER;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_INACTIVITY_TIMER() { return MAX_INACTIVITY_TIMER; }

    // NOLINTEND
};
