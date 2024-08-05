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
    // vIndex: 0
    virtual ~OceanMixerOperationNode() = default;

    // vIndex: 1
    virtual void init(int64 seed);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void _fillArea(
        class OperationNodeDetails::WorkingData<class Biome const*, class Biome const*>&,
        class Pos2d const&                                     origin,
        class Pos2d const&                                     size,
        int                                                    pw,
        class OperationGraphResult<::BiomeTemperatureCategory> oceanData
    ) const;

    // vIndex: 4
    virtual std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const& origin, class Pos2d const& size) const;

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
