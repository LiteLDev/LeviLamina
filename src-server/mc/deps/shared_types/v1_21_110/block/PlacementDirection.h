#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct PlacementDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc66640;
    ::ll::UntypedStorage<4, 8>  mUnkf980db;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&);
    PlacementDirection(PlacementDirection const&);
    PlacementDirection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlacementDirection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
