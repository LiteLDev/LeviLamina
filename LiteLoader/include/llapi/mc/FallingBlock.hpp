/**
 * @file  FallingBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FallingBlock.
 *
 */
class FallingBlock : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const &) = delete;
    FallingBlock(class FallingBlock const &) = delete;
    FallingBlock() = delete;
#endif

public:
    /**
     * @hash   -1021568873
     * @vftbl  8
     * @symbol ?reloadHardcoded@FallingBlock@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~FallingBlock();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   1762659987
     * @vftbl  43
     * @symbol ?teleportTo@FallingBlock@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   1089656901
     * @vftbl  48
     * @symbol ?normalTick@FallingBlock@@UEAAXXZ
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
     * @hash   -368897974
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@FallingBlock@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   210340624
     * @vftbl  79
     * @symbol ?getShadowRadius@FallingBlock@@UEBAMXZ
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
     * @hash   -412526168
     * @vftbl  94
     * @symbol ?isPickable@FallingBlock@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @hash   499913877
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@FallingBlock@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1631722200
     * @vftbl  185
     * @symbol ?causeFallDamage@FallingBlock@@UEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   -1818324322
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@FallingBlock@@UEAAXH@Z
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
     * @hash   352776858
     * @vftbl  271
     * @symbol ?_hurt@FallingBlock@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1575014294
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@FallingBlock@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1123390285
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@FallingBlock@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCK
    /**
     * @hash   373613387
     * @symbol ?getDeletionDelayTimeSeconds@FallingBlock@@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    /**
     * @hash   1406931634
     * @symbol ??0FallingBlock@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI FallingBlock(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?breakBlock@FallingBlock@@QEAAXXZ
     */
    MCAPI void breakBlock();
    /**
     * @symbol ?doNormalTick@FallingBlock@@QEAAXAEAVITickDelegate@@@Z
     */
    MCAPI void doNormalTick(class ITickDelegate &);
    /**
     * @hash   1186998358
     * @symbol ?getFallingBlock@FallingBlock@@QEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getFallingBlock() const;
    /**
     * @hash   -291497466
     * @symbol ?setFallDamageAmount@FallingBlock@@QEAAXM@Z
     */
    MCAPI void setFallDamageAmount(float);
    /**
     * @hash   1553017933
     * @symbol ?setFallingBlock@FallingBlock@@QEAAXAEBVBlock@@_N@Z
     */
    MCAPI void setFallingBlock(class Block const &, bool);

//private:
    /**
     * @hash   1539203118
     * @symbol ?_waitRemoval@FallingBlock@@AEAAXXZ
     */
    MCAPI void _waitRemoval();

private:

};