#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

class DefaultMobSpawner : public ::BaseMobSpawner {

public:
    // prevent constructor by default
    DefaultMobSpawner& operator=(DefaultMobSpawner const&) = delete;
    DefaultMobSpawner(DefaultMobSpawner const&)            = delete;
    DefaultMobSpawner()                                    = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
