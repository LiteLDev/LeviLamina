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

class TheEndSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    TheEndSurfaceBuilder& operator=(TheEndSurfaceBuilder const&);
    TheEndSurfaceBuilder(TheEndSurfaceBuilder const&);
    TheEndSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TheEndSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~TheEndSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@TheEndSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVBiome@@I@Z
    virtual void init(class Biome&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@TheEndSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
