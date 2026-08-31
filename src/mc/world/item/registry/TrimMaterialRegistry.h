#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/registry/TrimMaterial.h"

class TrimMaterialRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TrimMaterial>> mTrimMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeServer();
    // NOLINTEND
};
