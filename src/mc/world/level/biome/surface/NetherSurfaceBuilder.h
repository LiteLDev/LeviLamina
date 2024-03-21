#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class ISurfaceBuilder;
// clang-format on

namespace VanillaSurfaceBuilders {

class NetherSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    NetherSurfaceBuilder& operator=(NetherSurfaceBuilder const&);
    NetherSurfaceBuilder(NetherSurfaceBuilder const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~NetherSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@NetherSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVBiome@@I@Z
    virtual void init(class Biome&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@NetherSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // symbol: ??0NetherSurfaceBuilder@VanillaSurfaceBuilders@@QEAA@XZ
    MCAPI NetherSurfaceBuilder();

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
