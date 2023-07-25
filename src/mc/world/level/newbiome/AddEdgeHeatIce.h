#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { struct PreBiome; }
// clang-format on

namespace OperationNodeFilters {

struct AddEdgeHeatIce {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_ADDEDGEHEATICE
public:
    AddEdgeHeatIce& operator=(AddEdgeHeatIce const&) = delete;
    AddEdgeHeatIce(AddEdgeHeatIce const&)            = delete;
    AddEdgeHeatIce()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ??RAddEdgeHeatIce\@OperationNodeFilters\@\@QEBA?AUPreBiome\@OperationNodeValues\@\@AEAU?$NeighborhoodReader\@UPreBiome\@OperationNodeValues\@\@$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI struct OperationNodeValues::PreBiome
    operator()(struct OperationNodeDetails::NeighborhoodReader<struct OperationNodeValues::PreBiome, 1, 1>&) const;
};

}; // namespace OperationNodeFilters
