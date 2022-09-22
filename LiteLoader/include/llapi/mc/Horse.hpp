/**
 * @file  Horse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Horse.
 *
 */
class Horse : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSE
public:
    class Horse& operator=(class Horse const &) = delete;
    Horse(class Horse const &) = delete;
    Horse() = delete;
#endif

public:
    /**
     * @hash   -36273230
     * @vftbl  8
     * @symbol ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Horse();
    /**
     * @hash   -1828516612
     * @vftbl  35
     * @symbol ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   1637898910
     * @vftbl  48
     * @symbol ?normalTick@Horse@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   322301382
     * @vftbl  51
     * @symbol ?positionPassenger@Horse@@UEAAXAEAVActor@@M@Z
     */
    virtual void positionPassenger(class Actor &, float);
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
     * @hash   447514089
     * @vftbl  79
     * @symbol ?getShadowRadius@Horse@@UEBAMXZ
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
     * @hash   -152496956
     * @vftbl  91
     * @symbol ?isImmobile@Horse@@MEBA_NXZ
     */
    virtual bool isImmobile() const;
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
     * @hash   1197217627
     * @vftbl  121
     * @symbol ?onFailedTame@Horse@@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @hash   742142004
     * @vftbl  125
     * @symbol ?setStanding@Horse@@UEAAX_N@Z
     */
    virtual void setStanding(bool);
    /**
     * @hash   -1427509049
     * @vftbl  140
     * @symbol ?feed@Horse@@UEAAXH@Z
     */
    virtual void feed(int);
    /**
     * @hash   627284553
     * @vftbl  141
     * @symbol ?handleEntityEvent@Horse@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   -1832760750
     * @vftbl  173
     * @symbol ?canFreeze@Horse@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1086478422
     * @vftbl  183
     * @symbol ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   417685590
     * @vftbl  185
     * @symbol ?causeFallDamage@Horse@@MEAAXMMVActorDamageSource@@@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   -1400103537
     * @vftbl  186
     * @symbol ?handleFallDistanceOnServer@Horse@@MEAAXMM_N@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @hash   -721614475
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Horse@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   500470819
     * @vftbl  218
     * @symbol ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
     */
    virtual void openContainerComponent(class Player &);
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
     * @hash   2050873136
     * @vftbl  253
     * @symbol ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   42895445
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -317123997
     * @vftbl  271
     * @symbol ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1046072603
     * @vftbl  276
     * @symbol ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   2034804814
     * @vftbl  297
     * @symbol ?travel@Horse@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -1760160562
     * @vftbl  300
     * @symbol ?aiStep@Horse@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   512418006
     * @vftbl  322
     * @symbol ?getArmorValue@Horse@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -965298711
     * @vftbl  367
     * @symbol ?setType@Horse@@UEAAXH@Z
     */
    virtual void setType(int);
    /**
     * @hash   999331582
     * @vftbl  368
     * @symbol ?getType@Horse@@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @hash   -1369926851
     * @vftbl  369
     * @symbol ?setHorseEating@Horse@@UEAAX_N@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @hash   1062787054
     * @vftbl  370
     * @symbol ?getStandAnim@Horse@@UEBAMM@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @hash   1056805483
     * @vftbl  371
     * @symbol ?isAdult@Horse@@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @hash   -30973128
     * @vftbl  372
     * @symbol ?isHorseEating@Horse@@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @hash   -1508868542
     * @vftbl  373
     * @symbol ?isMouthOpen@Horse@@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @hash   -182668893
     * @vftbl  374
     * @symbol ?isTailMoving@Horse@@UEBA_NXZ
     */
    virtual bool isTailMoving() const;
    /**
     * @hash   -723600228
     * @vftbl  375
     * @symbol ?makeMad@Horse@@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @hash   -1879576682
     * @vftbl  376
     * @symbol ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
     */
    virtual bool tameToPlayer(class Player &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSE
    /**
     * @hash   -1863483371
     * @symbol ?useNewAi@Horse@@MEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   1378830553
     * @symbol ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Horse(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1745408379
     * @symbol ?postNormalTick@Horse@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   682242783
     * @symbol ?postTravel@Horse@@QEAAXPEAVActor@@_NW4HorsePostTravelType@@@Z
     */
    MCAPI void postTravel(class Actor *, bool, enum HorsePostTravelType);
    /**
     * @hash   -857689341
     * @symbol ?DONKEY_CHEST_COUNT@Horse@@2HB
     */
    MCAPI static int const DONKEY_CHEST_COUNT;
    /**
     * @symbol ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBURenderRotationComponent@@AEBUStandAnimationComponent@@M@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(struct RenderRotationComponent const &, struct StandAnimationComponent const &, float);
    /**
     * @hash   981837608
     * @symbol ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);

//private:
    /**
     * @hash   -1541147032
     * @symbol ?setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
     */
    MCAPI void setHorseFlag(enum HorseFlags, bool);
    /**
     * @hash   -954912122
     * @symbol ?setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
     */
    MCAPI bool setHorseType(enum ActorType &);

private:
    /**
     * @hash   -62654935
     * @symbol ?DATA_AGE@Horse@@0HB
     */
    MCAPI static int const DATA_AGE;

};