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
    /**
     * @vftbl 10
     * @symbol
     * ?reloadHardcoded\@FallingBlockActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@FallingBlockActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@FallingBlockActor\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@FallingBlockActor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@FallingBlockActor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@FallingBlockActor\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@FallingBlockActor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@FallingBlockActor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource); // NOLINT
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@FallingBlockActor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@FallingBlockActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@FallingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@FallingBlockActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCKACTOR
    /**
     * @symbol ?getDeletionDelayTimeSeconds\@FallingBlockActor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0FallingBlockActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    FallingBlockActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?breakBlock\@FallingBlockActor\@\@QEAAXXZ
     */
    MCAPI void breakBlock(); // NOLINT
    /**
     * @symbol ?doNormalTick\@FallingBlockActor\@\@QEAAXAEAVITickDelegate\@\@\@Z
     */
    MCAPI void doNormalTick(class ITickDelegate&); // NOLINT
    /**
     * @symbol ?getFallingBlock\@FallingBlockActor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& getFallingBlock() const; // NOLINT
    /**
     * @symbol ?setFallDamageAmount\@FallingBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDamageAmount(float); // NOLINT
    /**
     * @symbol ?setFallingBlock\@FallingBlockActor\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setFallingBlock(class Block const&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_waitRemoval\@FallingBlockActor\@\@AEAAXXZ
     */
    MCAPI void _waitRemoval(); // NOLINT

private:
};
