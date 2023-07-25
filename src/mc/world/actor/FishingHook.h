#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class FishingHook : public ::Actor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOK
public:
    FishingHook& operator=(FishingHook const&) = delete;
    FishingHook(FishingHook const&)            = delete;
    FishingHook()                              = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@FishingHook\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@FishingHook\@\@UEAAXXZ
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
     * @symbol ?getShadowRadius\@FishingHook\@\@UEBAMXZ
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
     * @vftbl 127
     * @symbol ?handleEntityEvent\@FishingHook\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 149
     * @symbol ?save\@FishingHook\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@FishingHook\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
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
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @symbol
     * ??0FishingHook\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FishingHook(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?getFishingTarget\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getFishingTarget();
    /**
     * @symbol ?getOwner\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getOwner();
    /**
     * @symbol ?postNormalTick\@FishingHook\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?retrieve\@FishingHook\@\@QEAAHXZ
     */
    MCAPI int retrieve();
    /**
     * @symbol ?BOBBER_SIZE\@FishingHook\@\@2MB
     */
    MCAPI static float const BOBBER_SIZE;

    // protected:
    /**
     * @symbol ?_fishPosEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishPosEvent();
    /**
     * @symbol ?_fishTeaseEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishTeaseEvent();
    /**
     * @symbol ?_fishhookEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishhookEvent();
    /**
     * @symbol ?_getWaterPercentage\@FishingHook\@\@IEAAMXZ
     */
    MCAPI float _getWaterPercentage();
    /**
     * @symbol ?_hitCheck\@FishingHook\@\@IEAA?AVHitResult\@\@XZ
     */
    MCAPI class HitResult _hitCheck();
    /**
     * @symbol ?_pullCloser\@FishingHook\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _pullCloser(class Actor&, float);
    /**
     * @symbol ?_serverHooked\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverHooked();
    /**
     * @symbol ?_serverLured\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverLured();
    /**
     * @symbol ?_updateGravity\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateGravity();
    /**
     * @symbol ?_updateServer\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateServer();

protected:
};
