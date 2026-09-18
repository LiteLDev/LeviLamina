#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FurnaceOptions.h"

struct SetPlayerFurnaceOptionsPacketPayload {
public:
    // SetPlayerFurnaceOptionsPacketPayload inner types define
    enum class FurnaceType : uchar {
        None         = 0,
        Furnace      = 1,
        BlastFurnace = 2,
        Smoker       = 3,
        Count        = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SetPlayerFurnaceOptionsPacketPayload::FurnaceType> mFurnaceType;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                                   mFurnaceOptions;
    // NOLINTEND
};
