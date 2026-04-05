#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
struct MovementAbilitiesComponent;
// clang-format on

namespace UpdateAbilitiesSystemImpl {

struct MovementAbilitiesRequestVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MovementAbilitiesComponent&> mAbilitiesComponent;
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>              mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAbilitiesRequestVisitor& operator=(MovementAbilitiesRequestVisitor const&);
    MovementAbilitiesRequestVisitor(MovementAbilitiesRequestVisitor const&);
    MovementAbilitiesRequestVisitor();
};

} // namespace UpdateAbilitiesSystemImpl
