/**
 * @file  MC/EnderMan.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderMan.
 *
 */
class EnderMan : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMAN
public:
    class EnderMan& operator=(class EnderMan const &) = delete;
    EnderMan(class EnderMan const &) = delete;
    EnderMan() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~EnderMan();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -2128702151
     * @vftbl  48
     * @symbol ?normalTick@EnderMan@@UEAAXXZ
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
     * @hash   -1721858417
     * @vftbl  131
     * @symbol ?shouldRender@EnderMan@@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @hash   -977132366
     * @vftbl  133
     * @symbol ?getAmbientSound@EnderMan@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
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
     * @hash   2100495632
     * @vftbl  212
     * @symbol ?canBeAffectedByArrow@EnderMan@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
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
     * @hash   -943596594
     * @vftbl  271
     * @symbol ?_hurt@EnderMan@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   339163278
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@EnderMan@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1737565407
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@EnderMan@@MEBAXAEAVCompoundTag@@@Z
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
     * @hash   -1148691352
     * @vftbl  294
     * @symbol ?hurtEffects@EnderMan@@UEAAXAEBVActorDamageSource@@M_N1@Z
     */
    virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   982952073
     * @vftbl  300
     * @symbol ?aiStep@EnderMan@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   1264093292
     * @vftbl  360
     * @symbol ?newServerAiStep@EnderMan@@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   716953822
     * @symbol ??0EnderMan@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI EnderMan(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   559750440
     * @symbol ?getCarryingBlock@EnderMan@@QEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getCarryingBlock() const;
    /**
     * @hash   -758821594
     * @symbol ?setCarryingBlock@EnderMan@@QEAAXAEBVBlock@@@Z
     */
    MCAPI void setCarryingBlock(class Block const &);
    /**
     * @hash   -574635860
     * @symbol ?SPEED_MODIFIER_ATTACKING@EnderMan@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;
    /**
     * @hash   1397129585
     * @symbol ?SPEED_MODIFIER_ATTACKING_UUID@EnderMan@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;
    /**
     * @hash   -1100632558
     * @symbol ?mMayTake@EnderMan@@2V?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@A
     */
    MCAPI static class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> mMayTake;
    /**
     * @hash   -1737200829
     * @symbol ?shutdown@EnderMan@@SAXXZ
     */
    MCAPI static void shutdown();

//private:

private:
    /**
     * @hash   2091620758
     * @symbol ?mMayTakeIsSetup@EnderMan@@0_NA
     */
    MCAPI static bool mMayTakeIsSetup;

};