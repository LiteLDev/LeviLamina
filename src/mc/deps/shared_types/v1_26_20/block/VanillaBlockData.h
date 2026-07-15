#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockArchetype.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct VanillaBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                       mBlockID;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType>                     mMaterial;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype> mBlockArchetype;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VanillaBlockData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
