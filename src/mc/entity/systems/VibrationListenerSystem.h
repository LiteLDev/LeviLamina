#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERSYSTEM
public:
    VibrationListenerSystem& operator=(VibrationListenerSystem const&) = delete;
    VibrationListenerSystem(VibrationListenerSystem const&)            = delete;
    VibrationListenerSystem()                                          = delete;
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
     * @symbol ?tick\@VibrationListenerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
