/**
 * @file  Mob.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -1617556858
     * @vftbl  2
     * @symbol  ?hasComponent\@Mob\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasComponent(class HashedString const &) const;
    /**
     * @hash   -1326205587
     * @vftbl  9
     * @symbol  ?outOfWorld\@Mob\@\@MEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @hash   325048669
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -2012419224
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   962990304
     * @vftbl  12
     * @symbol  ?initializeComponents\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   1346217691
     * @vftbl  15
     * @symbol  ?_doInitialMove\@Mob\@\@MEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Mob();
    /**
     * @hash   1467203670
     * @vftbl  31
     * @symbol  ?getInterpolatedBodyRot\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyRot(float) const;
    /**
     * @hash   2010340612
     * @vftbl  32
     * @symbol  ?getInterpolatedHeadRot\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedHeadRot(float) const;
    /**
     * @hash   -691356114
     * @vftbl  33
     * @symbol  ?getInterpolatedBodyYaw\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @hash   -766983349
     * @vftbl  34
     * @symbol  ?getYawSpeedInDegreesPerSecond\@Mob\@\@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const;
    /**
     * @hash   1095939241
     * @vftbl  37
     * @symbol  ?resetInterpolated\@Mob\@\@UEAAXXZ
     */
    virtual void resetInterpolated();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1254534912
     * @vftbl  42
     * @symbol  ?blockedByShield\@Mob\@\@UEAAXAEBVActorDamageSource\@\@AEAVActor\@\@\@Z
     */
    virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /**
     * @hash   2098324941
     * @vftbl  44
     * @symbol  ?teleportTo\@Mob\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   383597771
     * @vftbl  49
     * @symbol  ?normalTick\@Mob\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -2004769195
     * @vftbl  50
     * @symbol  ?baseTick\@Mob\@\@UEAAXXZ
     */
    virtual void baseTick();
    /**
     * @hash   -790119033
     * @vftbl  53
     * @symbol  ?startRiding\@Mob\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool startRiding(class Actor &);
    /**
     * @hash   -1623682041
     * @vftbl  54
     * @symbol  ?addPassenger\@Mob\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void addPassenger(class Actor &);
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   1089568616
     * @vftbl  93
     * @symbol  ?isImmobile\@Mob\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   414363262
     * @vftbl  96
     * @symbol  ?isPickable\@Mob\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @hash   -172417555
     * @vftbl  98
     * @symbol  ?isSleeping\@Mob\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   -422396264
     * @vftbl  99
     * @symbol  ?setSleeping\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @hash   908614903
     * @vftbl  102
     * @symbol  ?isBlocking\@Mob\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   1829813707
     * @vftbl  104
     * @symbol  ?isAlive\@Mob\@\@UEBA_NXZ
     */
    virtual bool isAlive() const;
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @hash   -269824459
     * @vftbl  108
     * @symbol  ?isSurfaceMob\@Mob\@\@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const;
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   442689529
     * @vftbl  115
     * @symbol  ?setTarget\@Mob\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @hash   1325810327
     * @vftbl  117
     * @symbol  ?attack\@Mob\@\@UEAA_NAEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor &, enum class ActorDamageCause const &);
    /**
     * @hash   1517863515
     * @vftbl  128
     * @symbol  ?canPowerJump\@Mob\@\@UEBA_NXZ
     */
    virtual bool canPowerJump() const;
    /**
     * @hash   845980316
     * @vftbl  136
     * @symbol  ?getBlockDamageCause\@Mob\@\@UEBA?AW4ActorDamageCause\@\@AEBVBlock\@\@\@Z
     */
    virtual enum class ActorDamageCause getBlockDamageCause(class Block const &) const;
    /**
     * @hash   1690357079
     * @vftbl  137
     * @symbol  ?animateHurt\@Mob\@\@UEAAXXZ
     */
    virtual void animateHurt();
    /**
     * @hash   -1345596922
     * @vftbl  138
     * @symbol  ?doFireHurt\@Mob\@\@UEAA_NH\@Z
     */
    virtual bool doFireHurt(int);
    /**
     * @hash   -1618658906
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Mob\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   455446904
     * @vftbl  154
     * @symbol  ?getArmorMaterialTypeInSlot\@Mob\@\@UEBA?AW4ArmorMaterialType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorMaterialType getArmorMaterialTypeInSlot(enum class ArmorSlot) const;
    /**
     * @hash   -646512935
     * @vftbl  155
     * @symbol  ?getArmorMaterialTextureTypeInSlot\@Mob\@\@UEBA?AW4ArmorTextureType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorTextureType getArmorMaterialTextureTypeInSlot(enum class ArmorSlot) const;
    /**
     * @hash   -1513578227
     * @vftbl  156
     * @symbol  ?getArmorColorInSlot\@Mob\@\@UEBAMW4ArmorSlot\@\@H\@Z
     */
    virtual float getArmorColorInSlot(enum class ArmorSlot, int) const;
    /**
     * @hash   -1163397252
     * @vftbl  158
     * @symbol  ?setEquippedSlot\@Mob\@\@UEAAXW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setEquippedSlot(enum class EquipmentSlot, class ItemStack const &);
    /**
     * @hash   -896198017
     * @vftbl  172
     * @symbol  ?canFreeze\@Mob\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @hash   -1183910709
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@Mob\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   -493825655
     * @vftbl  183
     * @symbol  ?causeFallDamage\@Mob\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   -183745891
     * @vftbl  191
     * @symbol  ?canBePulledIntoVehicle\@Mob\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @hash   -608667671
     * @vftbl  192
     * @symbol  ?inCaravan\@Mob\@\@UEBA_NXZ
     */
    virtual bool inCaravan() const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -1033774098
     * @vftbl  197
     * @symbol  ?stopRiding\@Mob\@\@UEAAX_N00\@Z
     */
    virtual void stopRiding(bool, bool, bool);
    /**
     * @hash   1127811236
     * @vftbl  200
     * @symbol  ?buildDebugInfo\@Mob\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void buildDebugInfo(std::string &) const;
    /**
     * @hash   1511630710
     * @vftbl  205
     * @symbol  ?getDeathTime\@Mob\@\@UEBAHXZ
     */
    virtual int getDeathTime() const;
    /**
     * @hash   1282699093
     * @vftbl  216
     * @symbol  ?swing\@Mob\@\@UEAAXXZ
     */
    virtual void swing();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   841035173
     * @vftbl  245
     * @symbol  ?kill\@Mob\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   -297252157
     * @vftbl  246
     * @symbol  ?die\@Mob\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -889451198
     * @vftbl  247
     * @symbol  ?shouldDropDeathLoot\@Mob\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   775747023
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Mob\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   1136354896
     * @vftbl  263
     * @symbol  ?_hurt\@Mob\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1168810624
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Mob\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1965519213
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Mob\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1719196914
     * @vftbl  268
     * @symbol  ?_playStepSound\@Mob\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -793704872
     * @vftbl  275
     * @symbol  ?_removePassenger\@Mob\@\@MEAAXAEBUActorUniqueID\@\@_N11\@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const &, bool, bool, bool);
    /**
     * @hash   -871291236
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Mob\@\@MEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   1794949460
     * @vftbl  278
     * @symbol  ?knockback\@Mob\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @hash   1159409587
     * @vftbl  279
     * @symbol  ?spawnAnim\@Mob\@\@UEAAXXZ
     */
    virtual void spawnAnim();
    /**
     * @hash   106767567
     * @vftbl  280
     * @symbol  ?setSprinting\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setSprinting(bool);
    /**
     * @hash   -1200782
     * @vftbl  281
     * @symbol  ?getHurtSound\@Mob\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getHurtSound();
    /**
     * @hash   56481513
     * @vftbl  282
     * @symbol  ?getDeathSound\@Mob\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getDeathSound();
    /**
     * @hash   -1327613889
     * @vftbl  283
     * @symbol  ?getSpeed\@Mob\@\@UEBAMXZ
     */
    virtual float getSpeed() const;
    /**
     * @hash   579771750
     * @vftbl  284
     * @symbol  ?setSpeed\@Mob\@\@UEAAXM\@Z
     */
    virtual void setSpeed(float);
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1475432166
     * @vftbl  286
     * @symbol  ?hurtEffects\@Mob\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1621833861
     * @vftbl  287
     * @symbol  ?getMeleeWeaponDamageBonus\@Mob\@\@UEAAMPEAV1\@\@Z
     */
    virtual float getMeleeWeaponDamageBonus(class Mob *);
    /**
     * @hash   -864868338
     * @vftbl  288
     * @symbol  ?getMeleeKnockbackBonus\@Mob\@\@UEAAHXZ
     */
    virtual int getMeleeKnockbackBonus();
    /**
     * @hash   581361793
     * @vftbl  289
     * @symbol  ?travel\@Mob\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -706522077
     * @vftbl  290
     * @symbol  ?applyFinalFriction\@Mob\@\@UEAAXM_N\@Z
     */
    virtual void applyFinalFriction(float, bool);
    /**
     * @hash   1360959067
     * @vftbl  291
     * @symbol  ?aiStep\@Mob\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   1348315675
     * @vftbl  292
     * @symbol  ?aiStep\@Mob\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void aiStep(struct IMobMovementProxy &) const;
    /**
     * @hash   -1004873937
     * @vftbl  293
     * @symbol  ?pushActors\@Mob\@\@UEAAXXZ
     */
    virtual void pushActors();
    /**
     * @hash   1074685514
     * @vftbl  294
     * @symbol  ?lookAt\@Mob\@\@UEAAXPEAVActor\@\@MM\@Z
     */
    virtual void lookAt(class Actor *, float, float);
    /**
     * @hash   -1689613627
     * @vftbl  295
     * @symbol  ?isLookingAtAnEntity\@Mob\@\@UEAA_NXZ
     */
    virtual bool isLookingAtAnEntity();
    /**
     * @hash   -106616769
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@Mob\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @hash   -1014212779
     * @vftbl  297
     * @symbol  ?checkSpawnObstruction\@Mob\@\@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const;
    /**
     * @hash   -2018531308
     * @vftbl  298
     * @symbol  ?getAttackAnim\@Mob\@\@UEAAMM\@Z
     */
    virtual float getAttackAnim(float);
    /**
     * @hash   956899629
     * @vftbl  299
     * @symbol  ?getItemUseDuration\@Mob\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @hash   895309674
     * @vftbl  300
     * @symbol  ?getItemUseStartupProgress\@Mob\@\@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const;
    /**
     * @hash   -208668178
     * @vftbl  301
     * @symbol  ?getItemUseIntervalProgress\@Mob\@\@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const;
    /**
     * @hash   -1629425233
     * @vftbl  302
     * @symbol  ?getItemUseIntervalAxis\@Mob\@\@UEBAHXZ
     */
    virtual int getItemUseIntervalAxis() const;
    /**
     * @hash   297149343
     * @vftbl  303
     * @symbol  ?getTimeAlongSwing\@Mob\@\@UEBAHXZ
     */
    virtual int getTimeAlongSwing() const;
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @hash   1177998012
     * @vftbl  305
     * @symbol  ?getMaxHeadXRot\@Mob\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @hash   1606788171
     * @vftbl  306
     * @symbol  ?isAlliedTo\@Mob\@\@UEAA_NPEAV1\@\@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @hash   2045474894
     * @vftbl  307
     * @symbol  ?doHurtTarget\@Mob\@\@UEAA_NPEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool doHurtTarget(class Actor *, enum class ActorDamageCause const &);
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   1679054758
     * @vftbl  309
     * @symbol  ?leaveCaravan\@Mob\@\@UEAAXXZ
     */
    virtual void leaveCaravan();
    /**
     * @hash   -1728481827
     * @vftbl  310
     * @symbol  ?joinCaravan\@Mob\@\@UEAAXPEAV1\@\@Z
     */
    virtual void joinCaravan(class Mob *);
    /**
     * @hash   1568465028
     * @vftbl  311
     * @symbol  ?hasCaravanTail\@Mob\@\@UEBA_NXZ
     */
    virtual bool hasCaravanTail() const;
    /**
     * @hash   142621193
     * @vftbl  312
     * @symbol  ?getCaravanHead\@Mob\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getCaravanHead() const;
    /**
     * @hash   -1963151997
     * @vftbl  313
     * @symbol  ?getArmorValue\@Mob\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   -1902984714
     * @vftbl  314
     * @symbol  ?getArmorCoverPercentage\@Mob\@\@UEBAMXZ
     */
    virtual float getArmorCoverPercentage() const;
    /**
     * @hash   -1068614960
     * @vftbl  315
     * @symbol  ?getToughnessValue\@Mob\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @hash   1915311012
     * @vftbl  316
     * @symbol  ?hurtArmorSlots\@Mob\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @hash   -621102166
     * @vftbl  317
     * @symbol  ?setDamagedArmor\@Mob\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   2082424936
     * @vftbl  318
     * @symbol  ?sendArmorDamage\@Mob\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @hash   203213671
     * @vftbl  319
     * @symbol  ?sendArmor\@Mob\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @hash   -1322673131
     * @vftbl  320
     * @symbol  ?containerChanged\@Mob\@\@UEAAXH\@Z
     */
    virtual void containerChanged(int);
    /**
     * @hash   282632540
     * @vftbl  321
     * @symbol  ?updateEquipment\@Mob\@\@UEAAXXZ
     */
    virtual void updateEquipment();
    /**
     * @hash   -152375907
     * @vftbl  322
     * @symbol  ?clearEquipment\@Mob\@\@UEAAHXZ
     */
    virtual int clearEquipment();
    /**
     * @hash   -211950210
     * @vftbl  323
     * @symbol  ?getAllArmorID\@Mob\@\@UEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<int> getAllArmorID() const;
    /**
     * @hash   -943952877
     * @vftbl  324
     * @symbol  ?getAllHand\@Mob\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> getAllHand() const;
    /**
     * @hash   421264972
     * @vftbl  325
     * @symbol  ?getAllEquipment\@Mob\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /**
     * @hash   -1439624067
     * @vftbl  326
     * @symbol  ?getArmorTypeHash\@Mob\@\@UEAAHXZ
     */
    virtual int getArmorTypeHash();
    /**
     * @hash   359867746
     * @vftbl  327
     * @symbol  ?dropEquipmentOnDeath\@Mob\@\@UEAAXAEBVActorDamageSource\@\@H\@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /**
     * @hash   827279021
     * @vftbl  328
     * @symbol  ?dropEquipmentOnDeath\@Mob\@\@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath();
    /**
     * @hash   1355221036
     * @vftbl  329
     * @symbol  ?clearVanishEnchantedItemsOnDeath\@Mob\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   1953477761
     * @vftbl  330
     * @symbol  ?sendInventory\@Mob\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @hash   -1429464873
     * @vftbl  331
     * @symbol  ?getDamageAfterEnchantReduction\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const &, float) const;
    /**
     * @hash   356167793
     * @vftbl  332
     * @symbol  ?getDamageAfterArmorReduction\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterArmorReduction(class ActorDamageSource const &, float) const;
    /**
     * @hash   -1185748921
     * @vftbl  333
     * @symbol  ?getDamageAfterResistanceEffect\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterResistanceEffect(class ActorDamageSource const &, float) const;
    /**
     * @hash   2041223461
     * @vftbl  334
     * @symbol  ?createAIGoals\@Mob\@\@UEAA_NXZ
     */
    virtual bool createAIGoals();
    /**
     * @hash   1480650159
     * @vftbl  335
     * @symbol  ?onBorn\@Mob\@\@UEAAXAEAVActor\@\@0\@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @hash   -1035685182
     * @vftbl  336
     * @symbol  ?setItemSlot\@Mob\@\@UEAA_NW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool setItemSlot(enum class EquipmentSlot, class ItemStack const &);
    /**
     * @hash   -1800106508
     * @vftbl  337
     * @symbol  ?setTransitioningSitting\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setTransitioningSitting(bool);
    /**
     * @hash   1725315410
     * @vftbl  338
     * @symbol  ?attackAnimation\@Mob\@\@UEAAXPEAVActor\@\@M\@Z
     */
    virtual void attackAnimation(class Actor *, float);
    /**
     * @hash   -637930121
     * @vftbl  339
     * @symbol  ?getAttackTime\@Mob\@\@UEAAHXZ
     */
    virtual int getAttackTime();
    /**
     * @hash   -297195669
     * @vftbl  340
     * @symbol  ?_getWalkTargetValue\@Mob\@\@UEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @hash   -784987412
     * @vftbl  341
     * @symbol  ?canExistWhenDisallowMob\@Mob\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @hash   963724227
     * @vftbl  342
     * @symbol  ?ascendLadder\@Mob\@\@UEAAXXZ
     */
    virtual void ascendLadder();
    /**
     * @hash   -1775516847
     * @vftbl  343
     * @symbol  ?ascendBlockByJumping\@Mob\@\@UEAAXXZ
     */
    virtual void ascendBlockByJumping();
    /**
     * @hash   -902504091
     * @vftbl  344
     * @symbol  ?descendBlockByCrouching\@Mob\@\@UEAAXXZ
     */
    virtual void descendBlockByCrouching();
    /**
     * @hash   -1299113847
     * @vftbl  345
     * @symbol  ?dropContainer\@Mob\@\@UEAAXXZ
     */
    virtual void dropContainer();
    /**
     * @hash   1480830454
     * @vftbl  346
     * @symbol  ?initBodyControl\@Mob\@\@MEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @hash   1835731215
     * @vftbl  347
     * @symbol  ?jumpFromGround\@Mob\@\@MEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @hash   -421850137
     * @vftbl  348
     * @symbol  ?jumpFromGround\@Mob\@\@MEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /**
     * @hash   903343975
     * @vftbl  349
     * @symbol  ?newServerAiStep\@Mob\@\@MEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @hash   -285441934
     * @vftbl  350
     * @symbol  ?_serverAiMobStep\@Mob\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @hash   -33892038
     * @vftbl  351
     * @symbol  ?dropBags\@Mob\@\@MEAAXXZ
     */
    virtual void dropBags();
    /**
     * @hash   -318734345
     * @vftbl  352
     * @symbol  ?tickDeath\@Mob\@\@MEAAXXZ
     */
    virtual void tickDeath();
    /**
     * @hash   2108877097
     * @vftbl  353
     * @symbol  ?updateGliding\@Mob\@\@MEAAXXZ
     */
    virtual void updateGliding();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   -931899734
     * @vftbl  355
     * @symbol  ?_getAdjustedAABBForSpawnCheck\@Mob\@\@MEBA?AVAABB\@\@AEBV2\@AEBVVec3\@\@\@Z
     */
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const &, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOB
    /**
     * @hash   1270370655
     * @symbol  ?_allowAscendingScaffolding\@Mob\@\@MEBA_NXZ
     */
    MCVAPI bool _allowAscendingScaffolding() const;
    /**
     * @hash   37381721
     * @symbol  ?ate\@Mob\@\@UEAAXXZ
     */
    MCVAPI void ate();
    /**
     * @hash   1183321723
     * @symbol  ?canBeControlledByPassenger\@Mob\@\@UEAA_NXZ
     */
    MCVAPI bool canBeControlledByPassenger();
    /**
     * @hash   -1845093369
     * @symbol  ?getSprintSpeedIncrease\@Mob\@\@UEBAMXZ
     */
    MCVAPI float getSprintSpeedIncrease() const;
    /**
     * @hash   1217156184
     * @symbol  ?isShootable\@Mob\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -276045581
     * @symbol  ?renderDebugServerState\@Mob\@\@UEAAXAEBVOptions\@\@\@Z
     */
    MCVAPI void renderDebugServerState(class Options const &);
