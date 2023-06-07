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
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 136
     * @symbol ?onLightningHit\@VillagerBase\@\@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @vftbl 139
     * @symbol ?handleEntityEvent\@VillagerBase\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@VillagerBase\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@VillagerBase\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 266
     * @symbol ?_onSizeUpdated\@VillagerBase\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 339
     * @symbol ?_serverAiMobStep\@VillagerBase\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
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
