/**
 * @file  VillagerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerBase.
 *
 */
class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There
    enum class BiomeType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif

public:
    /**
     * @hash   -1602350030
     * @vftbl  11
     * @symbol ?reloadComponents@VillagerBase@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~VillagerBase();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
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
     * @hash   1484426024
     * @vftbl  138
     * @symbol ?onLightningHit@VillagerBase@@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @hash   -1546952865
     * @vftbl  141
     * @symbol ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
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
     * @hash   -1078485936
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   2031776397
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   1997941294
     * @vftbl  284
     * @symbol ?_onSizeUpdated@VillagerBase@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
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
     * @hash   -1473390533
     * @vftbl  361
     * @symbol ?_serverAiMobStep@VillagerBase@@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @hash   741608577
     * @symbol ?interactPreventDefault@VillagerBase@@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @hash   1755435778
     * @symbol ?useNewAi@VillagerBase@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   -861354301
     * @symbol ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -2010811197
     * @symbol ?consumeLoveFood@VillagerBase@@QEAAXXZ
     */
    MCAPI void consumeLoveFood();
    /**
     * @hash   1027203318
     * @symbol ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
     */
    MCAPI int getBreedingStackIndex() const;
    /**
     * @hash   734515508
     * @symbol ?isChasing@VillagerBase@@QEBA_NXZ
     */
    MCAPI bool isChasing() const;
    /**
     * @hash   -770188013
     * @symbol ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
     */
    MCAPI bool isWillingToBreed(bool);
    /**
     * @hash   530263514
     * @symbol ?setChasing@VillagerBase@@QEAAX_N@Z
     */
    MCAPI void setChasing(bool);
    /**
     * @hash   1692162244
     * @symbol ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
     */
    MCAPI void setWillingToBreed(bool);
    /**
     * @hash   -390608733
     * @symbol ?stopGoals@VillagerBase@@QEAAXXZ
     */
    MCAPI void stopGoals();
    /**
     * @hash   127678963
     * @symbol ?BiomeStrToEnum@VillagerBase@@SA?AW4BiomeType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    /**
     * @hash   1633688531
     * @symbol ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
     */
    MCAPI void _addParticlesAroundSelf(enum ParticleType);

private:

};