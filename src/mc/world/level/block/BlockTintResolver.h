#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class BlockTintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::mce::Color resolve(::BlockSource&, ::BlockPos const&, ::Block const&, ::mce::Color const&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
