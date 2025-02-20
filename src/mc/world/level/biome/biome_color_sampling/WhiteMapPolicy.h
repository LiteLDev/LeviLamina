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

class WhiteMapPolicy : public ::BiomeColorSampling::MapPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::mce::Color get(::BlockSource&, ::BlockPos const&) const /*override*/;

    // vIndex: 0
    virtual ~WhiteMapPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color $get(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeColorSampling
