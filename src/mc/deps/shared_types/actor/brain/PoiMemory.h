#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/poi/TypeId.h"

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
