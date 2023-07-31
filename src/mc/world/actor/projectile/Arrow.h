#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/AbstractArrow.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Arrow : public ::AbstractArrow {

public:
    // prevent constructor by default
    Arrow& operator=(Arrow const&) = delete;
    Arrow(Arrow const&)            = delete;
    Arrow()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Arrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@Arrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&);
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 211
     * @symbol ?setAuxValue\@Arrow\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int);
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Arrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Arrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?shoot\@Arrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);
    /**
     * @vftbl 256
     * @symbol ?_getPickupItem\@Arrow\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @vftbl 257
     * @symbol ?applyParticleColor\@Arrow\@\@MEAAXPEAVParticle\@\@\@Z
     */
    virtual void applyParticleColor(class Particle*);
    /**
     * @vftbl 258
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
    MCAPI Arrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
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
    // NOLINTEND
};
