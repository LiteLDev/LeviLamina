/**
 * @file  MC/Mob.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class UserEntityIdentifierComponent;

#undef BEFORE_EXTRA

/**
 * @brief MC class Mob.
 *
 */
class Mob : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
struct JumpPreventionResult {
    JumpPreventionResult() = delete;
    JumpPreventionResult(JumpPreventionResult const&) = delete;
    JumpPreventionResult(JumpPreventionResult const&&) = delete;
};

public:

    LIAPI bool refreshInventory();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOB
public:
    class Mob& operator=(class Mob const &) = delete;
    Mob(class Mob const &) = delete;
    Mob() = delete;
#endif

public:
    /**
     * @hash   -948762362
     * @vftbl  0
     * @symbol ?hasComponent@Mob@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool hasComponent(class HashedString const &) const;
    /**
     * @hash   -658610419
     * @vftbl  7
     * @symbol ?outOfWorld@Mob@@MEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   992536205
     * @vftbl  8
     * @symbol ?reloadHardcoded@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -1345100824
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   1631554160
     * @vftbl  10
     * @symbol ?initializeComponents@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   2020916571
     * @vftbl  13
     * @symbol ?_doInitialMove@Mob@@MEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Mob();
    /**
     * @hash   2136859222
     * @vftbl  30
     * @symbol ?getInterpolatedBodyRot@Mob@@UEBAMM@Z
     */
    virtual float getInterpolatedBodyRot(float) const;
    /**
     * @hash   -1615124892
     * @vftbl  31
     * @symbol ?getInterpolatedHeadRot@Mob@@UEBAMM@Z
     */
    virtual float getInterpolatedHeadRot(float) const;
    /**
     * @hash   -21777442
     * @vftbl  32
     * @symbol ?getInterpolatedBodyYaw@Mob@@UEBAMM@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @hash   -97958213
     * @vftbl  33
     * @symbol ?getYawSpeedInDegreesPerSecond@Mob@@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const;
    /**
     * @hash   1763242265
     * @vftbl  36
     * @symbol ?resetInterpolated@Mob@@UEAAXXZ
     */
    virtual void resetInterpolated();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -583141872
     * @vftbl  41
     * @symbol ?blockedByShield@Mob@@UEAAXAEBVActorDamageSource@@AEAVActor@@@Z
     */
    virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /**
     * @hash   -1530677043
     * @vftbl  43
     * @symbol ?teleportTo@Mob@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   1051746475
     * @vftbl  48
     * @symbol ?normalTick@Mob@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -1333160891
     * @vftbl  49
     * @symbol ?baseTick@Mob@@UEAAXXZ
     */
    virtual void baseTick();
    /**
     * @hash   72048007
     * @vftbl  50
     * @symbol ?passengerTick@Mob@@MEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @hash   -124076841
     * @vftbl  52
     * @symbol ?startRiding@Mob@@UEAA_NAEAVActor@@@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @hash   -952012233
     * @vftbl  53
     * @symbol ?addPassenger@Mob@@UEAAXAEAVActor@@@Z
     */
    virtual void addPassenger(class Actor &);
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   1757978712
     * @vftbl  91
     * @symbol ?isImmobile@Mob@@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   1082742606
     * @vftbl  94
     * @symbol ?isPickable@Mob@@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @hash   495931037
     * @vftbl  96
     * @symbol ?isSleeping@Mob@@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   244260968
     * @vftbl  97
     * @symbol ?setSleeping@Mob@@UEAAX_N@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @hash   1577117255
     * @vftbl  100
     * @symbol ?isBlocking@Mob@@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   -1796651237
     * @vftbl  102
     * @symbol ?isAlive@Mob@@UEBA_NXZ
     */
    virtual bool isAlive() const;
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   398478005
     * @vftbl  106
     * @symbol ?isSurfaceMob@Mob@@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const;
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   1108946985
     * @vftbl  113
     * @symbol ?setTarget@Mob@@UEAAXPEAVActor@@@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @hash   1997434007
     * @vftbl  115
     * @symbol ?attack@Mob@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool attack(class Actor &, enum ActorDamageCause const &);
    /**
     * @hash   -2105956757
     * @vftbl  126
     * @symbol ?canPowerJump@Mob@@UEBA_NXZ
     */
    virtual bool canPowerJump() const;
    /**
     * @hash   -144686622
     * @vftbl  128
     * @symbol ?isJumping@Mob@@UEBA_NXZ
     */
    virtual bool isJumping() const;
    /**
     * @hash   1515712748
     * @vftbl  135
     * @symbol ?getBlockDamageCause@Mob@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
     */
    virtual enum ActorDamageCause getBlockDamageCause(class Block const &) const;
    /**
     * @hash   -1932986537
     * @vftbl  136
     * @symbol ?animateHurt@Mob@@UEAAXXZ
     */
    virtual void animateHurt();
    /**
     * @hash   -675249450
     * @vftbl  137
     * @symbol ?doFireHurt@Mob@@UEAA_NH@Z
     */
    virtual bool doFireHurt(int);
    /**
     * @hash   -949679898
     * @vftbl  141
     * @symbol ?handleEntityEvent@Mob@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   1125286968
     * @vftbl  155
     * @symbol ?getArmorMaterialTypeInSlot@Mob@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
     */
    virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /**
     * @hash   23388633
     * @vftbl  156
     * @symbol ?getArmorMaterialTextureTypeInSlot@Mob@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
     */
    virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /**
     * @hash   -843661283
     * @vftbl  157
     * @symbol ?getArmorColorInSlot@Mob@@UEBAMW4ArmorSlot@@H@Z
     */
    virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /**
     * @hash   -496309492
     * @vftbl  159
     * @symbol ?setEquippedSlot@Mob@@UEAAXW4EquipmentSlot@@AEBVItemStack@@@Z
     */
    virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /**
     * @hash   -225050993
     * @vftbl  173
     * @symbol ?canFreeze@Mob@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   177321369
     * @vftbl  185
     * @symbol ?causeFallDamage@Mob@@MEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   -283643763
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@Mob@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @hash   59896185
     * @vftbl  194
     * @symbol ?inCaravan@Mob@@UEBA_NXZ
     */
    virtual bool inCaravan() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -367808786
     * @vftbl  199
     * @symbol ?stopRiding@Mob@@UEAAX_N00@Z
     */
    virtual void stopRiding(bool, bool, bool);
    /**
     * @hash   1799173524
     * @vftbl  202
     * @symbol ?buildDebugInfo@Mob@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void buildDebugInfo(std::string &) const;
    /**
     * @hash   -2113665658
     * @vftbl  207
     * @symbol ?getDeathTime@Mob@@UEBAHXZ
     */
    virtual int getDeathTime() const;
    /**
     * @hash   1948664405
     * @vftbl  219
     * @symbol ?swing@Mob@@UEAAXXZ
     */
    virtual void swing();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @hash   1858005426
     * @vftbl  226
     * @symbol ?getYHeadRot@Mob@@UEBAMXZ
     */
    virtual float getYHeadRot() const;
    /**
     * @hash   1460715019
     * @vftbl  227
     * @symbol ?setYHeadRot@Mob@@UEAAXM@Z
     */
    virtual void setYHeadRot(float);
    /**
     * @hash   -1448129719
     * @vftbl  228
     * @symbol ?getYHeadRotO@Mob@@UEBAMXZ
     */
    virtual float getYHeadRotO() const;
    /**
     * @vftbl  229
     * @symbol ?setYHeadRotO@Mob@@UEAAXM@Z
     */
    virtual void setYHeadRotO(float);
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   1509276133
     * @vftbl  252
     * @symbol ?kill@Mob@@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   373571971
     * @vftbl  253
     * @symbol ?die@Mob@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -223439758
     * @vftbl  254
     * @symbol ?shouldDropDeathLoot@Mob@@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   1441312559
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Mob@@MEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1810254224
     * @vftbl  271
     * @symbol ?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1836375040
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Mob@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1657916659
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Mob@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1903070382
     * @vftbl  276
     * @symbol ?_playStepSound@Mob@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -121066376
     * @vftbl  283
     * @symbol ?_removePassenger@Mob@@MEAAXAEBUActorUniqueID@@_N11@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const &, bool, bool, bool);
    /**
     * @hash   -198591236
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Mob@@MEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1831776876
     * @vftbl  286
     * @symbol ?knockback@Mob@@UEAAXPEAVActor@@HMMMMM@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @hash   1067522611
     * @vftbl  287
     * @symbol ?spawnAnim@Mob@@UEAAXXZ
     */
    virtual void spawnAnim();
    /**
     * @hash   773117279
     * @vftbl  288
     * @symbol ?setSprinting@Mob@@UEAAX_N@Z
     */
    virtual void setSprinting(bool);
    /**
     * @hash   668454770
     * @vftbl  289
     * @symbol ?getHurtSound@Mob@@UEAA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getHurtSound();
    /**
     * @hash   726152441
     * @vftbl  290
     * @symbol ?getDeathSound@Mob@@UEAA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getDeathSound();
    /**
     * @hash   -1511840582
     * @vftbl  291
     * @symbol ?getItemInHandIcon@Mob@@UEAAPEBUTextureUVCoordinateSet@@AEBVItemStack@@H@Z
     */
    virtual struct TextureUVCoordinateSet const * getItemInHandIcon(class ItemStack const &, int);
    /**
     * @hash   -658342737
     * @vftbl  292
     * @symbol ?getSpeed@Mob@@UEBAMXZ
     */
    virtual float getSpeed() const;
    /**
     * @hash   1246428982
     * @vftbl  293
     * @symbol ?setSpeed@Mob@@UEAAXM@Z
     */
    virtual void setSpeed(float);
    /**
     * @hash   -806653046
     * @vftbl  294
     * @symbol ?hurtEffects@Mob@@UEAAXAEBVActorDamageSource@@M_N1@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -952562709
     * @vftbl  295
     * @symbol ?getMeleeWeaponDamageBonus@Mob@@UEAAMPEAV1@@Z
     */
    virtual float getMeleeWeaponDamageBonus(class Mob *);
    /**
     * @hash   -195597186
     * @vftbl  296
     * @symbol ?getMeleeKnockbackBonus@Mob@@UEAAHXZ
     */
    virtual int getMeleeKnockbackBonus();
    /**
     * @hash   1247157969
     * @vftbl  297
     * @symbol ?travel@Mob@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   1951952619
     * @vftbl  298
     * @symbol ?travel@Mob@@UEBAXAEAUIMobMovementProxy@@MMM@Z
     */
    virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /**
     * @hash   -34898397
     * @vftbl  299
     * @symbol ?applyFinalFriction@Mob@@UEAAXM_N@Z
     */
    virtual void applyFinalFriction(float, bool);
    /**
     * @hash   2032628875
     * @vftbl  300
     * @symbol ?aiStep@Mob@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   2019939355
     * @vftbl  301
     * @symbol ?aiStep@Mob@@UEBAXAEAUIMobMovementProxy@@@Z
     */
    virtual void aiStep(struct IMobMovementProxy &) const;
    /**
     * @hash   -337278769
     * @vftbl  302
     * @symbol ?pushActors@Mob@@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @hash   1742880346
     * @vftbl  303
     * @symbol ?lookAt@Mob@@UEAAXPEAVActor@@MM@Z
     */
    virtual void lookAt(class Actor *, float, float);
    /**
     * @hash   -1021234283
     * @vftbl  304
     * @symbol ?isLookingAtAnEntity@Mob@@UEAA_NXZ
     */
    virtual bool isLookingAtAnEntity();
    /**
     * @hash   564453375
     * @vftbl  305
     * @symbol ?checkSpawnRules@Mob@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @hash   -343127259
     * @vftbl  306
     * @symbol ?checkSpawnObstruction@Mob@@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const;
    /**
     * @hash   -1348798876
     * @vftbl  307
     * @symbol ?getAttackAnim@Mob@@UEAAMM@Z
     */
    virtual float getAttackAnim(float);
    /**
     * @hash   860276845
     * @vftbl  308
     * @symbol ?getItemUseDuration@Mob@@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @hash   597584186
     * @vftbl  309
     * @symbol ?getItemUseStartupProgress@Mob@@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const;
    /**
     * @hash   -506393666
     * @vftbl  310
     * @symbol ?getItemUseIntervalProgress@Mob@@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const;
    /**
     * @hash   -959846561
     * @vftbl  311
     * @symbol ?getItemUseIntervalAxis@Mob@@UEBAHXZ
     */
    virtual int getItemUseIntervalAxis() const;
    /**
     * @hash   1006597983
     * @vftbl  312
     * @symbol ?getTimeAlongSwing@Mob@@UEBAHXZ
     */
    virtual int getTimeAlongSwing() const;
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   1847269164
     * @vftbl  314
     * @symbol ?getMaxHeadXRot@Mob@@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @hash   1506167627
     * @vftbl  315
     * @symbol ?isAlliedTo@Mob@@UEAA_NPEAV1@@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @hash   -1579144930
     * @vftbl  316
     * @symbol ?doHurtTarget@Mob@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   -1947702330
     * @vftbl  318
     * @symbol ?leaveCaravan@Mob@@UEAAXXZ
     */
    virtual void leaveCaravan();
    /**
     * @hash   -1060194739
     * @vftbl  319
     * @symbol ?joinCaravan@Mob@@UEAAXPEAV1@@Z
     */
    virtual void joinCaravan(class Mob *);
    /**
     * @hash   -2057707772
     * @vftbl  320
     * @symbol ?hasCaravanTail@Mob@@UEBA_NXZ
     */
    virtual bool hasCaravanTail() const;
    /**
     * @hash   812338249
     * @vftbl  321
     * @symbol ?getCaravanHead@Mob@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getCaravanHead() const;
    /**
     * @hash   -1293404189
     * @vftbl  322
     * @symbol ?getArmorValue@Mob@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   -1233083146
     * @vftbl  323
     * @symbol ?getArmorCoverPercentage@Mob@@UEBAMXZ
     */
    virtual float getArmorCoverPercentage() const;
    /**
     * @hash   -399359184
     * @vftbl  324
     * @symbol ?getToughnessValue@Mob@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @hash   -1710923292
     * @vftbl  325
     * @symbol ?hurtArmorSlots@Mob@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @hash   46031722
     * @vftbl  326
     * @symbol ?setDamagedArmor@Mob@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual void setDamagedArmor(enum ArmorSlot, class ItemStack const &);
    /**
     * @hash   1990537960
     * @vftbl  327
     * @symbol ?sendArmorDamage@Mob@@UEAAXV?$bitset@$03@std@@@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @hash   870378311
     * @vftbl  328
     * @symbol ?sendArmor@Mob@@UEAAXV?$bitset@$03@std@@@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @hash   -651772123
     * @vftbl  329
     * @symbol ?containerChanged@Mob@@UEAAXH@Z
     */
    virtual void containerChanged(int);
    /**
     * @hash   947229388
     * @vftbl  330
     * @symbol ?updateEquipment@Mob@@UEAAXXZ
     */
    virtual void updateEquipment();
    /**
     * @hash   518571229
     * @vftbl  331
     * @symbol ?clearEquipment@Mob@@UEAAHXZ
     */
    virtual int clearEquipment();
    /**
     * @hash   457982110
     * @vftbl  332
     * @symbol ?getAllArmorID@Mob@@UEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ
     */
    virtual std::vector<int> getAllArmorID() const;
    /**
     * @hash   -274035933
     * @vftbl  333
     * @symbol ?getAllHand@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> getAllHand() const;
    /**
     * @hash   1091197292
     * @vftbl  334
     * @symbol ?getAllEquipment@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /**
     * @hash   -769860883
     * @vftbl  335
     * @symbol ?getArmorTypeHash@Mob@@UEAAHXZ
     */
    virtual int getArmorTypeHash();
    /**
     * @hash   1030046082
     * @vftbl  336
     * @symbol ?dropEquipmentOnDeath@Mob@@UEAAXAEBVActorDamageSource@@H@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /**
     * @hash   1497334349
     * @vftbl  337
     * @symbol ?dropEquipmentOnDeath@Mob@@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath();
    /**
     * @hash   2026137420
     * @vftbl  338
     * @symbol ?clearVanishEnchantedItemsOnDeath@Mob@@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   -1674324895
     * @vftbl  339
     * @symbol ?sendInventory@Mob@@UEAAX_N@Z
     */
    virtual void sendInventory(bool);
    /**
     * @hash   -759778569
     * @vftbl  340
     * @symbol ?getDamageAfterEnchantReduction@Mob@@UEBAMAEBVActorDamageSource@@M@Z
     */
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const &, float) const;
    /**
     * @hash   1025884849
     * @vftbl  341
     * @symbol ?getDamageAfterArmorReduction@Mob@@UEBAMAEBVActorDamageSource@@M@Z
     */
    virtual float getDamageAfterArmorReduction(class ActorDamageSource const &, float) const;
    /**
     * @hash   -516062617
     * @vftbl  342
     * @symbol ?getDamageAfterResistanceEffect@Mob@@UEBAMAEBVActorDamageSource@@M@Z
     */
    virtual float getDamageAfterResistanceEffect(class ActorDamageSource const &, float) const;
    /**
     * @hash   -1582904331
     * @vftbl  343
     * @symbol ?createAIGoals@Mob@@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @hash   1388763183
     * @vftbl  344
     * @symbol ?onBorn@Mob@@UEAAXAEAVActor@@0@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @hash   -368643550
     * @vftbl  345
     * @symbol ?setItemSlot@Mob@@UEAA_NW4EquipmentSlot@@AEBVItemStack@@@Z
     */
    virtual bool setItemSlot(enum EquipmentSlot, class ItemStack const &);
    /**
     * @hash   -1133741420
     * @vftbl  346
     * @symbol ?setTransitioningSitting@Mob@@UEAAX_N@Z
     */
    virtual void setTransitioningSitting(bool);
    /**
     * @hash   -1898043582
     * @vftbl  347
     * @symbol ?attackAnimation@Mob@@UEAAXPEAVActor@@M@Z
     */
    virtual void attackAnimation(class Actor *, float);
    /**
     * @hash   -858421961
     * @vftbl  348
     * @symbol ?getAttackTime@Mob@@UEAAHXZ
     */
    virtual int getAttackTime();
    /**
     * @hash   -594921157
     * @vftbl  349
     * @symbol ?_getWalkTargetValue@Mob@@UEAAMAEBVBlockPos@@@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @hash   -113840388
     * @vftbl  350
     * @symbol ?canExistWhenDisallowMob@Mob@@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   1635347907
     * @vftbl  352
     * @symbol ?ascendLadder@Mob@@UEAAXXZ
     */
    virtual void ascendLadder();
    /**
     * @hash   -1103893167
     * @vftbl  353
     * @symbol ?ascendBlockByJumping@Mob@@UEAAXXZ
     */
    virtual void ascendBlockByJumping();
    /**
     * @hash   -231679963
     * @vftbl  354
     * @symbol ?descendBlockByCrouching@Mob@@UEAAXXZ
     */
    virtual void descendBlockByCrouching();
    /**
     * @hash   -628904759
     * @vftbl  355
     * @symbol ?dropContainer@Mob@@UEAAXXZ
     */
    virtual void dropContainer();
    /**
     * @hash   -2145572986
     * @vftbl  356
     * @symbol ?initBodyControl@Mob@@MEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @hash   -1790948993
     * @vftbl  357
     * @symbol ?jumpFromGround@Mob@@MEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @hash   246390823
     * @vftbl  358
     * @symbol ?jumpFromGround@Mob@@MEBAXAEAUIMobMovementProxy@@@Z
     */
    virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /**
     * @hash   1978898081
     * @vftbl  359
     * @symbol ?updateAi@Mob@@MEAAXXZ
     */
    virtual void updateAi();
    /**
     * @hash   1571492679
     * @vftbl  360
     * @symbol ?newServerAiStep@Mob@@MEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @hash   -377328910
     * @vftbl  361
     * @symbol ?_serverAiMobStep@Mob@@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @hash   636347802
     * @vftbl  362
     * @symbol ?dropBags@Mob@@MEAAXXZ
     */
    virtual void dropBags();
    /**
     * @hash   347230967
     * @vftbl  363
     * @symbol ?tickDeath@Mob@@MEAAXXZ
     */
    virtual void tickDeath();
    /**
     * @hash   -1521508727
     * @vftbl  364
     * @symbol ?updateGliding@Mob@@MEAAXXZ
     */
    virtual void updateGliding();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -257600630
     * @vftbl  366
     * @symbol ?_getAdjustedAABBForSpawnCheck@Mob@@MEBA?AVAABB@@AEBV2@AEBVVec3@@@Z
     */
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const &, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOB
    /**
     * @hash   1170472783
     * @symbol ?_allowAscendingScaffolding@Mob@@MEBA_NXZ
     */
    MCVAPI bool _allowAscendingScaffolding() const;
    /**
     * @hash   -54505255
     * @symbol ?ate@Mob@@UEAAXXZ
     */
    MCVAPI void ate();
    /**
     * @hash   1082701179
     * @symbol ?canBeControlledByPassenger@Mob@@UEAA_NXZ
     */
    MCVAPI bool canBeControlledByPassenger();
    /**
     * @hash   1117258312
     * @symbol ?isShootable@Mob@@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -367932557
     * @symbol ?renderDebugServerState@Mob@@UEAAXAEBVOptions@@@Z
     */
    MCVAPI void renderDebugServerState(class Options const &);
    /**
     * @hash   97849401
     * @symbol ?useNewAi@Mob@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   1226042348
     * @symbol ??0Mob@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Mob(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1379397340
     * @symbol ??0Mob@@QEAA@AEAVLevel@@AEAVEntityContext@@@Z
     */
    MCAPI Mob(class Level &, class EntityContext &);
    /**
     * @hash   1336058471
     * @symbol ?_endJump@Mob@@QEAAXXZ
     */
    MCAPI void _endJump();
    /**
     * @hash   -1790532852
     * @symbol ?addSpeedModifier@Mob@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     */
    MCAPI void addSpeedModifier(class mce::UUID const &, std::string const &, float);
    /**
     * @hash   -1987805917
     * @symbol ?calcMoveRelativeSpeed@Mob@@QEAAMW4TravelType@@@Z
     */
    MCAPI float calcMoveRelativeSpeed(enum TravelType);
    /**
     * @hash   1194377924
     * @symbol ?checkForPostHitDamageImmunity@Mob@@QEAA_NMAEBVActorDamageSource@@@Z
     */
    MCAPI bool checkForPostHitDamageImmunity(float, class ActorDamageSource const &);
    /**
     * @hash   -1443856679
     * @symbol ?checkTotemDeathProtection@Mob@@QEAA_NAEBVActorDamageSource@@@Z
     */
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const &);
    /**
     * @hash   -1921126946
     * @symbol ?createAI@Mob@@QEAAXV?$vector@UGoalDefinition@@V?$allocator@UGoalDefinition@@@std@@@std@@@Z
     */
    MCAPI void createAI(std::vector<struct GoalDefinition>);
    /**
     * @hash   -974685522
     * @symbol ?discardFriction@Mob@@QEBA_NXZ
     */
    MCAPI bool discardFriction() const;
    /**
     * @hash   1843632554
     * @symbol ?emitJumpPreventedEvent@Mob@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void emitJumpPreventedEvent(class BlockPos const &);
    /**
     * @hash   548358223
     * @symbol ?frostWalk@Mob@@QEAAXXZ
     */
    MCAPI void frostWalk();
    /**
     * @hash   -292215812
     * @symbol ?getBoundOrigin@Mob@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getBoundOrigin() const;
    /**
     * @hash   -1554259880
     * @symbol ?getCaravanSize@Mob@@QEBAHXZ
     */
    MCAPI int getCaravanSize() const;
    /**
     * @hash   1774248364
     * @symbol ?getEatCounter@Mob@@QEBAHXZ
     */
    MCAPI int getEatCounter() const;
    /**
     * @hash   339603896
     * @symbol ?getFirstCaravanHead@Mob@@QEAAPEAV1@XZ
     */
    MCAPI class Mob * getFirstCaravanHead();
    /**
     * @hash   1310236374
     * @symbol ?getFlightSpeed@Mob@@QEBAMXZ
     */
    MCAPI float getFlightSpeed() const;
    /**
     * @hash   2017097508
     * @symbol ?getFrictionModifier@Mob@@QEBAMXZ
     */
    MCAPI float getFrictionModifier() const;
    /**
     * @hash   -46612180
     * @symbol ?getGlidingTicks@Mob@@QEBAHXZ
     */
    MCAPI int getGlidingTicks() const;
    /**
     * @hash   237772939
     * @symbol ?getItemSlot@Mob@@QEBAAEBVItemStack@@W4EquipmentSlot@@@Z
     */
    MCAPI class ItemStack const & getItemSlot(enum EquipmentSlot) const;
    /**
     * @hash   535596674
     * @symbol ?getJumpEffectAmplifierValue@Mob@@QEAAMXZ
     */
    MCAPI float getJumpEffectAmplifierValue();
    /**
     * @hash   306717666
     * @symbol ?getJumpMultiplier@Mob@@QEAAMXZ
     */
    MCAPI float getJumpMultiplier();
    /**
     * @hash   -1221064410
     * @symbol ?getJumpPower@Mob@@QEBAMXZ
     */
    MCAPI float getJumpPower() const;
    /**
     * @hash   -1437705822
     * @symbol ?getJumpPrevention@Mob@@QEAA?AUJumpPreventionResult@@XZ
     */
    MCAPI struct JumpPreventionResult getJumpPrevention();
    /**
     * @hash   854116528
     * @symbol ?getMovementComponentCurrentSpeed@Mob@@QEBAMXZ
     */
    MCAPI float getMovementComponentCurrentSpeed() const;
    /**
     * @hash   169294860
     * @symbol ?getNoActionTime@Mob@@QEBAHXZ
     */
    MCAPI int getNoActionTime() const;
    /**
     * @hash   -227871804
     * @symbol ?getPassengerLockedBodyRot@Mob@@QEBAMXZ
     */
    MCAPI float getPassengerLockedBodyRot() const;
    /**
     * @hash   1652480436
     * @symbol ?getPassengerRotLimit@Mob@@QEBAMXZ
     */
    MCAPI float getPassengerRotLimit() const;
    /**
     * @hash   1918878392
     * @symbol ?getRollCounter@Mob@@QEBAHXZ
     */
    MCAPI int getRollCounter() const;
    /**
     * @hash   -1309034840
     * @symbol ?getSwimSpeedMultiplier@Mob@@QEBAMXZ
     */
    MCAPI float getSwimSpeedMultiplier() const;
    /**
     * @hash   562340306
     * @symbol ?getTargetCaptain@Mob@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getTargetCaptain() const;
    /**
     * @hash   -1868292338
     * @symbol ?getTravelType@Mob@@QEAA?AW4TravelType@@XZ
     */
    MCAPI enum TravelType getTravelType();
    /**
     * @hash   -898337938
     * @symbol ?getYRotA@Mob@@QEBAMXZ
     */
    MCAPI float getYRotA() const;
    /**
     * @hash   -1567119254
     * @symbol ?getZza@Mob@@QEBAMXZ
     */
    MCAPI float getZza() const;
    /**
     * @hash   -431444576
     * @symbol ?hasBoundOrigin@Mob@@QEBA_NXZ
     */
    MCAPI bool hasBoundOrigin() const;
    /**
     * @hash   235070417
     * @symbol ?hurtArmor@Mob@@QEAAXAEBVActorDamageSource@@H@Z
     */
    MCAPI void hurtArmor(class ActorDamageSource const &, int);
    /**
     * @hash   -2016019504
     * @symbol ?isAbleToMove@Mob@@QEBA_NXZ
     */
    MCAPI bool isAbleToMove() const;
    /**
     * @hash   -1791428976
     * @symbol ?isEating@Mob@@QEBA_NXZ
     */
    MCAPI bool isEating() const;
    /**
     * @hash   -1875300096
     * @symbol ?isFrostWalking@Mob@@QEBA_NXZ
     */
    MCAPI bool isFrostWalking() const;
    /**
     * @hash   1856828382
     * @symbol ?isGliding@Mob@@QEBA_NXZ
     */
    MCAPI bool isGliding() const;
    /**
     * @hash   855698462
     * @symbol ?isLayingEgg@Mob@@QEBA_NXZ
     */
    MCAPI bool isLayingEgg() const;
    /**
     * @hash   -1948006560
     * @symbol ?isPregnant@Mob@@QEBA_NXZ
     */
    MCAPI bool isPregnant() const;
    /**
     * @hash   -1090781810
     * @symbol ?isRolling@Mob@@QEBA_NXZ
     */
    MCAPI bool isRolling() const;
    /**
     * @hash   -1231264226
     * @symbol ?isSprinting@Mob@@QEBA_NXZ
     */
    MCAPI bool isSprinting() const;
    /**
     * @hash   -480421632
     * @symbol ?isTransitioningSitting@Mob@@QEBA_NXZ
     */
    MCAPI bool isTransitioningSitting() const;
    /**
     * @hash   932517434
     * @symbol ?onPlayerDimensionChanged@Mob@@QEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1729150100
     * @symbol ?onPlayerJump@Mob@@QEAAXH@Z
     */
    MCAPI void onPlayerJump(int);
    /**
     * @hash   -236413754
     * @symbol ?removeSpeedModifier@Mob@@QEAAXAEBVUUID@mce@@@Z
     */
    MCAPI void removeSpeedModifier(class mce::UUID const &);
    /**
     * @hash   -734706495
     * @symbol ?resetAttributes@Mob@@QEAAXXZ
     */
    MCAPI void resetAttributes();
    /**
     * @hash   -2128027829
     * @symbol ?resetNoActionTime@Mob@@QEAAXXZ
     */
    MCAPI void resetNoActionTime();
    /**
     * @hash   -1021717196
     * @symbol ?sendArmorDamageSlot@Mob@@QEAAXW4ArmorSlot@@@Z
     */
    MCAPI void sendArmorDamageSlot(enum ArmorSlot);
    /**
     * @hash   235839090
     * @symbol ?sendArmorSlot@Mob@@QEAAXW4ArmorSlot@@@Z
     */
    MCAPI void sendArmorSlot(enum ArmorSlot);
    /**
     * @hash   623146202
     * @symbol ?setEatCounter@Mob@@QEAAXH@Z
     */
    MCAPI void setEatCounter(int);
    /**
     * @hash   -1787585186
     * @symbol ?setEating@Mob@@QEAAX_N@Z
     */
    MCAPI void setEating(bool);
    /**
     * @hash   591146588
     * @symbol ?setFlightSpeed@Mob@@QEAAXM@Z
     */
    MCAPI void setFlightSpeed(float);
    /**
     * @hash   1461445854
     * @symbol ?setFrictionModifier@Mob@@QEAAXM@Z
     */
    MCAPI void setFrictionModifier(float);
    /**
     * @hash   -14850916
     * @symbol ?setIsLayingEgg@Mob@@QEAAX_N@Z
     */
    MCAPI void setIsLayingEgg(bool);
    /**
     * @hash   2143412622
     * @symbol ?setIsPregnant@Mob@@QEAAX_N@Z
     */
    MCAPI void setIsPregnant(bool);
    /**
     * @hash   -318156530
     * @symbol ?setJumpVelRedux@Mob@@QEAAX_N@Z
     */
    MCAPI void setJumpVelRedux(bool);
    /**
     * @hash   1725049260
     * @symbol ?setJumping@Mob@@QEAAX_N@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @hash   -1381827710
     * @symbol ?setMovementComponentCurrentSpeed@Mob@@QEAAXM@Z
     */
    MCAPI void setMovementComponentCurrentSpeed(float);
    /**
     * @hash   539307566
     * @symbol ?setNaturallySpawned@Mob@@QEAAX_N@Z
     */
    MCAPI void setNaturallySpawned(bool);
    /**
     * @hash   -1908901362
     * @symbol ?setPassengerLockedBodyRot@Mob@@QEAAXM@Z
     */
    MCAPI void setPassengerLockedBodyRot(float);
    /**
     * @hash   126323566
     * @symbol ?setPassengerRotLimit@Mob@@QEAAXM@Z
     */
    MCAPI void setPassengerRotLimit(float);
    /**
     * @hash   1626554012
     * @symbol ?setRolling@Mob@@QEAAX_N@Z
     */
    MCAPI void setRolling(bool);
    /**
     * @hash   779477822
     * @symbol ?setSpawnMethod@Mob@@QEAAXW4MobSpawnMethod@@@Z
     */
    MCAPI void setSpawnMethod(enum MobSpawnMethod);
    /**
     * @hash   -1658007618
     * @symbol ?setSpeedModifier@Mob@@QEAAXM@Z
     */
    MCAPI void setSpeedModifier(float);
    /**
     * @hash   1670572654
     * @symbol ?setSurfaceMob@Mob@@QEAAX_N@Z
     */
    MCAPI void setSurfaceMob(bool);
    /**
     * @hash   1048755578
     * @symbol ?setSwimSpeedMultiplier@Mob@@QEAAXM@Z
     */
    MCAPI void setSwimSpeedMultiplier(float);
    /**
     * @hash   795281888
     * @symbol ?setTargetCaptain@Mob@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setTargetCaptain(struct ActorUniqueID);
    /**
     * @hash   -228565000
     * @symbol ?setXxa@Mob@@QEAAXM@Z
     */
    MCAPI void setXxa(float);
    /**
     * @hash   1087664084
     * @symbol ?setYRotA@Mob@@QEAAXM@Z
     */
    MCAPI void setYRotA(float);
    /**
     * @hash   -1536934808
     * @symbol ?setYya@Mob@@QEAAXM@Z
     */
    MCAPI void setYya(float);
    /**
     * @hash   1449631928
     * @symbol ?setZza@Mob@@QEAAXM@Z
     */
    MCAPI void setZza(float);
    /**
     * @hash   -974238780
     * @symbol ?snapToYBodyRot@Mob@@QEAAXM@Z
     */
    MCAPI void snapToYBodyRot(float);
    /**
     * @hash   804879072
     * @symbol ?snapToYHeadRot@Mob@@QEAAXM@Z
     */
    MCAPI void snapToYHeadRot(float);
    /**
     * @hash   1385402587
     * @symbol ?ARMOR_DAMAGE_DIVISOR@Mob@@2HB
     */
    MCAPI static int const ARMOR_DAMAGE_DIVISOR;
    /**
     * @hash   -1080888883
     * @symbol ?ARMOR_PROTECTION_DIVIDER@Mob@@2MB
     */
    MCAPI static float const ARMOR_PROTECTION_DIVIDER;
    /**
     * @hash   -1097864917
     * @symbol ?ASCEND_BLOCK_BY_JUMPING_SPEED@Mob@@2MB
     */
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;
    /**
     * @hash   1651618791
     * @symbol ?BASE_ARMOR_TOUGHNESS@Mob@@2MB
     */
    MCAPI static float const BASE_ARMOR_TOUGHNESS;
    /**
     * @hash   -783711027
     * @symbol ?DEFAULT_GRAVITY@Mob@@2MB
     */
    MCAPI static float const DEFAULT_GRAVITY;
    /**
     * @hash   112836463
     * @symbol ?FRICTION_CONSTANT@Mob@@2MB
     */
    MCAPI static float const FRICTION_CONSTANT;
    /**
     * @hash   405213889
     * @symbol ?FRICTION_CONSTANT_MODIFIED@Mob@@2MB
     */
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;
    /**
     * @hash   -303687783
     * @symbol ?FRICTION_MODIFIER@Mob@@2MB
     */
    MCAPI static float const FRICTION_MODIFIER;
    /**
     * @hash   -1053898875
     * @symbol ?GLIDING_FALL_RESET_DELTA@Mob@@2MB
     */
    MCAPI static float const GLIDING_FALL_RESET_DELTA;
    /**
     * @hash   -1709967985
     * @symbol ?LADDER_CLIMB_SPEED@Mob@@2MB
     */
    MCAPI static float const LADDER_CLIMB_SPEED;
    /**
     * @hash   1170117697
     * @symbol ?MAX_ARMOR@Mob@@2MB
     */
    MCAPI static float const MAX_ARMOR;
    /**
     * @hash   1437615809
     * @symbol ?MIN_ARMOR_RATIO@Mob@@2MB
     */
    MCAPI static float const MIN_ARMOR_RATIO;
    /**
     * @hash   -1813996853
     * @symbol ?NUM_ARMOR_ITEMS@Mob@@2MB
     */
    MCAPI static float const NUM_ARMOR_ITEMS;
    /**
     * @hash   2008336913
     * @symbol ?PLAYER_SWIMMING_SURFACE_OFFSET@Mob@@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;
    /**
     * @hash   1126165897
     * @symbol ?REMOVE_PASSENGERS_DELAY@Mob@@2HB
     */
    MCAPI static int const REMOVE_PASSENGERS_DELAY;
    /**
     * @hash   -271285959
     * @symbol ?SLOW_FALL_GRAVITY@Mob@@2MB
     */
    MCAPI static float const SLOW_FALL_GRAVITY;
    /**
     * @hash   312990587
     * @symbol ?SPAWN_XP_DELAY@Mob@@2HB
     */
    MCAPI static int const SPAWN_XP_DELAY;
    /**
     * @hash   1983698867
     * @symbol ?TOTAL_ROLL_STEPS@Mob@@2HB
     */
    MCAPI static int const TOTAL_ROLL_STEPS;
    /**
     * @hash   -1152640490
     * @symbol ?_aiStep@Mob@@SAXAEAUIMobMovementProxy@@@Z
     */
    MCAPI static void _aiStep(struct IMobMovementProxy &);
    /**
     * @hash   -2011787300
     * @symbol ?_calcMoveRelativeSpeed@Mob@@SAMAEAUIMobMovementProxy@@W4TravelType@@@Z
     */
    MCAPI static float _calcMoveRelativeSpeed(struct IMobMovementProxy &, enum TravelType);
    /**
     * @hash   2075533051
     * @symbol ?_travel@Mob@@SAXAEAUIMobMovementProxy@@MMM@Z
     */
    MCAPI static void _travel(struct IMobMovementProxy &, float, float, float);
    /**
     * @hash   -379810054
     * @symbol ?_updateMobTravel@Mob@@SAXAEAUIMobMovementProxy@@@Z
     */
    MCAPI static void _updateMobTravel(struct IMobMovementProxy &);
    /**
     * @hash   683268645
     * @symbol ?calculateJumpImpulse@Mob@@SAMAEBUIMobMovementProxy@@@Z
     */
    MCAPI static float calculateJumpImpulse(struct IMobMovementProxy const &);
    /**
     * @hash   1521560091
     * @symbol ?getJumpEffectAmplifierValue@Mob@@SAMAEBUIMobMovementProxy@@@Z
     */
    MCAPI static float getJumpEffectAmplifierValue(struct IMobMovementProxy const &);
    /**
     * @hash   -126909605
     * @symbol ?getJumpPrevention@Mob@@SA?AUJumpPreventionResult@@AEBUIMobMovementProxy@@@Z
     */
    MCAPI static struct JumpPreventionResult getJumpPrevention(struct IMobMovementProxy const &);
    /**
     * @hash   -349139145
     * @symbol ?getTravelType@Mob@@SA?AW4TravelType@@AEAUIMobMovementProxy@@@Z
     */
    MCAPI static enum TravelType getTravelType(struct IMobMovementProxy &);
    /**
     * @hash   1053647467
     * @symbol ?isImmobile@Mob@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const &);
    /**
     * @hash   256676285
     * @symbol ?shouldApplyWaterGravity@Mob@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool shouldApplyWaterGravity(struct IActorMovementProxy const &);
    /**
     * @hash   -287591830
     * @symbol ?tryGetFromEntity@Mob@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class Mob * tryGetFromEntity(class EntityContext &, bool);

//protected:
    /**
     * @hash   687305710
     * @symbol ?_doSprintParticleEffect@Mob@@IEAAXXZ
     */
    MCAPI void _doSprintParticleEffect();
    /**
     * @hash   -818208313
     * @symbol ?_processSoulSpeed@Mob@@IEAAXXZ
     */
    MCAPI void _processSoulSpeed();
    /**
     * @hash   -1862301048
     * @symbol ?_registerMobAttributes@Mob@@IEAAXXZ
     */
    MCAPI void _registerMobAttributes();
    /**
     * @hash   -569217465
     * @symbol ?getCurrentSwingDuration@Mob@@IEAAHXZ
     */
    MCAPI int getCurrentSwingDuration();
    /**
     * @hash   -241439052
     * @symbol ?saveOffhand@Mob@@IEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;
    /**
     * @hash   -95850792
     * @symbol ?tickEffects@Mob@@IEAAXXZ
     */
    MCAPI void tickEffects();
    /**
     * @hash   -1651001403
     * @symbol ?updateAttackAnim@Mob@@IEAAXXZ
     */
    MCAPI void updateAttackAnim();
    /**
     * @hash   1573439151
     * @symbol ?updateGlidingDurability@Mob@@IEAA_NXZ
     */
    MCAPI bool updateGlidingDurability();
    /**
     * @hash   -1668433402
     * @symbol ?_jumpFromGround@Mob@@KAXAEAUIMobMovementProxy@@@Z
     */
    MCAPI static void _jumpFromGround(struct IMobMovementProxy &);

//private:
    /**
     * @hash   -1768432855
     * @symbol ?_initHardCodedComponents@Mob@@AEAA_NXZ
     */
    MCAPI bool _initHardCodedComponents();
    /**
     * @hash   568037237
     * @symbol ?_initialize@Mob@@AEAAXAEAVEntityContext@@@Z
     */
    MCAPI void _initialize(class EntityContext &);
    /**
     * @hash   -922216723
     * @symbol ?_updateSprintingState@Mob@@AEAAXXZ
     */
    MCAPI void _updateSprintingState();
    /**
     * @hash   -532195605
     * @symbol ?_verifyAttributes@Mob@@AEAAXXZ
     */
    MCAPI void _verifyAttributes();
    /**
     * @hash   1039859664
     * @symbol ?_tryApplyingLevitation@Mob@@CA_NAEBUIMobMovementProxy@@AEAVVec3@@@Z
     */
    MCAPI static bool _tryApplyingLevitation(struct IMobMovementProxy const &, class Vec3 &);

protected:
    /**
     * @hash   -7395469
     * @symbol ?MAX_INACTIVITY_TIMER@Mob@@1HB
     */
    MCAPI static int const MAX_INACTIVITY_TIMER;

private:

};