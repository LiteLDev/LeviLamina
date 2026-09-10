#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolItemHandle.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
// clang-format on

struct DataDrivenRendererEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolItemHandle<::DataDrivenRendererPool>> mHandle;
    ::ll::TypedStorage<4, 4, uint>                                              mCount;
    // NOLINTEND
};
