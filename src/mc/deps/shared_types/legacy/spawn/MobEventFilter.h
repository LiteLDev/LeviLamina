#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct MobEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
