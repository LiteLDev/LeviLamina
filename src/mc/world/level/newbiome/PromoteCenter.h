#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

class PromoteCenter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_PROMOTECENTER
public:
    PromoteCenter& operator=(PromoteCenter const&) = delete;
    PromoteCenter(PromoteCenter const&)            = delete;
    PromoteCenter()                                = delete;
#endif

public:
    /**
     * @symbol ??0PromoteCenter\@OperationNodeFilters\@\@QEAA\@AEAVBiome\@\@0\@Z
     */
    MCAPI PromoteCenter(class Biome&, class Biome&);
    /**
     * @symbol
     * ??RPromoteCenter\@OperationNodeFilters\@\@QEBAPEAVBiome\@\@AEAU?$NeighborhoodReader\@PEAVBiome\@\@$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI class Biome* operator()(struct OperationNodeDetails::NeighborhoodReader<class Biome*, 1, 1>&) const;
};

}; // namespace OperationNodeFilters
