/**
 * @file  GetCollisionShapeActorProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GetCollisionShapeActorProxy.
 *
 */
class GetCollisionShapeActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCOLLISIONSHAPEACTORPROXY
public:
    class GetCollisionShapeActorProxy& operator=(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy(class GetCollisionShapeActorProxy const &) = delete;
    GetCollisionShapeActorProxy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetCollisionShapeActorProxy();
    /**
     * @hash   210026878
     * @vftbl  1
     * @symbol  ?getFeetAttachPosY\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFeetAttachPosY() const;
    /**
     * @hash   -1003004756
     * @vftbl  2
     * @symbol  ?canDescendThroughBlock\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool canDescendThroughBlock() const;
    /**
     * @hash   1246534582
     * @vftbl  3
     * @symbol  ?getFallDistance\@GetCollisionShapeActorProxy\@\@UEBAMXZ
     */
    virtual float getFallDistance() const;
    /**
     * @hash   -1893641993
     * @vftbl  4
     * @symbol  ?getEntityTypeId\@GetCollisionShapeActorProxy\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @hash   2067588971
     * @vftbl  5
     * @symbol  ?isWearingLeatherBoots\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWearingLeatherBoots() const;
    /**
     * @hash   796931260
     * @vftbl  6
     * @symbol  ?hasLightWeightFamilyTag\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasLightWeightFamilyTag() const;
    /**
     * @hash   -690009531
     * @vftbl  7
     * @symbol  ?getAABB\@GetCollisionShapeActorProxy\@\@UEBAAEBVAABB\@\@XZ
     */
    virtual class AABB const & getAABB() const;
    /**
     * @hash   328531277
     * @vftbl  8
     * @symbol  ?isWorldBuilder\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   -71261159
     * @vftbl  9
     * @symbol  ?isRiding\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool isRiding() const;
    /**
     * @hash   -358075078
     * @vftbl  10
     * @symbol  ?hasPassenger\@GetCollisionShapeActorProxy\@\@UEBA_NXZ
     */
    virtual bool hasPassenger() const;
    /**
     * @hash   1353936359
     * @symbol  ??0GetCollisionShapeActorProxy\@\@QEAA\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const &);

};