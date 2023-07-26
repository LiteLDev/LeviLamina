/**
 * @file  IActorMovementProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure IActorMovementProxy.
 *
 */
struct IActorMovementProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IACTORMOVEMENTPROXY
public:
    struct IActorMovementProxy& operator=(struct IActorMovementProxy const &) = delete;
    IActorMovementProxy(struct IActorMovementProxy const &) = delete;
    IActorMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IACTORMOVEMENTPROXY
    /**
     * @symbol  ?isFlying\@IActorMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @symbol  ?setIsFlying\@IActorMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsFlying(bool);
#endif
    /**
     * @symbol  ?getRegionAsConstBlockSource\@IActorMovementProxy\@\@QEBAAEBVIConstBlockSource\@\@XZ
     */
    MCAPI class IConstBlockSource const & getRegionAsConstBlockSource() const;

};