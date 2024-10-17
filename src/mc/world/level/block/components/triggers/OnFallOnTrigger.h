#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockFallOnEventComponent; }
namespace BlockEvents { struct BlockFallOnEvent; }
// clang-format on

class OnFallOnTrigger {
public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const&);
    OnFallOnTrigger(OnFallOnTrigger const&);
    OnFallOnTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnFallOnTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockFallOnEventComponent*> comp);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
