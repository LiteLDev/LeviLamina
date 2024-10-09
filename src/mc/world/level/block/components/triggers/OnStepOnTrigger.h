#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOnEventComponent; }
namespace BlockEvents { struct BlockStepOnEvent; }
// clang-format on

class OnStepOnTrigger {
public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&);
    OnStepOnTrigger(OnStepOnTrigger const&);
    OnStepOnTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnStepOnTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockStepOnEventComponent*> comp);

    MCAPI void onStepOn(struct BlockEvents::BlockStepOnEvent const& eventData) const;

    // NOLINTEND
};
