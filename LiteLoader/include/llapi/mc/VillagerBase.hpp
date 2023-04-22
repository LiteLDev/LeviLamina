/**
 * @file  VillagerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 13
     * @symbol ?reloadComponents\@VillagerBase\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
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
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 138
     * @symbol ?onLightningHit\@VillagerBase\@\@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@VillagerBase\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@VillagerBase\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@VillagerBase\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 274
     * @symbol ?_onSizeUpdated\@VillagerBase\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 347
     * @symbol ?_serverAiMobStep\@VillagerBase\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @symbol ?interactPreventDefault\@VillagerBase\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VillagerBase();
#endif
    /**
     * @symbol ??0VillagerBase\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?consumeLoveFood\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void consumeLoveFood();
    /**
     * @symbol ?getBreedingStackIndex\@VillagerBase\@\@QEBAHXZ
     */
    MCAPI int getBreedingStackIndex() const;
    /**
     * @symbol ?isChasing\@VillagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isChasing() const;
    /**
     * @symbol ?isWillingToBreed\@VillagerBase\@\@QEAA_N_N\@Z
     */
    MCAPI bool isWillingToBreed(bool);
    /**
     * @symbol ?setChasing\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setChasing(bool);
    /**
     * @symbol ?setWillingToBreed\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWillingToBreed(bool);
    /**
     * @symbol ?stopGoals\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void stopGoals();
    /**
     * @symbol ?BiomeStrToEnum\@VillagerBase\@\@SA?AW4BiomeType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    /**
     * @symbol ?_addParticlesAroundSelf\@VillagerBase\@\@AEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void _addParticlesAroundSelf(enum class ParticleType);

private:

};
