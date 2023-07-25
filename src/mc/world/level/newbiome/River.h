#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

struct River {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_RIVER
public:
    River& operator=(River const&) = delete;
    River(River const&)            = delete;
    River()                        = delete;
#endif

public:
    /**
     * @symbol ??RRiver\@OperationNodeFilters\@\@QEBA_NAEAU?$NeighborhoodReader\@H$00$00\@OperationNodeDetails\@\@\@Z
     */
    MCAPI bool operator()(struct OperationNodeDetails::NeighborhoodReader<int, 1, 1>&) const;
};

}; // namespace OperationNodeFilters
