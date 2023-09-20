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
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@Slime\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 169
     * @symbol ?onSynchedDataUpdate\@Slime\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@Slime\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@Slime\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 259
     * @symbol ?aiStep\@Slime\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 262
     * @symbol ?checkSpawnRules\@Slime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl 274
     * @symbol __unk_vfn_274
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl 306
     * @symbol ?_getWalkTargetValue\@Slime\@\@MEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl 319
     * @symbol ?getSquishSound\@Slime\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @vftbl 320
     * @symbol ?setSlimeSize\@Slime\@\@MEAAXH\@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @vftbl 321
     * @symbol ?doPlayJumpSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @vftbl 322
     * @symbol ?doPlayLandSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vftbl 323
     * @symbol ?playJumpSound\@Slime\@\@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @vftbl 324
     * @symbol ?playLandSound\@Slime\@\@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @vftbl 325
     * @symbol ?decreaseSquish\@Slime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vftbl 326
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