#endif
    /**
     * @hash   551035948
     * @symbol  ??0Mob\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Mob(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -2054388364
     * @symbol  ??0Mob\@\@QEAA\@AEAVLevel\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Mob(class Level &, class EntityContext &);
    /**
     * @hash   661052071
     * @symbol  ?_endJump\@Mob\@\@QEAAXXZ
     */
    MCAPI void _endJump();
    /**
     * @hash   1832764636
     * @symbol  ?addSpeedModifier\@Mob\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCAPI void addSpeedModifier(class mce::UUID const &, std::string const &, float);
    /**
     * @hash   1635799091
     * @symbol  ?calcMoveRelativeSpeed\@Mob\@\@QEAAMW4TravelType\@\@\@Z
     */
    MCAPI float calcMoveRelativeSpeed(enum class TravelType);
    /**
     * @hash   523277028
     * @symbol  ?checkForPostHitDamageImmunity\@Mob\@\@QEAA_NMAEBVActorDamageSource\@\@\@Z
     */
    MCAPI bool checkForPostHitDamageImmunity(float, class ActorDamageSource const &);
    /**
     * @hash   -2114849943
     * @symbol  ?checkTotemDeathProtection\@Mob\@\@QEAA_NAEBVActorDamageSource\@\@\@Z
     */
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const &);
    /**
     * @hash   1703000846
     * @symbol  ?createAI\@Mob\@\@QEAAXV?$vector\@UGoalDefinition\@\@V?$allocator\@UGoalDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void createAI(std::vector<struct GoalDefinition>);
    /**
     * @hash   -1645032994
     * @symbol  ?discardFriction\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool discardFriction() const;
    /**
     * @hash   1173607978
     * @symbol  ?emitJumpPreventedEvent\@Mob\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void emitJumpPreventedEvent(class BlockPos const &);
    /**
     * @hash   -121635601
     * @symbol  ?frostWalk\@Mob\@\@QEAAXXZ
     */
    MCAPI void frostWalk();
    /**
     * @hash   -961932868
     * @symbol  ?getBoundOrigin\@Mob\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getBoundOrigin() const;
    /**
     * @hash   2070990360
     * @symbol  ?getCaravanSize\@Mob\@\@QEBAHXZ
     */
    MCAPI int getCaravanSize() const;
    /**
     * @hash   1104577436
     * @symbol  ?getEatCounter\@Mob\@\@QEBAHXZ
     */
    MCAPI int getEatCounter() const;
    /**
     * @hash   -330067032
     * @symbol  ?getFirstCaravanHead\@Mob\@\@QEAAPEAV1\@XZ
     */
    MCAPI class Mob * getFirstCaravanHead();
    /**
     * @hash   -716267732
     * @symbol  ?getGlidingTicks\@Mob\@\@QEBAHXZ
     */
    MCAPI int getGlidingTicks() const;
    /**
     * @hash   -431790357
     * @symbol  ?getItemSlot\@Mob\@\@QEBAAEBVItemStack\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI class ItemStack const & getItemSlot(enum class EquipmentSlot) const;
    /**
     * @hash   -133966622
     * @symbol  ?getJumpEffectAmplifierValue\@Mob\@\@QEAAMXZ
     */
    MCAPI float getJumpEffectAmplifierValue();
    /**
     * @hash   -362799502
     * @symbol  ?getJumpMultiplier\@Mob\@\@QEAAMXZ
     */
    MCAPI float getJumpMultiplier();
    /**
     * @hash   -1890550826
     * @symbol  ?getJumpPower\@Mob\@\@QEBAMXZ
     */
    MCAPI float getJumpPower() const;
    /**
     * @hash   -2107192238
     * @symbol  ?getJumpPrevention\@Mob\@\@QEAA?AUJumpPreventionResult\@\@XZ
     */
    MCAPI struct JumpPreventionResult getJumpPrevention();
    /**
     * @hash   926053722
     * @symbol  ?getJumpTicks\@Mob\@\@QEBAHXZ
     */
    MCAPI int getJumpTicks() const;
    /**
     * @hash   184845376
     * @symbol  ?getMovementComponentCurrentSpeed\@Mob\@\@QEBAMXZ
     */
    MCAPI float getMovementComponentCurrentSpeed() const;
    /**
     * @hash   -499976292
     * @symbol  ?getNoActionTime\@Mob\@\@QEBAHXZ
     */
    MCAPI int getNoActionTime() const;
    /**
     * @hash   1249607240
     * @symbol  ?getRollCounter\@Mob\@\@QEBAHXZ
     */
    MCAPI int getRollCounter() const;
    /**
     * @hash   -1978290616
     * @symbol  ?getSwimSpeedMultiplier\@Mob\@\@QEBAMXZ
     */
    MCAPI float getSwimSpeedMultiplier() const;
    /**
     * @hash   -106915470
     * @symbol  ?getTargetCaptain\@Mob\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetCaptain() const;
    /**
     * @hash   1757434558
     * @symbol  ?getTravelType\@Mob\@\@QEAA?AW4TravelType\@\@XZ
     */
    MCAPI enum class TravelType getTravelType();
    /**
     * @hash   -809268054
     * @symbol  ?getYBodyRotation\@Mob\@\@QEBAMXZ
     */
    MCAPI float getYBodyRotation() const;
    /**
     * @hash   -1100239072
     * @symbol  ?hasBoundOrigin\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool hasBoundOrigin() const;
    /**
     * @hash   -433724079
     * @symbol  ?hurtArmor\@Mob\@\@QEAAXAEBVActorDamageSource\@\@H\@Z
     */
    MCAPI void hurtArmor(class ActorDamageSource const &, int);
    /**
     * @hash   1610460816
     * @symbol  ?isAbleToMove\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isAbleToMove() const;
    /**
     * @hash   1835051344
     * @symbol  ?isEating\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isEating() const;
    /**
     * @hash   1751195600
     * @symbol  ?isFrostWalking\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isFrostWalking() const;
    /**
     * @hash   1188402910
     * @symbol  ?isGliding\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isGliding() const;
    /**
     * @hash   187303742
     * @symbol  ?isLayingEgg\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isLayingEgg() const;
    /**
     * @hash   1678581392
     * @symbol  ?isPregnant\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isPregnant() const;
    /**
     * @hash   -1759145778
     * @symbol  ?isRolling\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isRolling() const;
    /**
     * @hash   -1899582066
     * @symbol  ?isSprinting\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isSprinting() const;
    /**
     * @hash   -1148724096
     * @symbol  ?isTransitioningSitting\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isTransitioningSitting() const;
    /**
     * @hash   1859388281
     * @symbol  ?onPlayerDimensionChanged\@Mob\@\@QEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1898206652
     * @symbol  ?onPlayerJump\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void onPlayerJump(int);
    /**
     * @hash   -903732154
     * @symbol  ?removeSpeedModifier\@Mob\@\@QEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void removeSpeedModifier(class mce::UUID const &);
    /**
     * @hash   -1402024895
     * @symbol  ?resetAttributes\@Mob\@\@QEAAXXZ
     */
    MCAPI void resetAttributes();
    /**
     * @hash   1499759451
     * @symbol  ?resetNoActionTime\@Mob\@\@QEAAXXZ
     */
    MCAPI void resetNoActionTime();
    /**
     * @hash   -1688881836
     * @symbol  ?sendArmorDamageSlot\@Mob\@\@QEAAXW4ArmorSlot\@\@\@Z
     */
    MCAPI void sendArmorDamageSlot(enum class ArmorSlot);
    /**
     * @hash   -431325550
     * @symbol  ?sendArmorSlot\@Mob\@\@QEAAXW4ArmorSlot\@\@\@Z
     */
    MCAPI void sendArmorSlot(enum class ArmorSlot);
    /**
     * @hash   -43972310
     * @symbol  ?setEatCounter\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void setEatCounter(int);
    /**
     * @hash   1840278974
     * @symbol  ?setEating\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setEating(bool);
    /**
     * @hash   -681923300
     * @symbol  ?setIsLayingEgg\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setIsLayingEgg(bool);
    /**
     * @hash   1476355614
     * @symbol  ?setIsPregnant\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setIsPregnant(bool);
    /**
     * @hash   -1516674388
     * @symbol  ?setJumpTicks\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void setJumpTicks(int);
    /**
     * @hash   -2048607950
     * @symbol  ?setMovementComponentCurrentSpeed\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setMovementComponentCurrentSpeed(float);
    /**
     * @hash   -127472674
     * @symbol  ?setNaturallySpawned\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setNaturallySpawned(bool);
    /**
     * @hash   1719393326
     * @symbol  ?setPassengerLockedBodyRot\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setPassengerLockedBodyRot(float);
    /**
     * @hash   -540349042
     * @symbol  ?setPassengerRotLimit\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setPassengerRotLimit(float);
    /**
     * @hash   959881404
     * @symbol  ?setRolling\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setRolling(bool);
    /**
     * @hash   112820590
     * @symbol  ?setSpawnMethod\@Mob\@\@QEAAXW4MobSpawnMethod\@\@\@Z
     */
    MCAPI void setSpawnMethod(enum class MobSpawnMethod);
    /**
     * @hash   1970302446
     * @symbol  ?setSpeedModifier\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setSpeedModifier(float);
    /**
     * @hash   1004315198
     * @symbol  ?setSurfaceMob\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setSurfaceMob(bool);
    /**
     * @hash   382498122
     * @symbol  ?setSwimSpeedMultiplier\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setSwimSpeedMultiplier(float);
    /**
     * @hash   128916800
     * @symbol  ?setTargetCaptain\@Mob\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setTargetCaptain(struct ActorUniqueID);
    /**
     * @hash   2077567816
     * @symbol  ?setYBodyRotation\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setYBodyRotation(float);
    /**
     * @hash   1197677973
     * @symbol  ?setYBodyRotations\@Mob\@\@QEAAXMM\@Z
     */
    MCAPI void setYBodyRotations(float, float);
    /**
     * @hash   -1640250220
     * @symbol  ?snapToYBodyRot\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void snapToYBodyRot(float);
    /**
     * @hash   138852256
     * @symbol  ?snapToYHeadRot\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void snapToYHeadRot(float);
    /**
     * @hash   -951943897
     * @symbol  ?tryFrostWalk\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryFrostWalk();
    /**
     * @hash   -912746219
     * @symbol  ?tryProcessSoulSpeed\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryProcessSoulSpeed();
    /**
     * @symbol  ?tryUpdateAI\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryUpdateAI();
    /**
     * @hash   -1939811921
     * @symbol  ?ARMOR_DAMAGE_DIVISOR\@Mob\@\@2HB
     */
    MCAPI static int const ARMOR_DAMAGE_DIVISOR;
    /**
     * @hash   -111136095
     * @symbol  ?ARMOR_PROTECTION_DIVIDER\@Mob\@\@2MB
     */
    MCAPI static float const ARMOR_PROTECTION_DIVIDER;
    /**
     * @hash   -128112129
     * @symbol  ?ASCEND_BLOCK_BY_JUMPING_SPEED\@Mob\@\@2MB
     */
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;
    /**
     * @hash   -1673595717
     * @symbol  ?BASE_ARMOR_TOUGHNESS\@Mob\@\@2MB
     */
    MCAPI static float const BASE_ARMOR_TOUGHNESS;
    /**
     * @hash   186041761
     * @symbol  ?DEFAULT_GRAVITY\@Mob\@\@2MB
     */
    MCAPI static float const DEFAULT_GRAVITY;
    /**
     * @hash   1082589251
     * @symbol  ?FRICTION_CONSTANT\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_CONSTANT;
    /**
     * @hash   1374966677
     * @symbol  ?FRICTION_CONSTANT_MODIFIED\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;
    /**
     * @hash   666065005
     * @symbol  ?FRICTION_MODIFIER\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_MODIFIER;
    /**
     * @hash   -84146087
     * @symbol  ?GLIDING_FALL_RESET_DELTA\@Mob\@\@2MB
     */
    MCAPI static float const GLIDING_FALL_RESET_DELTA;
    /**
     * @hash   -740215197
     * @symbol  ?LADDER_CLIMB_SPEED\@Mob\@\@2MB
     */
    MCAPI static float const LADDER_CLIMB_SPEED;
    /**
     * @hash   2139870485
     * @symbol  ?MAX_ARMOR\@Mob\@\@2MB
     */
    MCAPI static float const MAX_ARMOR;
    /**
     * @hash   -1887598699
     * @symbol  ?MIN_ARMOR_RATIO\@Mob\@\@2MB
     */
    MCAPI static float const MIN_ARMOR_RATIO;
    /**
     * @hash   -844244065
     * @symbol  ?NUM_ARMOR_ITEMS\@Mob\@\@2MB
     */
    MCAPI static float const NUM_ARMOR_ITEMS;
    /**
     * @hash   -1316885283
     * @symbol  ?PLAYER_SWIMMING_SURFACE_OFFSET\@Mob\@\@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;
    /**
     * @hash   2095918685
     * @symbol  ?REMOVE_PASSENGERS_DELAY\@Mob\@\@2HB
     */
    MCAPI static int const REMOVE_PASSENGERS_DELAY;
    /**
     * @hash   698466829
     * @symbol  ?SLOW_FALL_GRAVITY\@Mob\@\@2MB
     */
    MCAPI static float const SLOW_FALL_GRAVITY;
    /**
     * @hash   1282743375
     * @symbol  ?SPAWN_XP_DELAY\@Mob\@\@2HB
     */
    MCAPI static int const SPAWN_XP_DELAY;
    /**
     * @hash   -1341515641
     * @symbol  ?TOTAL_ROLL_STEPS\@Mob\@\@2HB
     */
    MCAPI static int const TOTAL_ROLL_STEPS;
    /**
     * @hash   -1827631514
     * @symbol  ?_aiStep\@Mob\@\@SAXAEAUIMobMovementProxy\@\@\@Z
     */
    MCAPI static void _aiStep(struct IMobMovementProxy &);
    /**
     * @hash   1608388860
     * @symbol  ?_calcMoveRelativeSpeed\@Mob\@\@SAMAEAUIMobMovementProxy\@\@W4TravelType\@\@\@Z
     */
    MCAPI static float _calcMoveRelativeSpeed(struct IMobMovementProxy &, enum class TravelType);
    /**
     * @hash   1403248203
     * @symbol  ?_travel\@Mob\@\@SAXAEAUIMobMovementProxy\@\@MMM\@Z
     */
    MCAPI static void _travel(struct IMobMovementProxy &, float, float, float);
    /**
     * @hash   -1051387606
     * @symbol  ?_updateMobTravel\@Mob\@\@SAXAEAUIMobMovementProxy\@\@\@Z
     */
    MCAPI static void _updateMobTravel(struct IMobMovementProxy &);
    /**
     * @hash   11937109
     * @symbol  ?calculateJumpImpulse\@Mob\@\@SAMAEBUIMobMovementProxy\@\@\@Z
     */
    MCAPI static float calculateJumpImpulse(struct IMobMovementProxy const &);
    /**
     * @hash   852042923
     * @symbol  ?getJumpEffectAmplifierValue\@Mob\@\@SAMAEBUIMobMovementProxy\@\@\@Z
     */
    MCAPI static float getJumpEffectAmplifierValue(struct IMobMovementProxy const &);
    /**
     * @hash   -796365269
     * @symbol  ?getJumpPrevention\@Mob\@\@SA?AUJumpPreventionResult\@\@AEBUIMobMovementProxy\@\@\@Z
     */
    MCAPI static struct JumpPreventionResult getJumpPrevention(struct IMobMovementProxy const &);
    /**
     * @hash   -1018348793
     * @symbol  ?getTravelType\@Mob\@\@SA?AW4TravelType\@\@AEAUIMobMovementProxy\@\@\@Z
     */
    MCAPI static enum class TravelType getTravelType(struct IMobMovementProxy &);
    /**
     * @hash   385237371
     * @symbol  ?isImmobile\@Mob\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const &);
    /**
     * @hash   1554150796
     * @symbol  ?setSprinting\@Mob\@\@SAXAEAVBaseAttributeMap\@\@VSynchedActorDataWriter\@\@_N\@Z
     */
    MCAPI static void setSprinting(class BaseAttributeMap &, class SynchedActorDataWriter, bool);
    /**
     * @hash   -409442787
     * @symbol  ?shouldApplyWaterGravity\@Mob\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool shouldApplyWaterGravity(struct IActorMovementProxy const &);
    /**
     * @hash   -953295750
     * @symbol  ?tryGetFromEntity\@Mob\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Mob * tryGetFromEntity(class EntityContext &, bool);

//protected:
    /**
     * @hash   -232794130
     * @symbol  ?_doSprintParticleEffect\@Mob\@\@IEAAXXZ
     */
    MCAPI void _doSprintParticleEffect();
    /**
     * @hash   -1490954441
     * @symbol  ?_processSoulSpeed\@Mob\@\@IEAAXXZ
     */
    MCAPI void _processSoulSpeed();
    /**
     * @hash   1759935496
     * @symbol  ?_registerMobAttributes\@Mob\@\@IEAAXXZ
     */
    MCAPI void _registerMobAttributes();
    /**
     * @hash   -1238934521
     * @symbol  ?getCurrentSwingDuration\@Mob\@\@IEAAHXZ
     */
    MCAPI int getCurrentSwingDuration();
    /**
     * @hash   -908619068
     * @symbol  ?saveOffhand\@Mob\@\@IEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;
    /**
     * @symbol  ?setNoActionTime\@Mob\@\@IEAAXH\@Z
     */
    MCAPI void setNoActionTime(int);
    /**
     * @hash   -761646968
     * @symbol  ?tickEffects\@Mob\@\@IEAAXXZ
     */
    MCAPI void tickEffects();
    /**
     * @hash   1978400357
     * @symbol  ?updateAttackAnim\@Mob\@\@IEAAXXZ
     */
    MCAPI void updateAttackAnim();
    /**
     * @hash   908519407
     * @symbol  ?updateGlidingDurability\@Mob\@\@IEAA_NXZ
     */
    MCAPI bool updateGlidingDurability();
    /**
     * @hash   1953680134
     * @symbol  ?_jumpFromGround\@Mob\@\@KAXAEAUIMobMovementProxy\@\@\@Z
     */
    MCAPI static void _jumpFromGround(struct IMobMovementProxy &);

