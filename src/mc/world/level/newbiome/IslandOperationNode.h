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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IslandOperationNode() = default;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol:
    // ?_fillArea@IslandOperationNode@@EEBAXAEAV?$WorkingData@W4Terrain@OperationNodeValues@@D@OperationNodeDetails@@AEBVPos2d@@1@Z
    virtual void
    _fillArea(class OperationNodeDetails::WorkingData<::OperationNodeValues::Terrain, char>&, class Pos2d const&, class Pos2d const&)
        const;

    // NOLINTEND
};
