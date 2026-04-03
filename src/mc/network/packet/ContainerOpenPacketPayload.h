#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/level/BlockPos.h"

struct ContainerOpenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueID;
    // NOLINTEND
};
