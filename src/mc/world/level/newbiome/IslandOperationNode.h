#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/Terrain.h"
#include "mc/world/level/newbiome/WorkingData.h"

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
        class OperationNodeDetails::WorkingData<::OperationNodeValues::Terrain, char>&,
        class Pos2d const& origin,
        class Pos2d const& size
    ) const;

    // NOLINTEND
};
