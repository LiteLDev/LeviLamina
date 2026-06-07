#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/SyncedClientOptionsUpdate.h"

struct UpdateClientOptionsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::SyncedClientOptionsUpdate> mUpdate;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    UpdateClientOptionsPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit UpdateClientOptionsPacketPayload(::SyncedClientOptionsUpdate const& clientUpdate);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::SyncedClientOptionsUpdate const& clientUpdate);
#endif
    // NOLINTEND
};
