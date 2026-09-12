#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class RegistryHandle {
public:
    // RegistryHandle inner types define
    using value_type = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mValue;
    // NOLINTEND
};

} // namespace VoxelShapes
