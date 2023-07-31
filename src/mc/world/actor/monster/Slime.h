#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"

class Slime : public ::Monster {

public:
    // prevent constructor by default
    Slime& operator=(Slime const&) = delete;
    Slime(Slime const&)            = delete;
    Slime()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Slime\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Slime\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Slime\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Slime\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Slime\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 264
     * @symbol ?aiStep\@Slime\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 268
     * @symbol ?checkSpawnRules\@Slime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 312
     * @symbol ?_getWalkTargetValue\@Slime\@\@MEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const&);
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @vftbl 326
     * @symbol ?getSquishSound\@Slime\@\@UEAA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getSquishSound();
    /**
     * @vftbl 327
     * @symbol ?setSlimeSize\@Slime\@\@MEAAXH\@Z
     */
    virtual void setSlimeSize(int);
    /**
     * @vftbl 328
     * @symbol ?doPlayJumpSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayJumpSound();
    /**
     * @vftbl 329
     * @symbol ?doPlayLandSound\@Slime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vftbl 330
     * @symbol ?playJumpSound\@Slime\@\@MEAAXXZ
     */
    virtual void playJumpSound();
    /**
     * @vftbl 331
     * @symbol ?playLandSound\@Slime\@\@MEAAXXZ
     */
    virtual void playLandSound();
    /**
     * @vftbl 332
     * @symbol ?decreaseSquish\@Slime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vftbl 333
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
    MCAPI Slime(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?getOldSquishValue\@Slime\@\@QEBAMXZ
     */
    MCAPI float getOldSquishValue() const;
    /**
     * @symbol
     * ?getSpawnRulesCallback\@Slime\@\@SA?AV?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@XZ
     */
    MCAPI static std::function<bool(class SpawnConditions const&, class BlockSource&)> getSpawnRulesCallback();
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
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?justJumped\@Slime\@\@IEAAXXZ
     */
    MCAPI void justJumped();
    /**
     * @symbol ?justLanded\@Slime\@\@IEAAXXZ
     */
    MCAPI void justLanded();
    // NOLINTEND
};
