#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IActorMovementProxy {

public:
    // prevent constructor by default
    IActorMovementProxy& operator=(IActorMovementProxy const&) = delete;
    IActorMovementProxy(IActorMovementProxy const&)            = delete;
    IActorMovementProxy()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IACTORMOVEMENTPROXY
    /**
     * @symbol ?isFlying\@IActorMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const; // NOLINT
#endif
    /**
     * @symbol ?getRegionAsConstBlockSource\@IActorMovementProxy\@\@QEBAAEBVIConstBlockSource\@\@XZ
     */
    MCAPI class IConstBlockSource const& getRegionAsConstBlockSource() const; // NOLINT
};
