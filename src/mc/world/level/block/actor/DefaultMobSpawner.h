#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

class DefaultMobSpawner : public ::BaseMobSpawner {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTMOBSPAWNER
public:
    DefaultMobSpawner& operator=(DefaultMobSpawner const&) = delete;
    DefaultMobSpawner(DefaultMobSpawner const&)            = delete;
    DefaultMobSpawner()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?getPos\@DefaultMobSpawner\@\@UEAAAEBVBlockPos\@\@XZ
     */
    virtual class BlockPos const& getPos();
};
