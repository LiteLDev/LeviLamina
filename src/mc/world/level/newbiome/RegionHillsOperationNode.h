#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/OperationNode.h"
#include "mc/world/level/newbiome/TransferData.h"
#include "mc/world/level/newbiome/WorkingData.h"

class RegionHillsOperationNode {
public:
    // prevent constructor by default
    RegionHillsOperationNode& operator=(RegionHillsOperationNode const&);
    RegionHillsOperationNode(RegionHillsOperationNode const&);
    RegionHillsOperationNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegionHillsOperationNode() = default;

    // vIndex: 1
    virtual void init(int64 seed);

    // vIndex: 2
    virtual class OperationNodeDetails::TransferData<class Biome const*>
    _allocateAndFill(uint64, class Pos2d const&, class Pos2d const&) const;

    // vIndex: 3
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<class Biome const*, class Biome const*>&,
        class Pos2d const& origin,
        class Pos2d const& size,
        int                pw
    ) const;

    // vIndex: 4
    virtual std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const& origin, class Pos2d const& size) const;

    MCAPI RegionHillsOperationNode(
        uint                                                                   seedMixup,
        std::shared_ptr<class OperationNode<class Biome const*, class Pos2d>>& parent,
        std::shared_ptr<class OperationNode<int, class Pos2d>>&,
        class BiomeRegistry const& biomeRegistry
    );

    // NOLINTEND
};
