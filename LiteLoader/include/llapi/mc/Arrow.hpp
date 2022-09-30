/**
 * @file  Arrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Arrow.
 *
 */
class Arrow : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROW
public:
    class Arrow& operator=(class Arrow const &) = delete;
    Arrow(class Arrow const &) = delete;
    Arrow() = delete;
#endif

public:
    /**
     * @hash   279079844
     * @vftbl  8
     * @symbol ?reloadHardcoded@Arrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Arrow();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -906872590
     * @vftbl  48
     * @symbol ?normalTick@Arrow@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   261425015
     * @vftbl  88
     * @symbol ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
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
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
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
     * @hash   -1311219806
     * @vftbl  240
     * @symbol ?setAuxValue@Arrow@@UEAAXH@Z
     */
    virtual void setAuxValue(int);
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
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   227053687
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   594798086
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1201332059
     * @vftbl  286
     * @symbol ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   510668440
     * @vftbl  288
     * @symbol ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @hash   -481612876
     * @vftbl  289
     * @symbol ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
     */
    virtual void applyParticleColor(class Particle *);
    /**
     * @hash   15891552
     * @vftbl  290
     * @symbol ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
     */
    virtual class mce::Color getEffectColor();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @hash   139832205
     * @symbol ?canMakeStepSound@Arrow@@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @hash   -1974743099
     * @symbol ??0Arrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Arrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -136662746
     * @symbol ?addMobEffect@Arrow@@QEAAXVMobEffectInstance@@@Z
     */
    MCAPI void addMobEffect(class MobEffectInstance);
    /**
     * @hash   -1612218274
     * @symbol ?getAuxValue@Arrow@@QEBAHXZ
     */
    MCAPI int getAuxValue() const;
    /**
     * @hash   1104044720
     * @symbol ?setCritical@Arrow@@QEAAX_N@Z
     */
    MCAPI void setCritical(bool);
    /**
     * @hash   -362947042
     * @symbol ?setEnchantFlame@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantFlame(int);
    /**
     * @hash   -397162598
     * @symbol ?setEnchantInfinity@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantInfinity(int);
    /**
     * @hash   1801670698
     * @symbol ?setEnchantPower@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantPower(int);
    /**
     * @hash   -1592461096
     * @symbol ?setEnchantPunch@Arrow@@QEAAXH@Z
     */
    MCAPI void setEnchantPunch(int);

};