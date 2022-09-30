/**
 * @file  Slime.hpp
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
 * @brief MC class Slime.
 *
 */
class Slime : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIME
public:
    class Slime& operator=(class Slime const &) = delete;
    Slime(class Slime const &) = delete;
    Slime() = delete;
#endif

public:
    /**
     * @hash   802299061
     * @vftbl  8
     * @symbol ?reloadHardcoded@Slime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Slime();
    /**
     * @hash   -1805152477
     * @vftbl  17
     * @symbol ?remove@Slime@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   319141939
     * @vftbl  48
     * @symbol ?normalTick@Slime@@UEAAXXZ
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
     * @hash   -871058370
     * @vftbl  79
     * @symbol ?getShadowRadius@Slime@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @hash   1404569206
     * @vftbl  88
     * @symbol ?playerTouch@Slime@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
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
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1729560928
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Slime@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   -2120250152
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Slime@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   60381349
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Slime@@MEBAXAEAVCompoundTag@@@Z
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
     * @hash   922752563
     * @vftbl  300
     * @symbol ?aiStep@Slime@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   328990135
     * @vftbl  305
     * @symbol ?checkSpawnRules@Slime@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
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
     * @hash   -997693686
     * @vftbl  349
     * @symbol ?_getWalkTargetValue@Slime@@MEAAMAEBVBlockPos@@@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
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
     * @hash   1175601740
     * @vftbl  368
     * @symbol ?canDealDamage@Slime@@UEAA_NXZ
     */
    virtual bool canDealDamage();
    /**
     * @hash   -2094589182
     * @vftbl  369
     * @symbol ?getSquishSound@Slime@@UEAA?AW4LevelSoundEvent@@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @hash   -1368829232
     * @vftbl  370
     * @symbol ?setSlimeSize@Slime@@MEAAXH@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @hash   -1842185220
     * @vftbl  371
     * @symbol ?doPlayJumpSound@Slime@@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @hash   2090125151
     * @vftbl  372
     * @symbol ?doPlayLandSound@Slime@@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @hash   1320624405
     * @vftbl  373
     * @symbol ?playJumpSound@Slime@@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @hash   586987512
     * @vftbl  374
     * @symbol ?playLandSound@Slime@@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @hash   -1490267683
     * @vftbl  375
     * @symbol ?decreaseSquish@Slime@@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @hash   659286191
     * @vftbl  376
     * @symbol ?createChild@Slime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIME
    /**
     * @hash   1052395121
     * @symbol ?useNewAi@Slime@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   1852082532
     * @symbol ??0Slime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Slime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -597004088
     * @symbol ?getOldSquishValue@Slime@@QEBAMXZ
     */
    MCAPI float getOldSquishValue() const;
    /**
     * @hash   -772092692
     * @symbol ?getSlimeSize@Slime@@QEBAHXZ
     */
    MCAPI int getSlimeSize() const;
    /**
     * @hash   -919412932
     * @symbol ?getSquishValue@Slime@@QEBAMXZ
     */
    MCAPI float getSquishValue() const;
    /**
     * @symbol ?postNormalTick@Slime@@QEAAX_N@Z
     */
    MCAPI void postNormalTick(bool);
    /**
     * @symbol ?preNormalTick@Slime@@QEAAXXZ
     */
    MCAPI void preNormalTick();
    /**
     * @hash   798432303
     * @symbol ?getSpawnRulesCallback@Slime@@SA?AV?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@XZ
     */
    MCAPI static class std::function<bool (class SpawnConditions const &, class BlockSource &)> getSpawnRulesCallback();

//protected:
    /**
     * @hash   -1299226367
     * @symbol ?justLanded@Slime@@IEAAXXZ
     */
    MCAPI void justLanded();

protected:

};