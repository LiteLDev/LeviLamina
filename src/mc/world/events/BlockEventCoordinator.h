#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class BlockEventListener;
class BlockGameplayHandler;
// clang-format on

class BlockEventCoordinator : public ::EventCoordinator<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGameplayHandler>> mBlockGameplayHandler;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::BlockGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableBlockGameplayEvent<::CoordinatorResult>> event);
    // NOLINTEND
};
