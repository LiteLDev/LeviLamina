#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/set/PlacementType.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/SpreadType.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct RandomSpreadPlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureSet::PlacementType> mType;
    ::ll::TypedStorage<4, 4, int>                                                        mSalt;
    ::ll::TypedStorage<2, 2, ushort>                                                     mSeparation;
    ::ll::TypedStorage<2, 2, ushort>                                                     mSpacing;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureSet::SpreadType>    mSpreadType;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
