#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct PlayerStatusTransitions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewSneakStatus;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewCrawlStatus;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewSwimStatus;
    // NOLINTEND
};

} // namespace SneakTriggerSystem
