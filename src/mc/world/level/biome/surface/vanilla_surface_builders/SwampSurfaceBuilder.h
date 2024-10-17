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

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwampSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void buildSurfaceAt$(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI void init$(class Biome& biome, uint);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
