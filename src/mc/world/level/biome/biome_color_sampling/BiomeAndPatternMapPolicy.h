#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/biome_color_sampling/MapPolicy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class BiomeAndPatternMapPolicy : public ::BiomeColorSampling::MapPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbadad7;
    ::ll::UntypedStorage<8, 24> mUnka67583;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeAndPatternMapPolicy& operator=(BiomeAndPatternMapPolicy const&);
    BiomeAndPatternMapPolicy(BiomeAndPatternMapPolicy const&);
    BiomeAndPatternMapPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color get(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ~BiomeAndPatternMapPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $get(::BlockSource& region, ::BlockPos const& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
