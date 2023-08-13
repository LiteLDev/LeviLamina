#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HeartbeatServerSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&) = delete;
    HeartbeatServerSystem(HeartbeatServerSystem const&)            = delete;
    HeartbeatServerSystem()                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
