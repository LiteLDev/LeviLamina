#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

// auto generated forward declare list
// clang-format off
enum class BiomeTemperatureCategory;
// clang-format on

namespace OperationNodeFilters {

struct AddOceanEdge {

public:
    // prevent constructor by default
    AddOceanEdge& operator=(AddOceanEdge const&) = delete;
    AddOceanEdge(AddOceanEdge const&)            = delete;
    AddOceanEdge()                               = delete;

public:
    /**
     * @symbol
     * ??RAddOceanEdge\@OperationNodeFilters\@\@QEBA?AW4BiomeTemperatureCategory\@\@AEAU?$NeighborhoodReader\@W4BiomeTemperatureCategory\@\@$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI enum class BiomeTemperatureCategory
    operator()(struct OperationNodeDetails::NeighborhoodReader<enum class BiomeTemperatureCategory, 1, 1>&)
        const; // NOLINT
};

}; // namespace OperationNodeFilters
