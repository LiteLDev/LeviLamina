#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

namespace br::worldgen {

struct JigsawSpace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>                mMySpace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoundingBox>> mChildrensSpace;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JigsawSpace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
