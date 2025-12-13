#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RequestAbilityPacketPayload {
public:
    // RequestAbilityPacketPayload inner types define
    enum class Type : uchar {
        Unset = 0,
        Bool  = 1,
        Float = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk92f28b;
    ::ll::UntypedStorage<1, 1> mUnk9932ba;
    ::ll::UntypedStorage<4, 8> mUnkf09b8e;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestAbilityPacketPayload& operator=(RequestAbilityPacketPayload const&);
    RequestAbilityPacketPayload(RequestAbilityPacketPayload const&);
    RequestAbilityPacketPayload();
};
