#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

class VolumeBoundsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
    // NOLINTEND

};
