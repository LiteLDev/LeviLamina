#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class FATCellValueType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk99bac5;
    ::ll::UntypedStorage<4, 4> mUnk3a2f1d;
    // NOLINTEND

public:
    // prevent constructor by default
    FATCellValueType& operator=(FATCellValueType const&);
    FATCellValueType(FATCellValueType const&);
    FATCellValueType();
};

} // namespace SFAT
