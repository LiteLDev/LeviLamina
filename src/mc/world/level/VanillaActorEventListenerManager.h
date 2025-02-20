#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class KnockbackArmorUpdater;
class NetheriteArmorEquippedListener;
// clang-format on

class VanillaActorEventListenerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::KnockbackArmorUpdater>>> mKnockbackArmorUpdater;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::NetheriteArmorEquippedListener>>>
        mNetheriteArmorEquippedListener;
    // NOLINTEND
};
