#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
struct AbilitiesComponent;
// clang-format on

namespace UpdateAbilitiesSystemImpl {

struct AbilitiesRequestVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AbilitiesComponent&> mAbilitiesComponent;
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>      mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    AbilitiesRequestVisitor& operator=(AbilitiesRequestVisitor const&);
    AbilitiesRequestVisitor(AbilitiesRequestVisitor const&);
    AbilitiesRequestVisitor();
};

} // namespace UpdateAbilitiesSystemImpl
