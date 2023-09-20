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
     * @symbol ?getShadowRadius\@FishingHook\@\@UEBAMXZ
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
     * @vftbl 125
     * @symbol ?handleEntityEvent\@FishingHook\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 147
     * @symbol ?save\@FishingHook\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 153
     * @symbol ?getSourceUniqueID\@FishingHook\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 161
     * @symbol ?canChangeDimensionsUsingPortal\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
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
     * @vftbl 221
     * @symbol ?shouldDropDeathLoot\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
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
