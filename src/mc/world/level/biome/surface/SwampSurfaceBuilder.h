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

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&) = delete;
    SwampSurfaceBuilder(SwampSurfaceBuilder const&)            = delete;
    SwampSurfaceBuilder()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@SwampSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@SwampSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
