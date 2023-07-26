#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerSystem {

public:
    // prevent constructor by default
    VibrationListenerSystem& operator=(VibrationListenerSystem const&) = delete;
    VibrationListenerSystem(VibrationListenerSystem const&)            = delete;
    VibrationListenerSystem()                                          = delete;

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
     * @symbol ?tick\@VibrationListenerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
