#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEventComponent; }
namespace BlockEvents { struct BlockPlayerPlacingEvent; }
// clang-format on

class OnPlayerPlacingTrigger {
public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlayerPlacingTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlayerPlacingEventComponent*> comp);

    MCAPI void onPlayerPlacing(struct BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
