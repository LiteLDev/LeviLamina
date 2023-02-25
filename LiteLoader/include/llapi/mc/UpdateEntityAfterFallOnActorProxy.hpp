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
     * @vftbl  1
     * @symbol  ?getPosDeltaNonConst\@UpdateEntityAfterFallOnActorProxy\@\@UEAAAEAVVec3\@\@XZ
     */
    virtual class Vec3 & getPosDeltaNonConst();
    /**
     * @vftbl  2
     * @symbol  ?isSneaking\@UpdateEntityAfterFallOnActorProxy\@\@UEBA_NXZ
     */
    virtual bool isSneaking() const;
    /**
     * @vftbl  3
     * @symbol  ?onBounceStarted\@UpdateEntityAfterFallOnActorProxy\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
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
     * @symbol  ??0UpdateEntityAfterFallOnActorProxy\@\@QEAA\@AEAUIActorMovementProxy\@\@\@Z
     */
    MCAPI UpdateEntityAfterFallOnActorProxy(struct IActorMovementProxy &);

};