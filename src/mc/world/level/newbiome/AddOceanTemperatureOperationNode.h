#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

class AddOceanTemperatureOperationNode {
public:
    // prevent constructor by default
    AddOceanTemperatureOperationNode& operator=(AddOceanTemperatureOperationNode const&);
    AddOceanTemperatureOperationNode(AddOceanTemperatureOperationNode const&);
    AddOceanTemperatureOperationNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddOceanTemperatureOperationNode() = default;

    // vIndex: 1
    virtual void init(int64 seed);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char>& operationNodeData,
        class Pos2d const&                                                         origin,
        class Pos2d const&                                                         size
    ) const;

    // NOLINTEND
};
