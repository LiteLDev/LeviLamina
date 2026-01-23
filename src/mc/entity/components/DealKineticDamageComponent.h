#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct DealKineticDamageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings> mSettings;
    ::ll::TypedStorage<4, 4, uint>                     mTicks;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::ActorUniqueID,
            uint,
            ::std::less<::ActorUniqueID>,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<uint>>>
        mHitEntities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DealKineticDamageComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
