#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LecternUpdatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk101910;
    ::ll::UntypedStorage<4, 4>  mUnkb4dd7b;
    ::ll::UntypedStorage<4, 12> mUnk840543;
    // NOLINTEND

public:
    // prevent constructor by default
    LecternUpdatePacketPayload& operator=(LecternUpdatePacketPayload const&);
    LecternUpdatePacketPayload(LecternUpdatePacketPayload const&);
    LecternUpdatePacketPayload();
};
