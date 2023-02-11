/**
 * @file  Slime.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   148726805
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Slime\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Slime();
    /**
     * @hash   1836242563
     * @vftbl  19
     * @symbol  ?remove\@Slime\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -334399565
     * @vftbl  49
     * @symbol  ?normalTick\@Slime\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -1524492242
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Slime\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1911941744
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@Slime\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   1521129512
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Slime\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -593114027
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Slime\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   247530899
     * @vftbl  291
     * @symbol  ?aiStep\@Slime\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   -324535993
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@Slime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -1651189062
     * @vftbl  340
     * @symbol  ?_getWalkTargetValue\@Slime\@\@MEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   1546944242
     * @vftbl  357
     * @symbol  ?getSquishSound\@Slime\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @hash   -2022386112
     * @vftbl  358
     * @symbol  ?setSlimeSize\@Slime\@\@MEAAXH\@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @hash   1799348204
     * @vftbl  359
     * @symbol  ?doPlayJumpSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @hash   1436691279
     * @vftbl  360
     * @symbol  ?doPlayLandSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @hash   667221285
     * @vftbl  361
     * @symbol  ?playJumpSound\@Slime\@\@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @hash   -66384856
     * @vftbl  362
     * @symbol  ?playLandSound\@Slime\@\@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @hash   -2143701555
     * @vftbl  363
     * @symbol  ?decreaseSquish\@Slime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @hash   5836943
     * @vftbl  364
     * @symbol  ?createChild\@Slime\@\@MEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@H\@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /**
     * @hash   1198418020
     * @symbol  ??0Slime\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Slime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1250437960
     * @symbol  ?getOldSquishValue\@Slime\@\@QEBAMXZ
     */
    MCAPI float getOldSquishValue() const;
    /**
     * @hash   -1461860052
     * @symbol  ?getSlimeSize\@Slime\@\@QEBAHXZ
     */
    MCAPI int getSlimeSize() const;
    /**
     * @hash   -1572846804
     * @symbol  ?getSquishValue\@Slime\@\@QEBAMXZ
     */
    MCAPI float getSquishValue() const;
    /**
     * @hash   -1555130788
     * @symbol  ?postNormalTick\@Slime\@\@QEAAX_N\@Z
     */
    MCAPI void postNormalTick(bool);
    /**
     * @hash   -1914605501
     * @symbol  ?preNormalTick\@Slime\@\@QEAAXXZ
     */
    MCAPI void preNormalTick();
    /**
     * @hash   144998431
     * @symbol  ?getSpawnRulesCallback\@Slime\@\@SA?AV?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool (class SpawnConditions const &, class BlockSource &)> getSpawnRulesCallback();

//protected:
    /**
     * @hash   1596644308
     * @symbol  ?justJumped\@Slime\@\@IEAAXXZ
     */
    MCAPI void justJumped();
    /**
     * @hash   -1952767871
     * @symbol  ?justLanded\@Slime\@\@IEAAXXZ
     */
    MCAPI void justLanded();

protected:

};