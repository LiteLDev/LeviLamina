#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

namespace BiomeColorSampling {

class MapPolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapPolicy() = default;

    virtual ::mce::Color get(::BlockSource& region, ::BlockPos const& pos) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BiomeColorSampling
