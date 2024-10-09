#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEventComponent; }
namespace BlockEvents { struct BlockPlaceEvent; }
// clang-format on

class OnPlacedTrigger {
public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&);
    OnPlacedTrigger(OnPlacedTrigger const&);
    OnPlacedTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlacedTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlaceEventComponent*> comp);

    MCAPI void onPlace(struct BlockEvents::BlockPlaceEvent const& eventData) const;

    // NOLINTEND
};
