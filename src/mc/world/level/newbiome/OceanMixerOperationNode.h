#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OperationGraphResult.h"
#include "mc/deps/core/data/OperationNode.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/WorkingData.h"

class OceanMixerOperationNode {
public:
    // prevent constructor by default
    OceanMixerOperationNode& operator=(OceanMixerOperationNode const&);
    OceanMixerOperationNode(OceanMixerOperationNode const&);
    OceanMixerOperationNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OceanMixerOperationNode();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol:
    // ?_fillArea@OceanMixerOperationNode@@MEBAXAEAV?$WorkingData@PEAVBiome@@PEAV1@@OperationNodeDetails@@AEBVPos2d@@1HV?$OperationGraphResult@W4BiomeTemperatureCategory@@@@@Z
    virtual void
    _fillArea(class OperationNodeDetails::WorkingData<class Biome*, class Biome*>&, class Pos2d const&, class Pos2d const&, int, class OperationGraphResult<::BiomeTemperatureCategory>)
        const;

    // vIndex: 4, symbol: ?_getAreaRead@OceanMixerOperationNode@@MEBA?AV?$tuple@VPos2d@@V1@@std@@AEBVPos2d@@0@Z
    virtual std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const&, class Pos2d const&) const;

    // symbol:
    // ??0OceanMixerOperationNode@@QEAA@IAEAV?$shared_ptr@V?$OperationNode@PEAVBiome@@VPos2d@@@@@std@@AEAV?$shared_ptr@V?$OperationNode@W4BiomeTemperatureCategory@@VPos2d@@@@@2@AEBVBiomeRegistry@@AEAVBiome@@3@Z
    MCAPI
    OceanMixerOperationNode(uint, std::shared_ptr<class OperationNode<class Biome*, class Pos2d>>&, std::shared_ptr<class OperationNode<::BiomeTemperatureCategory, class Pos2d>>&, class BiomeRegistry const&, class Biome&, class Biome&);

    // NOLINTEND
};
