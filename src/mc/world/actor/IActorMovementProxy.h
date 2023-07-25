#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IActorMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IACTORMOVEMENTPROXY
public:
    IActorMovementProxy& operator=(IActorMovementProxy const&) = delete;
    IActorMovementProxy(IActorMovementProxy const&)            = delete;
    IActorMovementProxy()                                      = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IACTORMOVEMENTPROXY
    /**
     * @symbol ?isFlying\@IActorMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
#endif
    /**
     * @symbol ?getRegionAsConstBlockSource\@IActorMovementProxy\@\@QEBAAEBVIConstBlockSource\@\@XZ
     */
    MCAPI class IConstBlockSource const& getRegionAsConstBlockSource() const;
};
