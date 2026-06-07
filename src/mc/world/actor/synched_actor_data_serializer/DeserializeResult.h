#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/bitset.h"

namespace SynchedActorDataSerializer {

struct DeserializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mReadValue;
    ::ll::TypedStorage<1, 1, bool>                                           mWasDifferent;
    ::ll::TypedStorage<8, 32, ::std::optional<::brstd::bitset<130, uint64>>> mChangedFlags;
    // NOLINTEND
};

} // namespace SynchedActorDataSerializer
