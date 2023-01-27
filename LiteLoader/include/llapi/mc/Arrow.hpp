/**
 * @file  Arrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../AbstractArrow.hpp"

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
     * @hash   -371217324
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Arrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Arrow();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1557292766
     * @vftbl  49
     * @symbol  ?normalTick\@Arrow\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   -388949033
     * @vftbl  90
     * @symbol  ?playerTouch\@Arrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
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
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
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
     * @hash   -1961501598
     * @vftbl  233
     * @symbol  ?setAuxValue\@Arrow\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int);
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
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -423289609
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Arrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -55745098
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Arrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -1851583099
     * @vftbl  278
     * @symbol  ?shoot\@Arrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   -139874744
     * @vftbl  280
     * @symbol  ?_getPickupItem\@Arrow\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @hash   -1132140684
     * @vftbl  281
     * @symbol  ?applyParticleColor\@Arrow\@\@MEAAXPEAVParticle\@\@\@Z
     */
    virtual void applyParticleColor(class Particle *);
    /**
     * @hash   -634620880
     * @vftbl  282
     * @symbol  ?getEffectColor\@Arrow\@\@MEAA?AVColor\@mce\@\@XZ
     */
    virtual class mce::Color getEffectColor();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @hash   240452749
     * @symbol  ?canMakeStepSound\@Arrow\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @hash   1669634885
     * @symbol  ??0Arrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Arrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -787221306
     * @symbol  ?addMobEffect\@Arrow\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addMobEffect(class MobEffectInstance);
    /**
     * @hash   2032236590
     * @symbol  ?getAuxValue\@Arrow\@\@QEBAHXZ
     */
    MCAPI int getAuxValue() const;
    /**
     * @hash   453778304
     * @symbol  ?setCritical\@Arrow\@\@QEAAX_N\@Z
     */
    MCAPI void setCritical(bool);
    /**
     * @hash   -1013198082
     * @symbol  ?setEnchantFlame\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantFlame(int);
    /**
     * @hash   -1047413638
     * @symbol  ?setEnchantInfinity\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantInfinity(int);
    /**
     * @hash   1151419658
     * @symbol  ?setEnchantPower\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPower(int);
    /**
     * @hash   2052255160
     * @symbol  ?setEnchantPunch\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPunch(int);

};