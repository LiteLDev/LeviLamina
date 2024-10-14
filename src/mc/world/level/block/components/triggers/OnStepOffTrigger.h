#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOffEventComponent; }
namespace BlockEvents { struct BlockStepOffEvent; }
// clang-format on

class OnStepOffTrigger {
public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&);
    OnStepOffTrigger(OnStepOffTrigger const&);
    OnStepOffTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnStepOffTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockStepOffEventComponent*> comp);

    MCAPI void onStepOff(struct BlockEvents::BlockStepOffEvent const& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
