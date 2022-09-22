/**
 * @file  UpdateEntityAfterFallOnActorProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateEntityAfterFallOnActorProxy.
 *
 */
class UpdateEntityAfterFallOnActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEENTITYAFTERFALLONACTORPROXY
public:
    class UpdateEntityAfterFallOnActorProxy& operator=(class UpdateEntityAfterFallOnActorProxy const &) = delete;
    UpdateEntityAfterFallOnActorProxy(class UpdateEntityAfterFallOnActorProxy const &) = delete;
    UpdateEntityAfterFallOnActorProxy() = delete;
#endif

public:
    /**
     * @hash   190954799
     * @vftbl  0
     * @symbol ?getPosDeltaNonConst@UpdateEntityAfterFallOnActorProxy@@UEAAAEAVVec3@@XZ
     */
    virtual class Vec3 & getPosDeltaNonConst();
    /**
     * @hash   1260439949
     * @vftbl  1
     * @symbol ?isSneaking@UpdateEntityAfterFallOnActorProxy@@UEBA_NXZ
     */
    virtual bool isSneaking() const;
    /**
     * @hash   -1112465536
     * @vftbl  2
     * @symbol ?onBounceStarted@UpdateEntityAfterFallOnActorProxy@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   -371450324
     * @vftbl  3
     * @symbol ?getPosition@UpdateEntityAfterFallOnActorProxy@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getPosition() const;
    /**
     * @hash   397768910
     * @vftbl  4
     * @symbol ?getRegion@UpdateEntityAfterFallOnActorProxy@@UEBAAEBVIConstBlockSource@@XZ
     */
    virtual class IConstBlockSource const & getRegion() const;
    /**
     * @hash   -1850768170
     * @symbol ??0UpdateEntityAfterFallOnActorProxy@@QEAA@AEAUIActorMovementProxy@@@Z
     */
    MCAPI UpdateEntityAfterFallOnActorProxy(struct IActorMovementProxy &);

};