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

class OverworldDefaultSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    OverworldDefaultSurfaceBuilder& operator=(OverworldDefaultSurfaceBuilder const&);
    OverworldDefaultSurfaceBuilder(OverworldDefaultSurfaceBuilder const&);
    OverworldDefaultSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldDefaultSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void buildSurfaceAt$(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI void init$(class Biome& biome, uint);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
