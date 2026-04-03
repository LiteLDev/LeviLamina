#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/MaterialType.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct VanillaBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mBlockID;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_10::MaterialType> mMaterial;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
