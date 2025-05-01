#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/level/levelgen/v2/StructureBoundingBoxType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct SpawnerData; }
// clang-format on

namespace br::worldgen {

struct StructureSpawnOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::br::worldgen::StructureBoundingBoxType>           mBoundingBox;
    ::ll::TypedStorage<8, 32, ::WeightedRandomList<::br::worldgen::SpawnerData>> mSpawnOverrides;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructureSpawnOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
