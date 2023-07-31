#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GetCollisionShapeActorProxy {

public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&) = delete;
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&)            = delete;
    GetCollisionShapeActorProxy()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getFeetAttachPosY\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFeetAttachPosY() const;
    /**
     * @vftbl 2
     * @symbol ?canDescendThroughBlock\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool canDescendThroughBlock() const;
    /**
     * @vftbl 3
     * @symbol ?getFallDistance\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFallDistance() const;
    /**
     * @vftbl 4
     * @symbol ?getEntityTypeId\@GetCollisionShapeActorProxy\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @vftbl 5
     * @symbol ?isWearingLeatherBoots\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWearingLeatherBoots() const;
    /**
     * @vftbl 6
     * @symbol ?hasLightWeightFamilyTag\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasLightWeightFamilyTag() const;
    /**
     * @vftbl 7
     * @symbol ?getAABB\@GetCollisionShapeActorProxy\@\@UEBAAEBVAABB\@\@XZ
     */
    virtual class AABB const& getAABB() const;
    /**
     * @vftbl 8
     * @symbol ?isWorldBuilder\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @vftbl 9
     * @symbol ?isRiding\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isRiding() const;
    /**
     * @vftbl 10
     * @symbol ?hasPassenger\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasPassenger() const;
    /**
     * @symbol ??0GetCollisionShapeActorProxy\@\@QEAA\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const&);
    // NOLINTEND
};
