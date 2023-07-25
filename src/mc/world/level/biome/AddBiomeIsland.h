#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

class AddBiomeIsland {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_ADDBIOMEISLAND
public:
    AddBiomeIsland& operator=(AddBiomeIsland const&) = delete;
    AddBiomeIsland(AddBiomeIsland const&)            = delete;
    AddBiomeIsland()                                 = delete;
#endif

public:
    /**
     * @symbol ??0AddBiomeIsland\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@1\@Z
     */
    MCAPI AddBiomeIsland(class BiomeRegistry const&, class Biome&, class Biome&);
};

}; // namespace OperationNodeFilters
