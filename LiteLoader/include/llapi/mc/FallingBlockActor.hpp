/**
 * @file  FallingBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FallingBlockActor : public PredictableProjectile {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKACTOR
public:
    class FallingBlockActor& operator=(class FallingBlockActor const &) = delete;
    FallingBlockActor(class FallingBlockActor const &) = delete;
    FallingBlockActor() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@FallingBlockActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
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
     * @vftbl 43
     * @symbol ?teleportTo\@FallingBlockActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl 48
     * @symbol ?normalTick\@FallingBlockActor\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 77
     * @symbol ?getShadowHeightOffs\@FallingBlockActor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 78
     * @symbol ?getShadowRadius\@FallingBlockActor\@\@UEBAMXZ
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
     * @vftbl 93
     * @symbol ?isPickable\@FallingBlockActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl 175
     * @symbol ?canChangeDimensionsUsingPortal\@FallingBlockActor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 180
     * @symbol ?causeFallDamage\@FallingBlockActor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 185
     * @symbol ?onSynchedDataUpdate\@FallingBlockActor\@\@UEAAXH\@Z
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
     * @vftbl 253
     * @symbol ?_hurt\@FallingBlockActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@FallingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@FallingBlockActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCKACTOR
    /**
     * @symbol ?getDeletionDelayTimeSeconds\@FallingBlockActor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    /**
     * @symbol ??0FallingBlockActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FallingBlockActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?breakBlock\@FallingBlockActor\@\@QEAAXXZ
     */
    MCAPI void breakBlock();
    /**
     * @symbol ?doNormalTick\@FallingBlockActor\@\@QEAAXAEAVITickDelegate\@\@\@Z
     */
    MCAPI void doNormalTick(class ITickDelegate &);
    /**
     * @symbol ?getFallingBlock\@FallingBlockActor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getFallingBlock() const;
    /**
     * @symbol ?setFallDamageAmount\@FallingBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDamageAmount(float);
    /**
     * @symbol ?setFallingBlock\@FallingBlockActor\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setFallingBlock(class Block const &, bool);

//private:
    /**
     * @symbol ?_waitRemoval\@FallingBlockActor\@\@AEAAXXZ
     */
    MCAPI void _waitRemoval();

private:

};
