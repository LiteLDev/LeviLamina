#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace Editor {

class BlockAdjacencyMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf7985d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAdjacencyMap& operator=(BlockAdjacencyMap const&);
    BlockAdjacencyMap(BlockAdjacencyMap const&);
    BlockAdjacencyMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::BlockPos const& pos);

    MCNAPI void remove(::BlockPos const& pos);

    MCNAPI void translate(::BlockPos const& offset);
    // NOLINTEND
};

} // namespace Editor
