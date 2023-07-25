#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"

class Horse : public ::Animal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSE
public:
    Horse& operator=(Horse const&) = delete;
    Horse(Horse const&)            = delete;
    Horse()                        = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Horse\@\@EEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 32
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
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
     * @symbol ?getShadowRadius\@Horse\@\@UEBAMXZ
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
     * @vftbl 79
     * @symbol ?isImmobile\@Horse\@\@MEBA_NXZ
     */
    virtual bool isImmobile() const;
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
     * @vftbl 109
     * @symbol ?onFailedTame\@Horse\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @vftbl 113
     * @symbol ?setStanding\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @vftbl 126
     * @symbol ?feed\@Horse\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Horse\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Horse\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Horse\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Horse\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 169
     * @symbol ?handleFallDistanceOnServer\@Horse\@\@MEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Horse\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 199
     * @symbol ?openContainerComponent\@Horse\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player&);
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
     * @vftbl 224
     * @symbol ?die\@Horse\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Horse\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Horse\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@Horse\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 285
     * @symbol ?getArmorValue\@Horse\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @vftbl 325
     * @symbol ?setType\@Horse\@\@UEAAXH\@Z
     */
    virtual void setType(int);
    /**
     * @vftbl 326
     * @symbol ?getType\@Horse\@\@UEBAHXZ
     */
    virtual int getType() const;
    /**
     * @vftbl 327
     * @symbol ?setHorseEating\@Horse\@\@UEAAX_N\@Z
     */
    virtual void setHorseEating(bool);
    /**
     * @vftbl 328
     * @symbol ?getStandAnim\@Horse\@\@UEBAMM\@Z
     */
    virtual float getStandAnim(float) const;
    /**
     * @vftbl 329
     * @symbol ?isAdult\@Horse\@\@UEBA_NXZ
     */
    virtual bool isAdult() const;
    /**
     * @vftbl 330
     * @symbol ?isHorseEating\@Horse\@\@UEBA_NXZ
     */
    virtual bool isHorseEating() const;
    /**
     * @vftbl 331
     * @symbol ?isMouthOpen\@Horse\@\@UEBA_NXZ
     */
    virtual bool isMouthOpen() const;
    /**
     * @vftbl 332
     * @symbol ?makeMad\@Horse\@\@UEAAXXZ
     */
    virtual void makeMad();
    /**
     * @vftbl 333
     * @symbol ?tameToPlayer\@Horse\@\@UEAA_NAEAVPlayer\@\@_N\@Z
     */
    virtual bool tameToPlayer(class Player&, bool);
    /**
     * @symbol ??0Horse\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Horse(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?getPostTravelType\@Horse\@\@QEAA?AW4HorsePostTravelType\@\@PEAVActor\@\@\@Z
     */
    MCAPI enum class HorsePostTravelType getPostTravelType(class Actor*);
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
    MCAPI void postTravel(class Actor*, bool, enum class HorsePostTravelType);
    /**
     * @symbol
     * ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@M\@Z
     */
    MCAPI static class Vec3
    getInterpolatedRidingOffset(struct RenderRotationComponent const&, struct StandAnimationComponent const&, float);
    /**
     * @symbol ?getInterpolatedRidingOffset\@Horse\@\@SA?AVVec3\@\@AEBVVec2\@\@MMM\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const&, float, float, float);
    /**
     * @symbol
     * ?getNewPassengerPos\@Horse\@\@SA?AVVec3\@\@AEBURenderPositionComponent\@\@AEBURenderRotationComponent\@\@AEBUStandAnimationComponent\@\@MM\@Z
     */
    MCAPI static class Vec3 getNewPassengerPos(
        struct RenderPositionComponent const&,
        struct RenderRotationComponent const&,
        struct StandAnimationComponent const&,
        float,
        float
    );
    /**
     * @symbol ?setHorseFlag\@Horse\@\@SAXVSynchedActorDataWriter\@\@W4HorseFlags\@\@_N\@Z
     */
    MCAPI static void setHorseFlag(class SynchedActorDataWriter, enum class HorseFlags, bool);

    // private:
    /**
     * @symbol ?_setHorseFlag\@Horse\@\@AEAAXW4HorseFlags\@\@_N\@Z
     */
    MCAPI void _setHorseFlag(enum class HorseFlags, bool);
    /**
     * @symbol ?_setHorseType\@Horse\@\@AEAA_NAEAW4ActorType\@\@\@Z
     */
    MCAPI bool _setHorseType(enum class ActorType&);

private:
};
