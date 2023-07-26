#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GetCollisionShapeActorProxy {

public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&) = delete;
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&)            = delete;
    GetCollisionShapeActorProxy()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getFeetAttachPosY\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFeetAttachPosY() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canDescendThroughBlock\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool canDescendThroughBlock() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getFallDistance\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFallDistance() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getEntityTypeId\@GetCollisionShapeActorProxy\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?isWearingLeatherBoots\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWearingLeatherBoots() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?hasLightWeightFamilyTag\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasLightWeightFamilyTag() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getAABB\@GetCollisionShapeActorProxy\@\@UEBAAEBVAABB\@\@XZ
     */
    virtual class AABB const& getAABB() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?isWorldBuilder\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?isRiding\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isRiding() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?hasPassenger\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasPassenger() const; // NOLINT
    /**
     * @symbol ??0GetCollisionShapeActorProxy\@\@QEAA\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const&); // NOLINT
};
