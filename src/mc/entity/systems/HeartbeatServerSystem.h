#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerSystem {

public:
    // prevent constructor by default
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&) = delete;
    HeartbeatServerSystem(HeartbeatServerSystem const&)            = delete;
    HeartbeatServerSystem()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@HeartbeatServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
