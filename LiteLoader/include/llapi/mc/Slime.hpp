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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Slime\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@Slime\@\@UEAAXXZ
     */
    virtual void remove();
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
     * @vftbl 80
     * @symbol ?getShadowRadius\@Slime\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 187
     * @symbol ?onSynchedDataUpdate\@Slime\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @symbol ?readAdditionalSaveData\@Slime\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@Slime\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 288
     * @symbol ?aiStep\@Slime\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 293
     * @symbol ?checkSpawnRules\@Slime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl 337
     * @symbol ?_getWalkTargetValue\@Slime\@\@MEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl 354
     * @symbol ?getSquishSound\@Slime\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @vftbl 355
     * @symbol ?setSlimeSize\@Slime\@\@MEAAXH\@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @vftbl 356
     * @symbol ?doPlayJumpSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @vftbl 357
     * @symbol ?doPlayLandSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vftbl 358
     * @symbol ?playJumpSound\@Slime\@\@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @vftbl 359
     * @symbol ?playLandSound\@Slime\@\@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @vftbl 360
     * @symbol ?decreaseSquish\@Slime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vftbl 361
     * @symbol ?createChild\@Slime\@\@MEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@H\@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIME
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Slime();
#endif
    /**
     * @symbol ??0Slime\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Slime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getOldSquishValue\@Slime\@\@QEBAMXZ
     */
    MCAPI float getOldSquishValue() const;
    /**
     * @symbol ?getSquishValue\@Slime\@\@QEBAMXZ
     */
    MCAPI float getSquishValue() const;
    /**
     * @symbol ?postNormalTick\@Slime\@\@QEAAX_N\@Z
     */
    MCAPI void postNormalTick(bool);
    /**
     * @symbol ?preNormalTick\@Slime\@\@QEAAXXZ
     */
    MCAPI void preNormalTick();
    /**
     * @symbol ?getSpawnRulesCallback\@Slime\@\@SA?AV?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool (class SpawnConditions const &, class BlockSource &)> getSpawnRulesCallback();

//protected:
    /**
     * @symbol ?justJumped\@Slime\@\@IEAAXXZ
     */
    MCAPI void justJumped();
    /**
     * @symbol ?justLanded\@Slime\@\@IEAAXXZ
     */
    MCAPI void justLanded();

protected:

};
