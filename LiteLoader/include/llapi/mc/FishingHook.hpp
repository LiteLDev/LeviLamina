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
     * @hash   1242066921
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@FishingHook\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~FishingHook();
    /**
     * @hash   390396974
     * @vftbl  19
     * @symbol  ?remove\@FishingHook\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -647074546
     * @vftbl  49
     * @symbol  ?normalTick\@FishingHook\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -1085026759
     * @vftbl  81
     * @symbol  ?getShadowRadius\@FishingHook\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -632576855
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@FishingHook\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   166461747
     * @vftbl  164
     * @symbol  ?save\@FishingHook\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1492995305
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@FishingHook\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   1914574190
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   1805390565
     * @vftbl  247
     * @symbol  ?shouldDropDeathLoot\@FishingHook\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -780595751
     * @symbol  ??0FishingHook\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FishingHook(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?getFishingTarget\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getFishingTarget();
    /**
     * @hash   -561710797
     * @symbol  ?getOwner\@FishingHook\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getOwner();
    /**
     * @hash   -1631500837
     * @symbol  ?postNormalTick\@FishingHook\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   -170574624
     * @symbol  ?retrieve\@FishingHook\@\@QEAAHXZ
     */
    MCAPI int retrieve();
    /**
     * @hash   -777342523
     * @symbol  ?BOBBER_SIZE\@FishingHook\@\@2MB
     */
    MCAPI static float const BOBBER_SIZE;

//protected:
    /**
     * @hash   1284316355
     * @symbol  ?_fishPosEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishPosEvent();
    /**
     * @hash   -1644092507
     * @symbol  ?_fishTeaseEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishTeaseEvent();
    /**
     * @hash   -189713930
     * @symbol  ?_fishhookEvent\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _fishhookEvent();
    /**
     * @hash   -1252559160
     * @symbol  ?_getWaterPercentage\@FishingHook\@\@IEAAMXZ
     */
    MCAPI float _getWaterPercentage();
    /**
     * @hash   -223551597
     * @symbol  ?_hitCheck\@FishingHook\@\@IEAA?AVHitResult\@\@XZ
     */
    MCAPI class HitResult _hitCheck();
    /**
     * @hash   -1119981105
     * @symbol  ?_pullCloser\@FishingHook\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _pullCloser(class Actor &, float);
    /**
     * @hash   1402554212
     * @symbol  ?_serverHooked\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverHooked();
    /**
     * @hash   -739850298
     * @symbol  ?_serverLured\@FishingHook\@\@IEAA_NXZ
     */
    MCAPI bool _serverLured();
    /**
     * @hash   2138125292
     * @symbol  ?_updateGravity\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateGravity();
    /**
     * @hash   -132729071
     * @symbol  ?_updateServer\@FishingHook\@\@IEAAXXZ
     */
    MCAPI void _updateServer();

protected:

};