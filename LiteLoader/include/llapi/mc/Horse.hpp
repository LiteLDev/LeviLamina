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
     * @vftbl 35
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 51
     * @symbol ?positionPassenger\@Horse\@\@UEAAXAEAVActor\@\@M\@Z
     */
    virtual void positionPassenger(class Actor &, float);
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 78
     * @symbol ?getShadowRadius\@Horse\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 90
     * @symbol ?isImmobile\@Horse\@\@MEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 120
     * @symbol ?onFailedTame\@Horse\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @vftbl 124
     * @symbol ?setStanding\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @vftbl 138
     * @symbol ?feed\@Horse\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @vftbl 139
     * @symbol ?handleEntityEvent\@Horse\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 169
     * @symbol ?canFreeze\@Horse\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 178
     * @symbol ?getControllingPlayer\@Horse\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 180
     * @symbol ?causeFallDamage\@Horse\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 181
     * @symbol ?handleFallDistanceOnServer\@Horse\@\@MEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 185
     * @symbol ?onSynchedDataUpdate\@Horse\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 212
     * @symbol ?openContainerComponent\@Horse\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player &);
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 237
     * @symbol ?die\@Horse\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl 250
     * @symbol ?updateEntitySpecificMolangVariables\@Horse\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@Horse\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 258
     * @symbol ?_playStepSound\@Horse\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 278
     * @symbol ?travel\@Horse\@\@UEAAXMMM_N\@Z
     */
    virtual void travel(float, float, float, bool);
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 302
     * @symbol ?getArmorValue\@Horse\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 345
     * @symbol ?setType\@Horse\@\@UEAAXH\@Z
     */
    virtual void setType(int);
    /**
     * @vftbl 346
     * @symbol ?getType\@Horse\@\@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @vftbl 347
     * @symbol ?setHorseEating\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @vftbl 348
     * @symbol ?getStandAnim\@Horse\@\@UEBAMM\@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @vftbl 349
     * @symbol ?isAdult\@Horse\@\@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @vftbl 350
     * @symbol ?isHorseEating\@Horse\@\@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @vftbl 351
     * @symbol ?isMouthOpen\@Horse\@\@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @vftbl 352
     * @symbol ?makeMad\@Horse\@\@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @vftbl 353
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
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(struct RenderRotationComponent const &, struct StandAnimationComponent const &, float);
    /**
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBVVec2\@\@MMM\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);
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
