#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreUpdate.h"

struct ServerboundDataStorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::Bedrock::DDUI::DataStoreUpdate> mUpdate;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ServerboundDataStorePacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ServerboundDataStorePacketPayload(::Bedrock::DDUI::DataStoreUpdate update);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate update);
#endif
    // NOLINTEND
};
