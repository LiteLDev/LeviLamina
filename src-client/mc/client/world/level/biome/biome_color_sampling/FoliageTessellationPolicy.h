#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/biome/biome_color_sampling/TessellationPolicy.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class FoliageTessellationPolicy : public ::BiomeColorSampling::TessellationPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TintMethod>                                                mTintMethod;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<int (*)(::Biome const&, ::BlockPos const&)>> mSampler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color get(::Block const&, ::BlockSource&, ::BlockPos const&, ::BiomeTintCache const*) const
        /*override*/;

    virtual ::mce::Color get(::Block const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BiomeColorSampling
