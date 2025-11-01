#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

struct ContainerSetDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<4, 4, int> mId;
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

};
