/**
 * @file  Arrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Arrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Arrow\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 77
     * @symbol ?playerTouch\@Arrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 207
     * @symbol ?setAuxValue\@Arrow\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int);
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@Arrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@Arrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 249
     * @symbol ?shoot\@Arrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @vftbl 251
     * @symbol ?_getPickupItem\@Arrow\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @vftbl 252
     * @symbol ?applyParticleColor\@Arrow\@\@MEAAXPEAVParticle\@\@\@Z
     */
    virtual void applyParticleColor(class Particle *);
    /**
     * @vftbl 253
     * @symbol ?getEffectColor\@Arrow\@\@MEAA?AVColor\@mce\@\@XZ
     */
    virtual class mce::Color getEffectColor();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @symbol ?canMakeStepSound\@Arrow\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol ??0Arrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Arrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?addMobEffect\@Arrow\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addMobEffect(class MobEffectInstance);
    /**
     * @symbol ?getAuxValue\@Arrow\@\@QEBAHXZ
     */
    MCAPI int getAuxValue() const;
    /**
     * @symbol ?setCritical\@Arrow\@\@QEAAX_N\@Z
     */
    MCAPI void setCritical(bool);
    /**
     * @symbol ?setEnchantFlame\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantFlame(int);
    /**
     * @symbol ?setEnchantInfinity\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantInfinity(int);
    /**
     * @symbol ?setEnchantPower\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPower(int);
    /**
     * @symbol ?setEnchantPunch\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPunch(int);

};
