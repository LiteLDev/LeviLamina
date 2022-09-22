/**
 * @file  FishingHook.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1897099897
     * @vftbl  8
     * @symbol ?reloadHardcoded@FishingHook@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~FishingHook();
    /**
     * @vftbl  17
     * @symbol ?remove@FishingHook@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   8142942
     * @vftbl  48
     * @symbol ?normalTick@FishingHook@@UEAAXXZ
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
     * @hash   -1382752247
     * @vftbl  79
     * @symbol ?getShadowRadius@FishingHook@@UEBAMXZ
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
     * @hash   22640633
     * @vftbl  141
     * @symbol ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   65841203
     * @vftbl  165
     * @symbol ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -2146754503
     * @vftbl  171
     * @symbol ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   1813953646
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
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
     * @hash   1704770021
     * @vftbl  254
     * @symbol ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -125485895
     * @symbol ??0FishingHook@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI FishingHook(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   93506691
     * @symbol ?getOwner@FishingHook@@QEAAPEAVActor@@XZ
     */
    MCAPI class Actor * getOwner();
    /**
     * @hash   -976314101
     * @symbol ?postNormalTick@FishingHook@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   484350720
     * @symbol ?retrieve@FishingHook@@QEAAHXZ
     */
    MCAPI int retrieve();
    /**
     * @hash   -1747967899
     * @symbol ?BOBBER_SIZE@FishingHook@@2MB
     */
    MCAPI static float const BOBBER_SIZE;

//protected:
    /**
     * @hash   1939303203
     * @symbol ?_fishPosEvent@FishingHook@@IEAAXXZ
     */
    MCAPI void _fishPosEvent();
    /**
     * @hash   -989028779
     * @symbol ?_fishTeaseEvent@FishingHook@@IEAAXXZ
     */
    MCAPI void _fishTeaseEvent();
    /**
     * @hash   465334422
     * @symbol ?_fishhookEvent@FishingHook@@IEAAXXZ
     */
    MCAPI void _fishhookEvent();
    /**
     * @hash   -597433928
     * @symbol ?_getWaterPercentage@FishingHook@@IEAAMXZ
     */
    MCAPI float _getWaterPercentage();
    /**
     * @hash   431558259
     * @symbol ?_hitCheck@FishingHook@@IEAA?AVHitResult@@XZ
     */
    MCAPI class HitResult _hitCheck();
    /**
     * @hash   -464886625
     * @symbol ?_pullCloser@FishingHook@@IEAAXAEAVActor@@M@Z
     */
    MCAPI void _pullCloser(class Actor &, float);
    /**
     * @hash   2057602564
     * @symbol ?_serverHooked@FishingHook@@IEAA_NXZ
     */
    MCAPI bool _serverHooked();
    /**
     * @hash   -84602058
     * @symbol ?_serverLured@FishingHook@@IEAA_NXZ
     */
    MCAPI bool _serverLured();
    /**
     * @hash   -1501532260
     * @symbol ?_updateGravity@FishingHook@@IEAAXXZ
     */
    MCAPI void _updateGravity();
    /**
     * @hash   522565297
     * @symbol ?_updateServer@FishingHook@@IEAAXXZ
     */
    MCAPI void _updateServer();

protected:

};