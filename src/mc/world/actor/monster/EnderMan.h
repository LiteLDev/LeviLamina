#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class EnderMan : public ::Monster {

public:
    // prevent constructor by default
    EnderMan& operator=(EnderMan const&) = delete;
    EnderMan(EnderMan const&)            = delete;
    EnderMan()                           = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?normalTick\@EnderMan\@\@UEAAXXZ
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
     * @vftbl 117
     * @symbol ?shouldRender\@EnderMan\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl 119
     * @symbol ?getAmbientSound\@EnderMan\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
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
     * @vftbl 193
     * @symbol ?canBeAffectedByArrow\@EnderMan\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;
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
     * @vftbl 240
     * @symbol ?_hurt\@EnderMan\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@EnderMan\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@EnderMan\@\@MEBAXAEAVCompoundTag\@\@\@Z
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
     * @vftbl 261
     * @symbol ?hurtEffects\@EnderMan\@\@UEAAXAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual void hurtEffects(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 318
     * @symbol ?newServerAiStep\@EnderMan\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @symbol
     * ??0EnderMan\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI EnderMan(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?getCarryingBlock\@EnderMan\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getCarryingBlock() const;
    /**
     * @symbol ?shutdown\@EnderMan\@\@SAXXZ
     */
    MCAPI static void shutdown();
    /**
     * @symbol ?SPEED_MODIFIER_ATTACKING\@EnderMan\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;
    /**
     * @symbol ?SPEED_MODIFIER_ATTACKING_UUID\@EnderMan\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;
    /**
     * @symbol
     * ?mMayTake\@EnderMan\@\@2V?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::set<class Block const*> mMayTake;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mMayTakeIsSetup\@EnderMan\@\@0_NA
     */
    MCAPI static bool mMayTakeIsSetup;
    // NOLINTEND
};
