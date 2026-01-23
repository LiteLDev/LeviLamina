#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mReadValue;
    ::ll::TypedStorage<1, 1, bool>                                 mWasDifferent;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::bitset<127>>> mChangedFlags;
    // NOLINTEND
};

} // namespace SynchedActorDataSerializer
