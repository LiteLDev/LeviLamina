#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEARTBEATSERVERSYSTEM
public:
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&) = delete;
    HeartbeatServerSystem(HeartbeatServerSystem const&)            = delete;
    HeartbeatServerSystem()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@HeartbeatServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
