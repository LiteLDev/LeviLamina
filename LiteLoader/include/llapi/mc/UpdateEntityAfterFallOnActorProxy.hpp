/**
 * @file  UpdateEntityAfterFallOnActorProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateEntityAfterFallOnActorProxy();
    /**
     * @hash   -849831265
     * @vftbl  1
     * @symbol  ?getPosDeltaNonConst\@UpdateEntityAfterFallOnActorProxy\@\@UEAAAEAVVec3\@\@XZ
     */
    virtual class Vec3 & getPosDeltaNonConst();
    /**
     * @hash   219761517
     * @vftbl  2
     * @symbol  ?isSneaking\@UpdateEntityAfterFallOnActorProxy\@\@UEBA_NXZ
     */
    virtual bool isSneaking() const;
    /**
     * @hash   2141838704
     * @vftbl  3
     * @symbol  ?onBounceStarted\@UpdateEntityAfterFallOnActorProxy\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   -1412221012
     * @vftbl  4
     * @symbol  ?getPosition\@UpdateEntityAfterFallOnActorProxy\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getPosition() const;
    /**
     * @vftbl  5
     * @symbol  ?getDimensionBlockSource\@UpdateEntityAfterFallOnActorProxy\@\@UEBAAEBVIConstBlockSource\@\@XZ
     */
    virtual class IConstBlockSource const & getDimensionBlockSource() const;
    /**
     * @hash   1403413062
     * @symbol  ??0UpdateEntityAfterFallOnActorProxy\@\@QEAA\@AEAUIActorMovementProxy\@\@\@Z
     */
    MCAPI UpdateEntityAfterFallOnActorProxy(struct IActorMovementProxy &);

};