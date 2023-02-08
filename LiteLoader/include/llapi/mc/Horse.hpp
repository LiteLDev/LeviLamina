/**
 * @file  Horse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -689245822
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Horse\@\@EEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Horse();
    /**
     * @hash   -976340367
     * @vftbl  36
     * @symbol  ?getInterpolatedRidingOffset\@Horse\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   984188270
     * @vftbl  49
     * @symbol  ?normalTick\@Horse\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -331209370
     * @vftbl  52
     * @symbol  ?positionPassenger\@Horse\@\@UEAAXAEAVActor\@\@M\@Z
     */
    virtual void positionPassenger(class Actor &, float);
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
     * @hash   -206365687
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Horse\@\@UEBAMXZ
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
     * @hash   -806330604
     * @vftbl  93
     * @symbol  ?isImmobile\@Horse\@\@MEBA_NXZ
     */
    virtual bool isImmobile() const;
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
     * @hash   543876011
     * @vftbl  123
     * @symbol  ?onFailedTame\@Horse\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @hash   89154036
     * @vftbl  127
     * @symbol  ?setStanding\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @hash   -2081634841
     * @vftbl  141
     * @symbol  ?feed\@Horse\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @hash   -26595223
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Horse\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   1807973122
     * @vftbl  172
     * @symbol  ?canFreeze\@Horse\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   -1740527334
     * @vftbl  181
     * @symbol  ?getControllingPlayer\@Horse\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   -236532458
     * @vftbl  183
     * @symbol  ?causeFallDamage\@Horse\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @hash   -2053983313
     * @vftbl  184
     * @symbol  ?handleFallDistanceOnServer\@Horse\@\@MEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @hash   -1397727947
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@Horse\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -152855421
     * @vftbl  215
     * @symbol  ?openContainerComponent\@Horse\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player &);
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
     * @hash   1396685840
     * @vftbl  246
     * @symbol  ?die\@Horse\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   -610046395
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Horse\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -971465053
     * @vftbl  263
     * @symbol  ?_hurt\@Horse\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1700367531
     * @vftbl  268
     * @symbol  ?_playStepSound\@Horse\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   1381847598
     * @vftbl  289
     * @symbol  ?travel\@Horse\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   1881065342
     * @vftbl  291
     * @symbol  ?aiStep\@Horse\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -141646282
     * @vftbl  313
     * @symbol  ?getArmorValue\@Horse\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   -1618271303
     * @vftbl  356
     * @symbol  ?setType\@Horse\@\@UEAAXH\@Z
     */
    virtual void setType(int);
    /**
     * @hash   345451806
     * @vftbl  357
     * @symbol  ?getType\@Horse\@\@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @hash   -2022853315
     * @vftbl  358
     * @symbol  ?setHorseEating\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @hash   408907278
     * @vftbl  359
     * @symbol  ?getStandAnim\@Horse\@\@UEBAMM\@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @hash   402971835
     * @vftbl  360
     * @symbol  ?isAdult\@Horse\@\@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @hash   -684806776
     * @vftbl  361
     * @symbol  ?isHorseEating\@Horse\@\@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @hash   2132311234
     * @vftbl  362
     * @symbol  ?isMouthOpen\@Horse\@\@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @hash   -836456413
     * @vftbl  363
     * @symbol  ?isTailMoving\@Horse\@\@UEBA_NXZ
     */
    virtual bool isTailMoving() const;
    /**
     * @hash   -1377387748
     * @vftbl  364
     * @symbol  ?makeMad\@Horse\@\@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @hash   1762433398
     * @vftbl  365
     * @symbol  ?tameToPlayer\@Horse\@\@UEAA_NAEAVPlayer\@\@_N\@Z
     */
    virtual bool tameToPlayer(class Player &, bool);
    /**
     * @hash   724443369
     * @symbol  ??0Horse\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Horse(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?getPostTravelType\@Horse\@\@QEAA?AW4HorsePostTravelType\@\@PEAVActor\@\@\@Z
     */
    MCAPI enum class HorsePostTravelType getPostTravelType(class Actor *);
    /**
     * @hash   -511869813
     * @symbol  ?postAiStep\@Horse\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @hash   1092528043
     * @symbol  ?postNormalTick\@Horse\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   29239439
     * @symbol  ?postTravel\@Horse\@\@QEAAXPEAVActor\@\@_NW4HorsePostTravelType\@\@\@Z
     */
    MCAPI void postTravel(class Actor *, bool, enum class HorsePostTravelType);
    /**
     * @hash   518820789
     * @symbol  ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(struct RenderRotationComponent const &, struct StandAnimationComponent const &, float);
    /**
     * @hash   327834824
     * @symbol  ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBVVec2\@\@MMM\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);
    /**
     * @hash   1423839867
     * @symbol  ?getNewPassengerPos\@Horse\@\@SA?AVVec3\@\@AEBURenderPositionComponent\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@MM\@Z
     */
    MCAPI static class Vec3 getNewPassengerPos(struct RenderPositionComponent const &, struct RenderRotationComponent const &, struct StandAnimationComponent const &, float, float);
    /**
     * @hash   83808230
     * @symbol  ?setHorseFlag\@Horse\@\@SAXVSynchedActorDataWriter\@\@W4HorseFlags\@\@_N\@Z
     */
    MCAPI static void setHorseFlag(class SynchedActorDataWriter, enum class HorseFlags, bool);

//private:
    /**
     * @hash   850205527
     * @symbol  ?_setHorseFlag\@Horse\@\@AEAAXW4HorseFlags\@\@_N\@Z
     */
    MCAPI void _setHorseFlag(enum class HorseFlags, bool);
    /**
     * @hash   -1569949961
     * @symbol  ?_setHorseType\@Horse\@\@AEAA_NAEAW4ActorType\@\@\@Z
     */
    MCAPI bool _setHorseType(enum class ActorType &);

private:

};