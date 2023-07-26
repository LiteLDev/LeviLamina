#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorAnnotationSystem {

public:
    // prevent constructor by default
    OpenDoorAnnotationSystem& operator=(OpenDoorAnnotationSystem const&) = delete;
    OpenDoorAnnotationSystem(OpenDoorAnnotationSystem const&)            = delete;
    OpenDoorAnnotationSystem()                                           = delete;

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
     * @symbol ?tick\@OpenDoorAnnotationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
