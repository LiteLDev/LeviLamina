#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class FishingHook : public ::Actor {

public:
    // prevent constructor by default
    FishingHook& operator=(FishingHook const&) = delete;
    FishingHook(FishingHook const&)            = delete;
    FishingHook()                              = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@FishingHook\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@FishingHook\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
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
     * @vftbl 69
     * @symbol ?getShadowRadius\@FishingHook\@\@UEBAMXZ
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
     * @vftbl 127
     * @symbol ?handleEntityEvent\@FishingHook\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 149
     * @symbol ?save\@FishingHook\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@FishingHook\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const; // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
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
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const; // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @symbol
     * ??0FishingHook\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    FishingHook(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?getFishingTarget\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getFishingTarget(); // NOLINT
    /**
     * @symbol ?getOwner\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getOwner(); // NOLINT
    /**
     * @symbol ?postNormalTick\@FishingHook\@\@QEAAXXZ
     */
    MCAPI void postNormalTick(); // NOLINT
    /**
     * @symbol ?retrieve\@FishingHook\@\@QEAAHXZ
     */
    MCAPI int retrieve(); // NOLINT
    /**
     * @symbol ?BOBBER_SIZE\@FishingHook\@\@2MB
     */
    MCAPI static float const BOBBER_SIZE; // NOLINT

    // protected:
    /**
     * @symbol ?_fishPosEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishPosEvent(); // NOLINT
    /**
     * @symbol ?_fishTeaseEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishTeaseEvent(); // NOLINT
    /**
     * @symbol ?_fishhookEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishhookEvent(); // NOLINT
    /**
     * @symbol ?_getWaterPercentage\@FishingHook\@\@IEAAMXZ
     */
    MCAPI float _getWaterPercentage(); // NOLINT
    /**
     * @symbol ?_hitCheck\@FishingHook\@\@IEAA?AVHitResult\@\@XZ
     */
    MCAPI class HitResult _hitCheck(); // NOLINT
    /**
     * @symbol ?_pullCloser\@FishingHook\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _pullCloser(class Actor&, float); // NOLINT
    /**
     * @symbol ?_serverHooked\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverHooked(); // NOLINT
    /**
     * @symbol ?_serverLured\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverLured(); // NOLINT
    /**
     * @symbol ?_updateGravity\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateGravity(); // NOLINT
    /**
     * @symbol ?_updateServer\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateServer(); // NOLINT

protected:
};
