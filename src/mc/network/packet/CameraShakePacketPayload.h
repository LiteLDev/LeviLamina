#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraShakePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk10f52c;
    ::ll::UntypedStorage<4, 4> mUnk5a9da6;
    ::ll::UntypedStorage<1, 1> mUnkf39f59;
    ::ll::UntypedStorage<1, 1> mUnk990b5e;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakePacketPayload& operator=(CameraShakePacketPayload const&);
    CameraShakePacketPayload(CameraShakePacketPayload const&);
    CameraShakePacketPayload();
};
