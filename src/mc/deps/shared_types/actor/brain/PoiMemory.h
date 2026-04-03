#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace SharedTypes::Brain {

struct PoiMemory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionID;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mPosition;
    ::ll::TypedStorage<2, 2, ::Poi::TypeId>   mTypeId;
    // NOLINTEND
};

} // namespace SharedTypes::Brain
