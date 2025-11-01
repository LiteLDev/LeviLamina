#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class RegistryHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk371898;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryHandle& operator=(RegistryHandle const&);
    RegistryHandle(RegistryHandle const&);
    RegistryHandle();
};

} // namespace VoxelShapes
