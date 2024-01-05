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
    // vIndex: 0, symbol: __gen_??1RegionHillsOperationNode@@UEAA@XZ
    virtual ~RegionHillsOperationNode() = default;

    // vIndex: 1, symbol: ?init@OperationNodeBase@OperationNodeDetails@@UEAAX_J@Z
    virtual void init(int64);

    // vIndex: 2, symbol:
    // ?_allocateAndFill@?$MixerOperationNode@PEAVBiome@@VPos2d@@PEAV1@$$V@@MEBA?AV?$TransferData@PEAVBiome@@@OperationNodeDetails@@_KAEBVPos2d@@1@Z
    virtual class OperationNodeDetails::TransferData<class Biome*>
    _allocateAndFill(uint64, class Pos2d const&, class Pos2d const&) const;

    // vIndex: 3, symbol:
    // ?_fillArea@RegionHillsOperationNode@@MEBAXAEAV?$WorkingData@PEAVBiome@@PEAV1@@OperationNodeDetails@@AEBVPos2d@@1H@Z
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<class Biome*, class Biome*>&,
        class Pos2d const& origin,
        class Pos2d const& size,
        int                pw
    ) const;

    // vIndex: 4, symbol: ?_getAreaRead@RegionHillsOperationNode@@MEBA?AV?$tuple@VPos2d@@V1@@std@@AEBVPos2d@@0@Z
    virtual std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const& origin, class Pos2d const& size) const;

    // symbol:
    // ??0RegionHillsOperationNode@@QEAA@IAEAV?$shared_ptr@V?$OperationNode@PEAVBiome@@VPos2d@@@@@std@@AEAV?$shared_ptr@V?$OperationNode@HVPos2d@@@@@2@AEBVBiomeRegistry@@@Z
    MCAPI RegionHillsOperationNode(
        uint                                                             seedMixup,
        std::shared_ptr<class OperationNode<class Biome*, class Pos2d>>& parent,
        std::shared_ptr<class OperationNode<int, class Pos2d>>&,
        class BiomeRegistry const& biomeRegistry
    );

    // NOLINTEND
};
