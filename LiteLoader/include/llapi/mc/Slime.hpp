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
     * @vftbl 78
     * @symbol ?getShadowRadius\@Slime\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 185
     * @symbol ?onSynchedDataUpdate\@Slime\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @symbol ?readAdditionalSaveData\@Slime\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@Slime\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 280
     * @symbol ?aiStep\@Slime\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 285
     * @symbol ?checkSpawnRules\@Slime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl 329
     * @symbol ?_getWalkTargetValue\@Slime\@\@MEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 346
     * @symbol ?getSquishSound\@Slime\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @vftbl 347
     * @symbol ?setSlimeSize\@Slime\@\@MEAAXH\@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @vftbl 348
     * @symbol ?doPlayJumpSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @vftbl 349
     * @symbol ?doPlayLandSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vftbl 350
     * @symbol ?playJumpSound\@Slime\@\@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @vftbl 351
     * @symbol ?playLandSound\@Slime\@\@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @vftbl 352
     * @symbol ?decreaseSquish\@Slime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vftbl 353
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
