#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorHeldItemUpdater;
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
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ActorHeldItemUpdater>>> mActorHeldItemUpdater;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaActorEventListenerManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
