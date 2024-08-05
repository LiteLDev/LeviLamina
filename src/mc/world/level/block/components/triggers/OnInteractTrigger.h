#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEventComponent; }
namespace BlockEvents { struct BlockPlayerInteractEvent; }
// clang-format on

class OnInteractTrigger {
public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const&);
    OnInteractTrigger(OnInteractTrigger const&);
    OnInteractTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnInteractTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlayerInteractEventComponent*>);

    MCAPI void onInteract(struct BlockEvents::BlockPlayerInteractEvent&) const;

    // NOLINTEND
};
