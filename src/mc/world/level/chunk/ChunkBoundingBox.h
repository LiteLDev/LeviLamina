#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

namespace br {

struct ChunkBoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk98c483;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBoundingBox& operator=(ChunkBoundingBox const&);
    ChunkBoundingBox(ChunkBoundingBox const&);
    ChunkBoundingBox();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BoundingBox const* operator->() const;
    // NOLINTEND
};

} // namespace br
