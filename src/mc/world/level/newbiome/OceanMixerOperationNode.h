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
    // vIndex: 0, symbol: __gen_??1OceanMixerOperationNode@@UEAA@XZ
    virtual ~OceanMixerOperationNode() = default;

    // vIndex: 1, symbol: ?init@OperationNodeBase@OperationNodeDetails@@UEAAX_J@Z
    virtual void init(int64 seed);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol:
    // ?_fillArea@OceanMixerOperationNode@@MEBAXAEAV?$WorkingData@PEBVBiome@@PEBV1@@OperationNodeDetails@@AEBVPos2d@@1HV?$OperationGraphResult@W4BiomeTemperatureCategory@@@@@Z
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<class Biome const*, class Biome const*>&,
        class Pos2d const&                                     origin,
        class Pos2d const&                                     size,
        int                                                    pw,
        class OperationGraphResult<::BiomeTemperatureCategory> oceanData
    ) const;

    // vIndex: 4, symbol: ?_getAreaRead@OceanMixerOperationNode@@MEBA?AV?$tuple@VPos2d@@V1@@std@@AEBVPos2d@@0@Z
    virtual std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const& origin, class Pos2d const& size) const;

    // symbol:
    // ??0OceanMixerOperationNode@@QEAA@IAEAV?$shared_ptr@V?$OperationNode@PEBVBiome@@VPos2d@@@@@std@@AEAV?$shared_ptr@V?$OperationNode@W4BiomeTemperatureCategory@@VPos2d@@@@@2@AEBVBiomeRegistry@@AEBVBiome@@3@Z
    MCAPI OceanMixerOperationNode(
        uint                                                                           seedMixup,
        std::shared_ptr<class OperationNode<class Biome const*, class Pos2d>>&         biomeLayer,
        std::shared_ptr<class OperationNode<::BiomeTemperatureCategory, class Pos2d>>& oceanLayer,
        class BiomeRegistry const&                                                     registry,
        class Biome const&                                                             genericShallowOcean,
        class Biome const&                                                             genericDeepOcean
    );

    // NOLINTEND
};
