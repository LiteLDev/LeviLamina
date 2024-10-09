#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerDestroyEventComponent; }
namespace BlockEvents { struct BlockPlayerDestroyEvent; }
// clang-format on

class OnPlayerDestroyedTrigger {
public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlayerDestroyedTrigger() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlayerDestroyEventComponent*> comp);

    MCAPI void onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    // NOLINTEND
};
