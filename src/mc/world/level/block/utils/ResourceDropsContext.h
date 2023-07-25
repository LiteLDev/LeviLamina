#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

struct ResourceDropsContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEDROPSCONTEXT
public:
    ResourceDropsContext& operator=(ResourceDropsContext const&) = delete;
    ResourceDropsContext(ResourceDropsContext const&)            = delete;
    ResourceDropsContext()                                       = delete;
#endif

public:
    /**
     * @symbol ??0ResourceDropsContext\@\@QEAA\@MAEBVItemStack\@\@AEAVILevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ResourceDropsContext(float, class ItemStack const&, class ILevel&, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ??0ResourceDropsContext\@\@QEAA\@MAEBVItemStack\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI ResourceDropsContext(float, class ItemStack const&, class BlockSource const&);
    /**
     * @symbol ?getRandom\@ResourceDropsContext\@\@QEBAAEAVRandom\@\@XZ
     */
    MCAPI class Random& getRandom() const;
};
