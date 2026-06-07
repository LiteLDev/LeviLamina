#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mMinHeight;
    ::ll::TypedStorage<2, 2, short> mMaxHeight;
    ::ll::TypedStorage<2, 2, short> mSeaLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int maxHeight() const;

    MCAPI int minHeight() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::WorldGenContext from(::Dimension const& dimension);
    // NOLINTEND
};

} // namespace br::worldgen
