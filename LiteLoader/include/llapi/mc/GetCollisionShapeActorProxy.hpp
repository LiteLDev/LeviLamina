/**
 * @file  MC/GetCollisionShapeActorProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~GetCollisionShapeActorProxy();
    /**
     * @hash   857525614
     * @vftbl  1
     * @symbol ?getFeetAttachPosY@GetCollisionShapeActorProxy@@UEBAMXZ
     */
    virtual float getFeetAttachPosY() const;
    /**
     * @hash   -355459892
     * @vftbl  2
     * @symbol ?canDescendThroughBlock@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool canDescendThroughBlock() const;
    /**
     * @hash   1894048694
     * @vftbl  3
     * @symbol ?getFallDistance@GetCollisionShapeActorProxy@@UEBAMXZ
     */
    virtual float getFallDistance() const;
    /**
     * @hash   -1246112505
     * @vftbl  4
     * @symbol ?getEntityTypeId@GetCollisionShapeActorProxy@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityTypeId() const;
    /**
     * @hash   -1579925717
     * @vftbl  5
     * @symbol ?isWearingLeatherBoots@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isWearingLeatherBoots() const;
    /**
     * @hash   1444429996
     * @vftbl  6
     * @symbol ?hasLightWeightFamilyTag@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool hasLightWeightFamilyTag() const;
    /**
     * @hash   -42464667
     * @vftbl  7
     * @symbol ?getAABB@GetCollisionShapeActorProxy@@UEBAAEBVAABB@@XZ
     */
    virtual class AABB const & getAABB() const;
    /**
     * @hash   975968509
     * @vftbl  8
     * @symbol ?isWorldBuilder@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   576206825
     * @vftbl  9
     * @symbol ?isRiding@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    virtual bool isRiding() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETCOLLISIONSHAPEACTORPROXY
    /**
     * @hash   289408282
     * @symbol ?hasPassenger@GetCollisionShapeActorProxy@@UEBA_NXZ
     */
    MCVAPI bool hasPassenger() const;
#endif
    /**
     * @hash   2001481223
     * @symbol ??0GetCollisionShapeActorProxy@@QEAA@AEBUIActorMovementProxy@@@Z
     */
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const &);

};