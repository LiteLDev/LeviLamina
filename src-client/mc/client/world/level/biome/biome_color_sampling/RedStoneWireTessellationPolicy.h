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

class RedStoneWireTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color get(::Block const& block, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const
        /*override*/;

    virtual ::mce::Color get(::Block const& block) const /*override*/;

    virtual ~RedStoneWireTessellationPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $get(::Block const& block, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const;

    MCFOLD ::mce::Color $get(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
