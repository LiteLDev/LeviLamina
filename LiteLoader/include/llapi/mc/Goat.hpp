/**
 * @file  Goat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Goat.
 *
 */
class Goat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOAT
public:
    class Goat& operator=(class Goat const &) = delete;
    Goat(class Goat const &) = delete;
    Goat() = delete;
#endif

public:
    /**
     * @hash   -435735707
     * @vftbl  10
     * @symbol ?initializeComponents@Goat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Goat();
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
     * @hash   -1912240663
     * @vftbl  133
     * @symbol ?getAmbientSound@Goat@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @hash   1984263515
     * @vftbl  141
     * @symbol ?handleEntityEvent@Goat@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
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
     * @hash   759196435
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Goat@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1949057748
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Goat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1197212001
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Goat@@UEBAXAEAVCompoundTag@@@Z
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
     * @hash   413425287
     * @vftbl  289
     * @symbol ?getHurtSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
     */
    virtual enum class LevelSoundEvent getHurtSound();
    /**
     * @hash   1682263870
     * @vftbl  290
     * @symbol ?getDeathSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
     */
    virtual enum class LevelSoundEvent getDeathSound();
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
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -2111543209
     * @symbol ??0Goat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Goat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1060931480
     * @symbol ?getHornCount@Goat@@QEBAHXZ
     */
    MCAPI int getHornCount() const;
    /**
     * @hash   -428144484
     * @symbol ?isScreaming@Goat@@QEAA_NXZ
     */
    MCAPI bool isScreaming();
    /**
     * @hash   775547427
     * @symbol ?reduceHornCount@Goat@@QEAAXXZ
     */
    MCAPI void reduceHornCount();

//private:

private:
    /**
     * @hash   734316705
     * @symbol ?DEFAULT_HORN_COUNT@Goat@@0HA
     */
    MCAPI static int DEFAULT_HORN_COUNT;
    /**
     * @hash   41342881
     * @symbol ?SCREAMING_GOAT_VARIANT@Goat@@0HA
     */
    MCAPI static int SCREAMING_GOAT_VARIANT;

};