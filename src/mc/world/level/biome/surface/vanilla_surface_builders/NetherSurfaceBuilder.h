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
    // vIndex: 0
    virtual ~NetherSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome&, uint levelSeed);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI NetherSurfaceBuilder();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void buildSurfaceAt$(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    MCAPI void init$(class Biome&, uint levelSeed);

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
