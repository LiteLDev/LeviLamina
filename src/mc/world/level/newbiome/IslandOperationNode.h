#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

class IslandOperationNode {
public:
    // prevent constructor by default
    IslandOperationNode& operator=(IslandOperationNode const&);
    IslandOperationNode(IslandOperationNode const&);
    IslandOperationNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IslandOperationNode() = default;

    // vIndex: 1
    virtual void init(int64 seed);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<::OperationNodeValues::Terrain, char>& operationNodeData,
        class Pos2d const&                                                             origin,
        class Pos2d const&                                                             size
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _fillArea$(
        class OperationNodeDetails::WorkingData<::OperationNodeValues::Terrain, char>& operationNodeData,
        class Pos2d const&                                                             origin,
        class Pos2d const&                                                             size
    ) const;

    MCAPI void init$(int64 seed);

    // NOLINTEND
};
