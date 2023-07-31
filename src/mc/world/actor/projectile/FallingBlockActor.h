#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

class FallingBlockActor : public ::PredictableProjectile {

public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const&) = delete;
    FallingBlockActor(FallingBlockActor const&)            = delete;
    FallingBlockActor()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol
     * ?reloadHardcoded\@FallingBlockActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@FallingBlockActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);
    /**
     * @vftbl 43
     * @symbol ?normalTick\@FallingBlockActor\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@FallingBlockActor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@FallingBlockActor\@\@UEBAMXZ
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
     * @vftbl 82
     * @symbol ?isPickable\@FallingBlockActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@FallingBlockActor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@FallingBlockActor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@FallingBlockActor\@\@UEAAXH\@Z
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
     * @vftbl 240
     * @symbol ?_hurt\@FallingBlockActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@FallingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@FallingBlockActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCKACTOR
    /**
     * @symbol ?getDeletionDelayTimeSeconds\@FallingBlockActor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    /**
     * @symbol
     * ??0FallingBlockActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FallingBlockActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?breakBlock\@FallingBlockActor\@\@QEAAXXZ
     */
    MCAPI void breakBlock();
    /**
     * @symbol ?doNormalTick\@FallingBlockActor\@\@QEAAXAEAVITickDelegate\@\@\@Z
     */
    MCAPI void doNormalTick(class ITickDelegate&);
    /**
     * @symbol ?getFallingBlock\@FallingBlockActor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getFallingBlock() const;
    /**
     * @symbol ?setFallDamageAmount\@FallingBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDamageAmount(float);
    /**
     * @symbol ?setFallingBlock\@FallingBlockActor\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setFallingBlock(class Block const&, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_waitRemoval\@FallingBlockActor\@\@AEAAXXZ
     */
    MCAPI void _waitRemoval();
    // NOLINTEND
};
