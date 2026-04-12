#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class TessellationPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TessellationPolicy() = default;

    virtual ::mce::Color
    get(::Block const&          block,
        ::BlockSource&          region,
        ::BlockPos const&       pos,
        ::BiomeTintCache const* biomeTintCache) const = 0;

    virtual ::mce::Color get(::Block const& block) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
