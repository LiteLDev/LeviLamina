#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateAbilitiesSystemImpl {

struct MovementAbilitiesRequestVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4ccf21;
    ::ll::UntypedStorage<1, 1> mUnk98ff8b;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAbilitiesRequestVisitor& operator=(MovementAbilitiesRequestVisitor const&);
    MovementAbilitiesRequestVisitor(MovementAbilitiesRequestVisitor const&);
    MovementAbilitiesRequestVisitor();
};

} // namespace UpdateAbilitiesSystemImpl
