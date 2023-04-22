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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Horse\@\@EEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 36
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 52
     * @symbol ?positionPassenger\@Horse\@\@UEAAXAEAVActor\@\@M\@Z
     */
    virtual void positionPassenger(class Actor &, float);
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
     * @symbol ?getShadowRadius\@Horse\@\@UEBAMXZ
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
     * @vftbl 92
     * @symbol ?isImmobile\@Horse\@\@MEBA_NXZ
     */
    virtual bool isImmobile() const;
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
     * @vftbl 122
     * @symbol ?onFailedTame\@Horse\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @vftbl 126
     * @symbol ?setStanding\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @vftbl 140
     * @symbol ?feed\@Horse\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@Horse\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 171
     * @symbol ?canFreeze\@Horse\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 180
     * @symbol ?getControllingPlayer\@Horse\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 182
     * @symbol ?causeFallDamage\@Horse\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 183
     * @symbol ?handleFallDistanceOnServer\@Horse\@\@MEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 187
     * @symbol ?onSynchedDataUpdate\@Horse\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 214
     * @symbol ?openContainerComponent\@Horse\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player &);
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
     * @vftbl 245
     * @symbol ?die\@Horse\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 258
     * @symbol ?updateEntitySpecificMolangVariables\@Horse\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@Horse\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 266
     * @symbol ?_playStepSound\@Horse\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 286
     * @symbol ?travel\@Horse\@\@UEAAXMMM_N\@Z
     */
    virtual void travel(float, float, float, bool);
    /**
     * @vftbl 288
     * @symbol ?aiStep\@Horse\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 310
     * @symbol ?getArmorValue\@Horse\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl 353
     * @symbol ?setType\@Horse\@\@UEAAXH\@Z
     */
    virtual void setType(int);
    /**
     * @vftbl 354
     * @symbol ?getType\@Horse\@\@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @vftbl 355
     * @symbol ?setHorseEating\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @vftbl 356
     * @symbol ?getStandAnim\@Horse\@\@UEBAMM\@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @vftbl 357
     * @symbol ?isAdult\@Horse\@\@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @vftbl 358
     * @symbol ?isHorseEating\@Horse\@\@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @vftbl 359
     * @symbol ?isMouthOpen\@Horse\@\@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @vftbl 360
     * @symbol ?isTailMoving\@Horse\@\@UEBA_NXZ
     */
    virtual bool isTailMoving() const;
    /**
     * @vftbl 361
     * @symbol ?makeMad\@Horse\@\@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @vftbl 362
     * @symbol ?tameToPlayer\@Horse\@\@UEAA_NAEAVPlayer\@\@_N\@Z
     */
    virtual bool tameToPlayer(class Player &, bool);
    /**
     * @symbol ??0Horse\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Horse(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getPostTravelType\@Horse\@\@QEAA?AW4HorsePostTravelType\@\@PEAVActor\@\@\@Z
     */
    MCAPI enum class HorsePostTravelType getPostTravelType(class Actor *);
    /**
     * @symbol ?postAiStep\@Horse\@\@QEAAXXZ
     */
    MCAPI void postAiStep();
    /**
     * @symbol ?postNormalTick\@Horse\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?postTravel\@Horse\@\@QEAAXPEAVActor\@\@_NW4HorsePostTravelType\@\@\@Z
     */
    MCAPI void postTravel(class Actor *, bool, enum class HorsePostTravelType);
    /**
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBVVec2\@\@MMM\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);
    /**
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(struct RenderRotationComponent const &, struct StandAnimationComponent const &, float);
    /**
     * @symbol ?getNewPassengerPos\@Horse\@\@SA?AVVec3\@\@AEBURenderPositionComponent\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@MM\@Z
     */
    MCAPI static class Vec3 getNewPassengerPos(struct RenderPositionComponent const &, struct RenderRotationComponent const &, struct StandAnimationComponent const &, float, float);
    /**
     * @symbol ?setHorseFlag\@Horse\@\@SAXVSynchedActorDataWriter\@\@W4HorseFlags\@\@_N\@Z
     */
    MCAPI static void setHorseFlag(class SynchedActorDataWriter, enum class HorseFlags, bool);

//private:
    /**
     * @symbol ?_setHorseFlag\@Horse\@\@AEAAXW4HorseFlags\@\@_N\@Z
     */
    MCAPI void _setHorseFlag(enum class HorseFlags, bool);
    /**
     * @symbol ?_setHorseType\@Horse\@\@AEAA_NAEAW4ActorType\@\@\@Z
     */
    MCAPI bool _setHorseType(enum class ActorType &);

private:

};
