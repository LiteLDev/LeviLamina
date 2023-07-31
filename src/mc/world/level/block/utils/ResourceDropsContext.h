#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

struct ResourceDropsContext {

public:
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&) = delete;
    ResourceDropsContext(ResourceDropsContext const&)            = delete;
    ResourceDropsContext()                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
