#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Mob : public ::Actor {

public:
    // prevent constructor by default
    Mob& operator=(Mob const&) = delete;
    Mob(Mob const&)            = delete;
    Mob()                      = delete;

public:
    /**
     * @vftbl 2
     * @symbol ?hasComponent\@Mob\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasComponent(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?outOfWorld\@Mob\@\@MEAAXXZ
     */
    virtual void outOfWorld(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Mob\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_doInitialMove\@Mob\@\@MEAAXXZ
     */
    virtual void _doInitialMove(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 27
     * @symbol ?getInterpolatedBodyRot\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyRot(float) const; // NOLINT
    /**
     * @vftbl 28
     * @symbol ?getInterpolatedHeadRot\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedHeadRot(float) const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?getInterpolatedBodyYaw\@Mob\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?getYawSpeedInDegreesPerSecond\@Mob\@\@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const; // NOLINT
    /**
     * @vftbl 33
     * @symbol ?resetInterpolated\@Mob\@\@UEAAXXZ
     */
    virtual void resetInterpolated(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?blockedByShield\@Mob\@\@UEAAXAEBVActorDamageSource\@\@AEAVActor\@\@\@Z
     */
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Mob\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Mob\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 44
     * @symbol ?baseTick\@Mob\@\@UEAAXXZ
     */
    virtual void baseTick(); // NOLINT
    /**
     * @vftbl 47
     * @symbol ?startRiding\@Mob\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool startRiding(class Actor&); // NOLINT
    /**
     * @vftbl 48
     * @symbol ?addPassenger\@Mob\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void addPassenger(class Actor&); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@Mob\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const; // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Mob\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?isSleeping\@Mob\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?setSleeping\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 88
     * @symbol ?isBlocking\@Mob\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const; // NOLINT
    /**
     * @vftbl 90
     * @symbol ?isAlive\@Mob\@\@UEBA_NXZ
     */
    virtual bool isAlive() const; // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 94
     * @symbol ?isSurfaceMob\@Mob\@\@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const; // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 101
     * @symbol ?setTarget\@Mob\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void setTarget(class Actor*); // NOLINT
    /**
     * @vftbl 103
     * @symbol ?attack\@Mob\@\@UEAA_NAEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor&, enum class ActorDamageCause const&); // NOLINT
    /**
     * @vftbl 114
     * @symbol ?canPowerJump\@Mob\@\@UEBA_NXZ
     */
    virtual bool canPowerJump() const; // NOLINT
    /**
     * @vftbl 121
     * @symbol ?getBlockDamageCause\@Mob\@\@UEBA?AW4ActorDamageCause\@\@AEBVBlock\@\@\@Z
     */
    virtual enum class ActorDamageCause getBlockDamageCause(class Block const&) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?animateHurt\@Mob\@\@UEAAXXZ
     */
    virtual void animateHurt(); // NOLINT
    /**
     * @vftbl 123
     * @symbol ?doFireHurt\@Mob\@\@UEAA_NH\@Z
     */
    virtual bool doFireHurt(int); // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Mob\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 139
     * @symbol ?getArmorMaterialTypeInSlot\@Mob\@\@UEBA?AW4ArmorMaterialType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorMaterialType getArmorMaterialTypeInSlot(enum class ArmorSlot) const; // NOLINT
    /**
     * @vftbl 140
     * @symbol ?getArmorMaterialTextureTypeInSlot\@Mob\@\@UEBA?AW4ArmorTextureType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorTextureType getArmorMaterialTextureTypeInSlot(enum class ArmorSlot) const; // NOLINT
    /**
     * @vftbl 141
     * @symbol ?getArmorColorInSlot\@Mob\@\@UEBAMW4ArmorSlot\@\@H\@Z
     */
    virtual float getArmorColorInSlot(enum class ArmorSlot, int) const; // NOLINT
    /**
     * @vftbl 143
     * @symbol ?setEquippedSlot\@Mob\@\@UEAAXW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setEquippedSlot(enum class EquipmentSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Mob\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const; // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@Mob\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Mob\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource); // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Mob\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
    /**
     * @vftbl 177
     * @symbol ?inCaravan\@Mob\@\@UEBA_NXZ
     */
    virtual bool inCaravan() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 184
     * @symbol
     * ?buildDebugInfo\@Mob\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void buildDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 189
     * @symbol ?getDeathTime\@Mob\@\@UEBAHXZ
     */
    virtual int getDeathTime() const; // NOLINT
    /**
     * @vftbl 200
     * @symbol ?swing\@Mob\@\@UEAAXXZ
     */
    virtual void swing(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 223
     * @symbol ?kill\@Mob\@\@UEAAXXZ
     */
    virtual void kill(); // NOLINT
    /**
     * @vftbl 224
     * @symbol ?die\@Mob\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&); // NOLINT
    /**
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@Mob\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const; // NOLINT
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Mob\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Mob\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Mob\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Mob\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@Mob\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 251
     * @symbol ?_removePassenger\@Mob\@\@MEAAXAEBUActorUniqueID\@\@_N11\@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const&, bool, bool, bool); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Mob\@\@MEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?knockback\@Mob\@\@UEAAXPEAVActor\@\@HMMMMM\@Z
     */
    virtual void knockback(class Actor*, int, float, float, float, float, float); // NOLINT
    /**
     * @vftbl 255
     * @symbol ?spawnAnim\@Mob\@\@UEAAXXZ
     */
    virtual void spawnAnim(); // NOLINT
    /**
     * @vftbl 256
     * @symbol ?setSprinting\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setSprinting(bool); // NOLINT
    /**
     * @vftbl 257
     * @symbol ?getHurtSound\@Mob\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getHurtSound(); // NOLINT
    /**
     * @vftbl 258
     * @symbol ?getDeathSound\@Mob\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getDeathSound(); // NOLINT
    /**
     * @vftbl 259
     * @symbol ?getSpeed\@Mob\@\@UEBAMXZ
     */
    virtual float getSpeed() const; // NOLINT
    /**
     * @vftbl 260
     * @symbol ?setSpeed\@Mob\@\@UEAAXM\@Z
     */
    virtual void setSpeed(float); // NOLINT
    /**
     * @vftbl 261
     * @symbol ?hurtEffects\@Mob\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 262
     * @symbol ?getMeleeWeaponDamageBonus\@Mob\@\@UEAAMPEAV1\@\@Z
     */
    virtual float getMeleeWeaponDamageBonus(class Mob*); // NOLINT
    /**
     * @vftbl 263
     * @symbol ?getMeleeKnockbackBonus\@Mob\@\@UEAAHXZ
     */
    virtual int getMeleeKnockbackBonus(); // NOLINT
    /**
     * @vftbl 264
     * @symbol ?aiStep\@Mob\@\@UEAAXXZ
     */
    virtual void aiStep(); // NOLINT
    /**
     * @vftbl 265
     * @symbol ?aiStep\@Mob\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void aiStep(struct IMobMovementProxy&) const; // NOLINT
    /**
     * @vftbl 266
     * @symbol ?pushActors\@Mob\@\@UEAAXXZ
     */
    virtual void pushActors(); // NOLINT
    /**
     * @vftbl 267
     * @symbol ?lookAt\@Mob\@\@UEAAXPEAVActor\@\@MM\@Z
     */
    virtual void lookAt(class Actor*, float, float); // NOLINT
    /**
     * @vftbl 268
     * @symbol ?checkSpawnRules\@Mob\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool); // NOLINT
    /**
     * @vftbl 269
     * @symbol ?checkSpawnObstruction\@Mob\@\@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const; // NOLINT
    /**
     * @vftbl 270
     * @symbol ?getAttackAnim\@Mob\@\@UEAAMM\@Z
     */
    virtual float getAttackAnim(float); // NOLINT
    /**
     * @vftbl 271
     * @symbol ?getItemUseDuration\@Mob\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const; // NOLINT
    /**
     * @vftbl 272
     * @symbol ?getItemUseStartupProgress\@Mob\@\@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const; // NOLINT
    /**
     * @vftbl 273
     * @symbol ?getItemUseIntervalProgress\@Mob\@\@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const; // NOLINT
    /**
     * @vftbl 274
     * @symbol ?getItemUseIntervalAxis\@Mob\@\@UEBAHXZ
     */
    virtual int getItemUseIntervalAxis() const; // NOLINT
    /**
     * @vftbl 275
     * @symbol ?getTimeAlongSwing\@Mob\@\@UEBAHXZ
     */
    virtual int getTimeAlongSwing() const; // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 277
     * @symbol ?getMaxHeadXRot\@Mob\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot(); // NOLINT
    /**
     * @vftbl 278
     * @symbol ?isAlliedTo\@Mob\@\@UEAA_NPEAV1\@\@Z
     */
    virtual bool isAlliedTo(class Mob*); // NOLINT
    /**
     * @vftbl 279
     * @symbol ?doHurtTarget\@Mob\@\@UEAA_NPEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool doHurtTarget(class Actor*, enum class ActorDamageCause const&); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 281
     * @symbol ?leaveCaravan\@Mob\@\@UEAAXXZ
     */
    virtual void leaveCaravan(); // NOLINT
    /**
     * @vftbl 282
     * @symbol ?joinCaravan\@Mob\@\@UEAAXPEAV1\@\@Z
     */
    virtual void joinCaravan(class Mob*); // NOLINT
    /**
     * @vftbl 283
     * @symbol ?hasCaravanTail\@Mob\@\@UEBA_NXZ
     */
    virtual bool hasCaravanTail() const; // NOLINT
    /**
     * @vftbl 284
     * @symbol ?getCaravanHead\@Mob\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getCaravanHead() const; // NOLINT
    /**
     * @vftbl 285
     * @symbol ?getArmorValue\@Mob\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 286
     * @symbol ?getArmorCoverPercentage\@Mob\@\@UEBAMXZ
     */
    virtual float getArmorCoverPercentage() const; // NOLINT
    /**
     * @vftbl 287
     * @symbol ?getToughnessValue\@Mob\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const; // NOLINT
    /**
     * @vftbl 288
     * @symbol ?hurtArmorSlots\@Mob\@\@UEAAXAEBVActorDamageSource\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, class std::bitset<4>); // NOLINT
    /**
     * @vftbl 289
     * @symbol ?setDamagedArmor\@Mob\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 290
     * @symbol ?sendArmorDamage\@Mob\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmorDamage(class std::bitset<4>); // NOLINT
    /**
     * @vftbl 291
     * @symbol ?sendArmor\@Mob\@\@UEAAXV?$bitset\@$03\@std\@\@\@Z
     */
    virtual void sendArmor(class std::bitset<4>); // NOLINT
    /**
     * @vftbl 292
     * @symbol ?containerChanged\@Mob\@\@UEAAXH\@Z
     */
    virtual void containerChanged(int); // NOLINT
    /**
     * @vftbl 293
     * @symbol ?updateEquipment\@Mob\@\@UEAAXXZ
     */
    virtual void updateEquipment(); // NOLINT
    /**
     * @vftbl 294
     * @symbol ?clearEquipment\@Mob\@\@UEAAHXZ
     */
    virtual int clearEquipment(); // NOLINT
    /**
     * @vftbl 295
     * @symbol ?getAllArmorID\@Mob\@\@UEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<int> getAllArmorID() const; // NOLINT
    /**
     * @vftbl 296
     * @symbol ?getAllHand\@Mob\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllHand() const; // NOLINT
    /**
     * @vftbl 297
     * @symbol
     * ?getAllEquipment\@Mob\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllEquipment() const; // NOLINT
    /**
     * @vftbl 298
     * @symbol ?getArmorTypeHash\@Mob\@\@UEAAHXZ
     */
    virtual int getArmorTypeHash(); // NOLINT
    /**
     * @vftbl 299
     * @symbol ?dropEquipmentOnDeath\@Mob\@\@UEAAXAEBVActorDamageSource\@\@H\@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int); // NOLINT
    /**
     * @vftbl 300
     * @symbol ?dropEquipmentOnDeath\@Mob\@\@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath(); // NOLINT
    /**
     * @vftbl 301
     * @symbol ?clearVanishEnchantedItemsOnDeath\@Mob\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath(); // NOLINT
    /**
     * @vftbl 302
     * @symbol ?sendInventory\@Mob\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool); // NOLINT
    /**
     * @vftbl 303
     * @symbol ?getDamageAfterEnchantReduction\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const&, float) const; // NOLINT
    /**
     * @vftbl 304
     * @symbol ?getDamageAfterArmorReduction\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterArmorReduction(class ActorDamageSource const&, float) const; // NOLINT
    /**
     * @vftbl 305
     * @symbol ?getDamageAfterResistanceEffect\@Mob\@\@UEBAMAEBVActorDamageSource\@\@M\@Z
     */
    virtual float getDamageAfterResistanceEffect(class ActorDamageSource const&, float) const; // NOLINT
    /**
     * @vftbl 306
     * @symbol ?createAIGoals\@Mob\@\@UEAA_NXZ
     */
    virtual bool createAIGoals(); // NOLINT
    /**
     * @vftbl 307
     * @symbol ?onBorn\@Mob\@\@UEAAXAEAVActor\@\@0\@Z
     */
    virtual void onBorn(class Actor&, class Actor&); // NOLINT
    /**
     * @vftbl 308
     * @symbol ?setItemSlot\@Mob\@\@UEAA_NW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool setItemSlot(enum class EquipmentSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 309
     * @symbol ?setTransitioningSitting\@Mob\@\@UEAAX_N\@Z
     */
    virtual void setTransitioningSitting(bool); // NOLINT
    /**
     * @vftbl 310
     * @symbol ?attackAnimation\@Mob\@\@UEAAXPEAVActor\@\@M\@Z
     */
    virtual void attackAnimation(class Actor*, float); // NOLINT
    /**
     * @vftbl 311
     * @symbol ?getAttackTime\@Mob\@\@UEAAHXZ
     */
    virtual int getAttackTime(); // NOLINT
    /**
     * @vftbl 312
     * @symbol ?_getWalkTargetValue\@Mob\@\@UEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const&); // NOLINT
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@Mob\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const; // NOLINT
    /**
     * @vftbl 314
     * @symbol ?ascendBlockByJumping\@Mob\@\@UEAAXXZ
     */
    virtual void ascendBlockByJumping(); // NOLINT
    /**
     * @vftbl 315
     * @symbol ?descendBlockByCrouching\@Mob\@\@UEAAXXZ
     */
    virtual void descendBlockByCrouching(); // NOLINT
    /**
     * @vftbl 316
     * @symbol ?dropContainer\@Mob\@\@UEAAXXZ
     */
    virtual void dropContainer(); // NOLINT
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Mob\@\@MEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl(); // NOLINT
    /**
     * @vftbl 318
     * @symbol ?newServerAiStep\@Mob\@\@MEAAXXZ
     */
    virtual void newServerAiStep(); // NOLINT
    /**
     * @vftbl 319
     * @symbol ?_serverAiMobStep\@Mob\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep(); // NOLINT
    /**
     * @vftbl 320
     * @symbol ?dropBags\@Mob\@\@MEAAXXZ
     */
    virtual void dropBags(); // NOLINT
    /**
     * @vftbl 321
     * @symbol ?tickDeath\@Mob\@\@MEAAXXZ
     */
    virtual void tickDeath(); // NOLINT
    /**
     * @vftbl 322
     * @symbol ?updateGliding\@Mob\@\@MEAAXXZ
     */
    virtual void updateGliding(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
    /**
     * @vftbl 324
     * @symbol ?_getAdjustedAABBForSpawnCheck\@Mob\@\@MEBA?AVAABB\@\@AEBV2\@AEBVVec3\@\@\@Z
     */
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const&, class Vec3 const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOB
    /**
     * @symbol ?_allowAscendingScaffolding\@Mob\@\@MEBA_NXZ
     */
    MCVAPI bool _allowAscendingScaffolding() const; // NOLINT
    /**
     * @symbol ?ate\@Mob\@\@UEAAXXZ
     */
    MCVAPI void ate(); // NOLINT
    /**
     * @symbol ?canBeControlledByPassenger\@Mob\@\@UEAA_NXZ
     */
    MCVAPI bool canBeControlledByPassenger(); // NOLINT
    /**
     * @symbol ?isShootable\@Mob\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable(); // NOLINT
    /**
     * @symbol ?renderDebugServerState\@Mob\@\@UEAAXAEBVOptions\@\@\@Z
     */
    MCVAPI void renderDebugServerState(class Options const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Mob(); // NOLINT
#endif
    /**
     * @symbol ??0Mob\@\@QEAA\@AEAVLevel\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Mob(class Level&, class EntityContext&); // NOLINT
    /**
     * @symbol ??0Mob\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Mob(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?_endJump\@Mob\@\@QEAAXXZ
     */
    MCAPI void _endJump(); // NOLINT
    /**
     * @symbol
     * ?addSpeedModifier\@Mob\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCAPI void addSpeedModifier(class mce::UUID const&, std::string const&, float); // NOLINT
    /**
     * @symbol ?calcMoveRelativeSpeed\@Mob\@\@QEAAMW4TravelType\@\@\@Z
     */
    MCAPI float calcMoveRelativeSpeed(enum class TravelType); // NOLINT
    /**
     * @symbol ?checkForPostHitDamageImmunity\@Mob\@\@QEAA_NMAEBVActorDamageSource\@\@\@Z
     */
    MCAPI bool checkForPostHitDamageImmunity(float, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?checkTotemDeathProtection\@Mob\@\@QEAA_NAEBVActorDamageSource\@\@\@Z
     */
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const&); // NOLINT
    /**
     * @symbol
     * ?createAI\@Mob\@\@QEAAXV?$vector\@UGoalDefinition\@\@V?$allocator\@UGoalDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void createAI(std::vector<struct GoalDefinition>); // NOLINT
    /**
     * @symbol ?emitJumpPreventedEvent\@Mob\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void emitJumpPreventedEvent(class BlockPos const&); // NOLINT
    /**
     * @symbol ?frostWalk\@Mob\@\@QEAAXXZ
     */
    MCAPI void frostWalk(); // NOLINT
    /**
     * @symbol ?getBoundOrigin\@Mob\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getBoundOrigin() const; // NOLINT
    /**
     * @symbol ?getCaravanSize\@Mob\@\@QEBAHXZ
     */
    MCAPI int getCaravanSize() const; // NOLINT
    /**
     * @symbol ?getEatCounter\@Mob\@\@QEBAHXZ
     */
    MCAPI int getEatCounter() const; // NOLINT
    /**
     * @symbol ?getExpectedFallDamage\@Mob\@\@QEBAMMM\@Z
     */
    MCAPI float getExpectedFallDamage(float, float) const; // NOLINT
    /**
     * @symbol ?getFirstCaravanHead\@Mob\@\@QEAAPEAV1\@XZ
     */
    MCAPI class Mob* getFirstCaravanHead(); // NOLINT
    /**
     * @symbol ?getGlidingTicks\@Mob\@\@QEBAHXZ
     */
    MCAPI int getGlidingTicks() const; // NOLINT
    /**
     * @symbol ?getItemSlot\@Mob\@\@QEBAAEBVItemStack\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI class ItemStack const& getItemSlot(enum class EquipmentSlot) const; // NOLINT
    /**
     * @symbol ?getJumpEffectAmplifierValue\@Mob\@\@QEAAMXZ
     */
    MCAPI float getJumpEffectAmplifierValue(); // NOLINT
    /**
     * @symbol ?getJumpMultiplier\@Mob\@\@QEAAMXZ
     */
    MCAPI float getJumpMultiplier(); // NOLINT
    /**
     * @symbol ?getJumpPower\@Mob\@\@QEBAMXZ
     */
    MCAPI float getJumpPower() const; // NOLINT
    /**
     * @symbol ?getJumpPrevention\@Mob\@\@QEAA?AUJumpPreventionResult\@\@XZ
     */
    MCAPI struct JumpPreventionResult getJumpPrevention(); // NOLINT
    /**
     * @symbol ?getJumpTicks\@Mob\@\@QEBAHXZ
     */
    MCAPI int getJumpTicks() const; // NOLINT
    /**
     * @symbol ?getMovementComponentCurrentSpeed\@Mob\@\@QEBAMXZ
     */
    MCAPI float getMovementComponentCurrentSpeed() const; // NOLINT
    /**
     * @symbol ?getNoActionTime\@Mob\@\@QEBAHXZ
     */
    MCAPI int getNoActionTime() const; // NOLINT
    /**
     * @symbol ?getRollCounter\@Mob\@\@QEBAHXZ
     */
    MCAPI int getRollCounter() const; // NOLINT
    /**
     * @symbol ?getSwimSpeedMultiplier\@Mob\@\@QEBAMXZ
     */
    MCAPI float getSwimSpeedMultiplier() const; // NOLINT
    /**
     * @symbol ?getTargetCaptain\@Mob\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetCaptain() const; // NOLINT
    /**
     * @symbol ?getTravelType\@Mob\@\@QEAA?AW4TravelType\@\@XZ
     */
    MCAPI enum class TravelType getTravelType(); // NOLINT
    /**
     * @symbol ?getYBodyRotation\@Mob\@\@QEBAMXZ
     */
    MCAPI float getYBodyRotation() const; // NOLINT
    /**
     * @symbol ?hasBoundOrigin\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool hasBoundOrigin() const; // NOLINT
    /**
     * @symbol ?hurtArmor\@Mob\@\@QEAAXAEBVActorDamageSource\@\@H\@Z
     */
    MCAPI void hurtArmor(class ActorDamageSource const&, int); // NOLINT
    /**
     * @symbol ?isAbleToMove\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isAbleToMove() const; // NOLINT
    /**
     * @symbol ?isEating\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isEating() const; // NOLINT
    /**
     * @symbol ?isFrostWalking\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isFrostWalking() const; // NOLINT
    /**
     * @symbol ?isGliding\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isGliding() const; // NOLINT
    /**
     * @symbol ?isLayingEgg\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isLayingEgg() const; // NOLINT
    /**
     * @symbol ?isPregnant\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isPregnant() const; // NOLINT
    /**
     * @symbol ?isRolling\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isRolling() const; // NOLINT
    /**
     * @symbol ?isSprinting\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isSprinting() const; // NOLINT
    /**
     * @symbol ?isTransitioningSitting\@Mob\@\@QEBA_NXZ
     */
    MCAPI bool isTransitioningSitting() const; // NOLINT
    /**
     * @symbol ?onPlayerDimensionChanged\@Mob\@\@QEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?onPlayerJump\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void onPlayerJump(int); // NOLINT
    /**
     * @symbol ?removeSpeedModifier\@Mob\@\@QEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void removeSpeedModifier(class mce::UUID const&); // NOLINT
    /**
     * @symbol ?resetAttributes\@Mob\@\@QEAAXXZ
     */
    MCAPI void resetAttributes(); // NOLINT
    /**
     * @symbol ?resetNoActionTime\@Mob\@\@QEAAXXZ
     */
    MCAPI void resetNoActionTime(); // NOLINT
    /**
     * @symbol ?sendArmorDamageSlot\@Mob\@\@QEAAXW4ArmorSlot\@\@\@Z
     */
    MCAPI void sendArmorDamageSlot(enum class ArmorSlot); // NOLINT
    /**
     * @symbol ?sendArmorSlot\@Mob\@\@QEAAXW4ArmorSlot\@\@\@Z
     */
    MCAPI void sendArmorSlot(enum class ArmorSlot); // NOLINT
    /**
     * @symbol ?setEatCounter\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void setEatCounter(int); // NOLINT
    /**
     * @symbol ?setEating\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setEating(bool); // NOLINT
    /**
     * @symbol ?setIsLayingEgg\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setIsLayingEgg(bool); // NOLINT
    /**
     * @symbol ?setIsPregnant\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setIsPregnant(bool); // NOLINT
    /**
     * @symbol ?setJumpTicks\@Mob\@\@QEAAXH\@Z
     */
    MCAPI void setJumpTicks(int); // NOLINT
    /**
     * @symbol ?setMovementComponentCurrentSpeed\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setMovementComponentCurrentSpeed(float); // NOLINT
    /**
     * @symbol ?setNaturallySpawned\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setNaturallySpawned(bool); // NOLINT
    /**
     * @symbol ?setRolling\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setRolling(bool); // NOLINT
    /**
     * @symbol ?setSpawnMethod\@Mob\@\@QEAAXW4MobSpawnMethod\@\@\@Z
     */
    MCAPI void setSpawnMethod(enum class MobSpawnMethod); // NOLINT
    /**
     * @symbol ?setSpeedModifier\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setSpeedModifier(float); // NOLINT
    /**
     * @symbol ?setSurfaceMob\@Mob\@\@QEAAX_N\@Z
     */
    MCAPI void setSurfaceMob(bool); // NOLINT
    /**
     * @symbol ?setSwimSpeedMultiplier\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setSwimSpeedMultiplier(float); // NOLINT
    /**
     * @symbol ?setTargetCaptain\@Mob\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setTargetCaptain(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setYBodyRotation\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void setYBodyRotation(float); // NOLINT
    /**
     * @symbol ?setYBodyRotations\@Mob\@\@QEAAXMM\@Z
     */
    MCAPI void setYBodyRotations(float, float); // NOLINT
    /**
     * @symbol ?snapToYBodyRot\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void snapToYBodyRot(float); // NOLINT
    /**
     * @symbol ?snapToYHeadRot\@Mob\@\@QEAAXM\@Z
     */
    MCAPI void snapToYHeadRot(float); // NOLINT
    /**
     * @symbol ?tryFrostWalk\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryFrostWalk(); // NOLINT
    /**
     * @symbol ?tryProcessSoulSpeed\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryProcessSoulSpeed(); // NOLINT
    /**
     * @symbol ?tryUpdateAI\@Mob\@\@QEAAXXZ
     */
    MCAPI void tryUpdateAI(); // NOLINT
    /**
     * @symbol ?_calcMoveRelativeSpeed\@Mob\@\@SAMAEAUIMobMovementProxy\@\@W4TravelType\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static float
    _calcMoveRelativeSpeed(struct IMobMovementProxy&, enum class TravelType, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol
     * ?getJumpPrevention\@Mob\@\@SA?AUJumpPreventionResult\@\@AEBUIMobMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static struct JumpPreventionResult
    getJumpPrevention(struct IMobMovementProxy const&, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?isImmobile\@Mob\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?setSprinting\@Mob\@\@SAXAEAVBaseAttributeMap\@\@VSynchedActorDataWriter\@\@_N\@Z
     */
    MCAPI static void setSprinting(class BaseAttributeMap&, class SynchedActorDataWriter, bool); // NOLINT
    /**
     * @symbol ?shouldApplyWaterGravity\@Mob\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool
    shouldApplyWaterGravity(struct IActorMovementProxy const&, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?shouldApplyWaterGravity\@Mob\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool shouldApplyWaterGravity(struct IActorMovementProxy const&); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Mob\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Mob* tryGetFromEntity(class EntityContext&, bool); // NOLINT
    /**
     * @symbol ?ARMOR_DAMAGE_DIVISOR\@Mob\@\@2HB
     */
    MCAPI static int const ARMOR_DAMAGE_DIVISOR; // NOLINT
    /**
     * @symbol ?ARMOR_PROTECTION_DIVIDER\@Mob\@\@2MB
     */
    MCAPI static float const ARMOR_PROTECTION_DIVIDER; // NOLINT
    /**
     * @symbol ?ASCEND_BLOCK_BY_JUMPING_SPEED\@Mob\@\@2MB
     */
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED; // NOLINT
    /**
     * @symbol ?BASE_ARMOR_TOUGHNESS\@Mob\@\@2MB
     */
    MCAPI static float const BASE_ARMOR_TOUGHNESS; // NOLINT
    /**
     * @symbol ?DEFAULT_GRAVITY\@Mob\@\@2MB
     */
    MCAPI static float const DEFAULT_GRAVITY; // NOLINT
    /**
     * @symbol ?FRICTION_CONSTANT\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_CONSTANT; // NOLINT
    /**
     * @symbol ?FRICTION_CONSTANT_MODIFIED\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_CONSTANT_MODIFIED; // NOLINT
    /**
     * @symbol ?FRICTION_MODIFIER\@Mob\@\@2MB
     */
    MCAPI static float const FRICTION_MODIFIER; // NOLINT
    /**
     * @symbol ?GLIDING_FALL_RESET_DELTA\@Mob\@\@2MB
     */
    MCAPI static float const GLIDING_FALL_RESET_DELTA; // NOLINT
    /**
     * @symbol ?LADDER_CLIMB_SPEED\@Mob\@\@2MB
     */
    MCAPI static float const LADDER_CLIMB_SPEED; // NOLINT
    /**
     * @symbol ?MAX_ARMOR\@Mob\@\@2MB
     */
    MCAPI static float const MAX_ARMOR; // NOLINT
    /**
     * @symbol ?MIN_ARMOR_RATIO\@Mob\@\@2MB
     */
    MCAPI static float const MIN_ARMOR_RATIO; // NOLINT
    /**
     * @symbol ?NUM_ARMOR_ITEMS\@Mob\@\@2MB
     */
    MCAPI static float const NUM_ARMOR_ITEMS; // NOLINT
    /**
     * @symbol ?PLAYER_SWIMMING_SURFACE_OFFSET\@Mob\@\@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET; // NOLINT
    /**
     * @symbol ?REMOVE_PASSENGERS_DELAY\@Mob\@\@2HB
     */
    MCAPI static int const REMOVE_PASSENGERS_DELAY; // NOLINT
    /**
     * @symbol ?SLOW_FALL_GRAVITY\@Mob\@\@2MB
     */
    MCAPI static float const SLOW_FALL_GRAVITY; // NOLINT
    /**
     * @symbol ?SPAWN_XP_DELAY\@Mob\@\@2HB
     */
    MCAPI static int const SPAWN_XP_DELAY; // NOLINT
    /**
     * @symbol ?TOTAL_ROLL_STEPS\@Mob\@\@2HB
     */
    MCAPI static int const TOTAL_ROLL_STEPS; // NOLINT

    // protected:
    /**
     * @symbol ?_addBuiltInMobComponents\@Mob\@\@IEAA?AUBuiltInMobComponents\@\@XZ
     */
    MCAPI struct BuiltInMobComponents _addBuiltInMobComponents(); // NOLINT
    /**
     * @symbol ?_doSprintParticleEffect\@Mob\@\@IEAAXXZ
     */
    MCAPI void _doSprintParticleEffect(); // NOLINT
    /**
     * @symbol ?_processSoulSpeed\@Mob\@\@IEAAXXZ
     */
    MCAPI void _processSoulSpeed(); // NOLINT
    /**
     * @symbol ?_registerMobAttributes\@Mob\@\@IEAAXXZ
     */
    MCAPI void _registerMobAttributes(); // NOLINT
    /**
     * @symbol ?getCurrentSwingDuration\@Mob\@\@IEAAHXZ
     */
    MCAPI int getCurrentSwingDuration(); // NOLINT
    /**
     * @symbol ?jumpFromGround\@Mob\@\@IEAAXAEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void jumpFromGround(class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?saveOffhand\@Mob\@\@IEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const; // NOLINT
    /**
     * @symbol ?setNoActionTime\@Mob\@\@IEAAXH\@Z
     */
    MCAPI void setNoActionTime(int); // NOLINT
    /**
     * @symbol ?tickEffects\@Mob\@\@IEAAXXZ
     */
    MCAPI void tickEffects(); // NOLINT
    /**
     * @symbol ?updateAttackAnim\@Mob\@\@IEAAXXZ
     */
    MCAPI void updateAttackAnim(); // NOLINT
    /**
     * @symbol ?updateGlidingDurability\@Mob\@\@IEAA_NXZ
     */
    MCAPI bool updateGlidingDurability(); // NOLINT

    // private:
    /**
     * @symbol ?_initHardCodedComponents\@Mob\@\@AEAA_N_N\@Z
     */
    MCAPI bool _initHardCodedComponents(bool); // NOLINT
    /**
     * @symbol ?_initialize\@Mob\@\@AEAAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void _initialize(class EntityContext&, bool); // NOLINT
    /**
     * @symbol ?_saveArmor\@Mob\@\@AEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> _saveArmor() const; // NOLINT
    /**
     * @symbol ?_updateSprintingState\@Mob\@\@AEAAXXZ
     */
    MCAPI void _updateSprintingState(); // NOLINT
    /**
     * @symbol ?_verifyAttributes\@Mob\@\@AEAAXXZ
     */
    MCAPI void _verifyAttributes(); // NOLINT

protected:
    /**
     * @symbol ?MAX_INACTIVITY_TIMER\@Mob\@\@1HB
     */
    MCAPI static int const MAX_INACTIVITY_TIMER; // NOLINT

private:
};
