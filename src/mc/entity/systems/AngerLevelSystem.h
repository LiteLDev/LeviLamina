#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AngerLevelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGERLEVELSYSTEM
public:
    AngerLevelSystem& operator=(AngerLevelSystem const&) = delete;
    AngerLevelSystem(AngerLevelSystem const&)            = delete;
    AngerLevelSystem()                                   = delete;
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
     * @symbol ?tick\@AngerLevelSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
