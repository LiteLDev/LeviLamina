#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportSystem {

public:
    // prevent constructor by default
    TeleportSystem& operator=(TeleportSystem const&) = delete;
    TeleportSystem(TeleportSystem const&)            = delete;
    TeleportSystem()                                 = delete;

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
     * @symbol ?tick\@TeleportSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
