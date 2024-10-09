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

class OceanFrozenSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    OceanFrozenSurfaceBuilder& operator=(OceanFrozenSurfaceBuilder const&);
    OceanFrozenSurfaceBuilder(OceanFrozenSurfaceBuilder const&);
    OceanFrozenSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OceanFrozenSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint levelSeed);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
