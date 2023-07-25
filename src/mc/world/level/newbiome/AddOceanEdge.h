#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

struct AddOceanEdge {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_ADDOCEANEDGE
public:
    AddOceanEdge& operator=(AddOceanEdge const&) = delete;
    AddOceanEdge(AddOceanEdge const&)            = delete;
    AddOceanEdge()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??RAddOceanEdge\@OperationNodeFilters\@\@QEBA?AW4BiomeTemperatureCategory\@\@AEAU?$NeighborhoodReader\@W4BiomeTemperatureCategory\@\@$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI enum class BiomeTemperatureCategory
    operator()(struct OperationNodeDetails::NeighborhoodReader<enum class BiomeTemperatureCategory, 1, 1>&) const;
};

}; // namespace OperationNodeFilters
