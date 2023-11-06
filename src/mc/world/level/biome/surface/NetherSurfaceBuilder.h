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

class NetherSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    NetherSurfaceBuilder& operator=(NetherSurfaceBuilder const&);
    NetherSurfaceBuilder(NetherSurfaceBuilder const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetherSurfaceBuilder@@@UEAA@XZ
    virtual ~NetherSurfaceBuilder();

    // vIndex: 1, symbol: ?init@NetherSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@NetherSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;

    // symbol: ??0NetherSurfaceBuilder@VanillaSurfaceBuilders@@QEAA@XZ
    MCAPI NetherSurfaceBuilder();

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
