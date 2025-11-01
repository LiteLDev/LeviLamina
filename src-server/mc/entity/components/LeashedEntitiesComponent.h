#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct LeashedEntitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::brstd::flat_set<::ActorUniqueID, ::std::less<::ActorUniqueID>, ::std::vector<::ActorUniqueID>>>
        mLeashedEntities;
    // NOLINTEND
};