//private:
    /**
     * @symbol  ?_initHardCodedComponents\@Mob\@\@AEAA_N_N\@Z
     */
    MCAPI bool _initHardCodedComponents(bool);
    /**
     * @symbol  ?_initialize\@Mob\@\@AEAAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void _initialize(class EntityContext &, bool);
    /**
     * @hash   937519935
     * @symbol  ?_saveArmor\@Mob\@\@AEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> _saveArmor() const;
    /**
     * @hash   -1593502131
     * @symbol  ?_updateSprintingState\@Mob\@\@AEAAXXZ
     */
    MCAPI void _updateSprintingState();
    /**
     * @hash   -1203757781
     * @symbol  ?_verifyAttributes\@Mob\@\@AEAAXXZ
     */
    MCAPI void _verifyAttributes();
    /**
     * @hash   -2062768621
     * @symbol  ?_executeDash\@Mob\@\@CAXAEAV1\@AEAUIMobMovementProxy\@\@\@Z
     */
    MCAPI static void _executeDash(class Mob &, struct IMobMovementProxy &);
    /**
     * @hash   368266736
     * @symbol  ?_tryApplyingLevitation\@Mob\@\@CA_NAEBUIMobMovementProxy\@\@AEAVVec3\@\@\@Z
     */
    MCAPI static bool _tryApplyingLevitation(struct IMobMovementProxy const &, class Vec3 &);

protected:
    /**
     * @hash   962276595
     * @symbol  ?MAX_INACTIVITY_TIMER\@Mob\@\@1HB
     */
    MCAPI static int const MAX_INACTIVITY_TIMER;

private:

};