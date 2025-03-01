#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

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
    MCAPI ~JigsawSpace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
