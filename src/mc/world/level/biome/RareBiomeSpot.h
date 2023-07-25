#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

class RareBiomeSpot {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_RAREBIOMESPOT
public:
    RareBiomeSpot& operator=(RareBiomeSpot const&) = delete;
    RareBiomeSpot(RareBiomeSpot const&)            = delete;
    RareBiomeSpot()                                = delete;
#endif

public:
    /**
     * @symbol ??0RareBiomeSpot\@OperationNodeFilters\@\@QEAA\@IAEAVBiome\@\@0\@Z
     */
    MCAPI RareBiomeSpot(unsigned int, class Biome&, class Biome&);
};

}; // namespace OperationNodeFilters
