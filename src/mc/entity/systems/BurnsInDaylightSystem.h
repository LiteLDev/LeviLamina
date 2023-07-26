#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BurnsInDaylightSystem {

public:
    // prevent constructor by default
    BurnsInDaylightSystem& operator=(BurnsInDaylightSystem const&) = delete;
    BurnsInDaylightSystem(BurnsInDaylightSystem const&)            = delete;
    BurnsInDaylightSystem()                                        = delete;

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
     * @symbol ?tick\@BurnsInDaylightSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
