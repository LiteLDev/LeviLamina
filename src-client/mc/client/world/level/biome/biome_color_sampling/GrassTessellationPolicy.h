#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/biome/biome_color_sampling/TessellationPolicy.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class GrassTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color
    get(::Block const&, ::BlockSource& region, ::BlockPos const& pos, ::BiomeTintCache const* biomeTintCache) const
        /*override*/;

    virtual ::mce::Color get(::Block const&) const /*override*/;

    virtual ~GrassTessellationPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color
    $get(::Block const&, ::BlockSource& region, ::BlockPos const& pos, ::BiomeTintCache const* biomeTintCache) const;

    MCAPI ::mce::Color $get(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
