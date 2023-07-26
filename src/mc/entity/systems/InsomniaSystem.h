#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaSystem {

public:
    // prevent constructor by default
    InsomniaSystem& operator=(InsomniaSystem const&) = delete;
    InsomniaSystem(InsomniaSystem const&)            = delete;
    InsomniaSystem()                                 = delete;

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
     * @symbol ?tick\@InsomniaSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
