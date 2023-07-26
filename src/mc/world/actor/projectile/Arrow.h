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
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Arrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Arrow\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
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
     * @vftbl 78
     * @symbol ?playerTouch\@Arrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
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
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
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
     * @vftbl 211
     * @symbol ?setAuxValue\@Arrow\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int); // NOLINT
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Arrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Arrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?shoot\@Arrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&); // NOLINT
    /**
     * @vftbl 256
     * @symbol ?_getPickupItem\@Arrow\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const; // NOLINT
    /**
     * @vftbl 257
     * @symbol ?applyParticleColor\@Arrow\@\@MEAAXPEAVParticle\@\@\@Z
     */
    virtual void applyParticleColor(class Particle*); // NOLINT
    /**
     * @vftbl 258
     * @symbol ?getEffectColor\@Arrow\@\@MEAA?AVColor\@mce\@\@XZ
     */
    virtual class mce::Color getEffectColor(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @symbol ?canMakeStepSound\@Arrow\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const; // NOLINT
#endif
    /**
     * @symbol ??0Arrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Arrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?addMobEffect\@Arrow\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addMobEffect(class MobEffectInstance); // NOLINT
    /**
     * @symbol ?getAuxValue\@Arrow\@\@QEBAHXZ
     */
    MCAPI int getAuxValue() const; // NOLINT
    /**
     * @symbol ?setCritical\@Arrow\@\@QEAAX_N\@Z
     */
    MCAPI void setCritical(bool); // NOLINT
    /**
     * @symbol ?setEnchantFlame\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantFlame(int); // NOLINT
    /**
     * @symbol ?setEnchantInfinity\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantInfinity(int); // NOLINT
    /**
     * @symbol ?setEnchantPower\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPower(int); // NOLINT
    /**
     * @symbol ?setEnchantPunch\@Arrow\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantPunch(int); // NOLINT
};
