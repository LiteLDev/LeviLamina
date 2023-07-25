#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

struct AddMushroomIsland {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_ADDMUSHROOMISLAND
public:
    AddMushroomIsland& operator=(AddMushroomIsland const&) = delete;
    AddMushroomIsland(AddMushroomIsland const&)            = delete;
    AddMushroomIsland()                                    = delete;
#endif

public:
    /**
     * @symbol ??0AddMushroomIsland\@OperationNodeFilters\@\@QEAA\@AEAVBiome\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI AddMushroomIsland(class Biome&, class BiomeRegistry const&);
};

}; // namespace OperationNodeFilters
