#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace BlockBreadthFirst { struct BlockNeighbor; }
// clang-format on

namespace BlockBreadthFirst {

struct AllNeighborsRandomized {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf97ec3;
    // NOLINTEND

public:
    // prevent constructor by default
    AllNeighborsRandomized& operator=(AllNeighborsRandomized const&);
    AllNeighborsRandomized(AllNeighborsRandomized const&);
    AllNeighborsRandomized();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::array<::BlockBreadthFirst::BlockNeighbor, 6> operator()(::BlockPos const& pos);
    // NOLINTEND
};

} // namespace BlockBreadthFirst
