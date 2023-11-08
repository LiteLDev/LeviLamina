#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
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
    // vIndex: 0, symbol: __gen_??1OceanFrozenSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~OceanFrozenSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@OceanFrozenSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@OceanFrozenSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
