#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetLocalPlayerAsInitializedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc386ec;
    // NOLINTEND

public:
    // prevent constructor by default
    SetLocalPlayerAsInitializedPacketPayload& operator=(SetLocalPlayerAsInitializedPacketPayload const&);
    SetLocalPlayerAsInitializedPacketPayload(SetLocalPlayerAsInitializedPacketPayload const&);
    SetLocalPlayerAsInitializedPacketPayload();
};
