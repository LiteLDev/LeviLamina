/**
 * @file  FishingHook.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FishingHook.
 *
 */
class FishingHook : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOK
public:
    class FishingHook& operator=(class FishingHook const &) = delete;
    FishingHook(class FishingHook const &) = delete;
    FishingHook() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@FishingHook\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
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
     * @symbol ?getShadowRadius\@FishingHook\@\@UEBAMXZ
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
     * @vftbl 141
     * @symbol ?handleEntityEvent\@FishingHook\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 163
     * @symbol ?save\@FishingHook\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 169
     * @symbol ?getSourceUniqueID\@FishingHook\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 177
     * @symbol ?canChangeDimensionsUsingPortal\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
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
     * @vftbl 246
     * @symbol ?shouldDropDeathLoot\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @symbol ??0FishingHook\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FishingHook(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getFishingTarget\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getFishingTarget();
    /**
     * @symbol ?getOwner\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getOwner();
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

//protected:
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
    MCAPI void _pullCloser(class Actor &, float);
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
