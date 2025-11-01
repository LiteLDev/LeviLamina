#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ContainerID.h"

struct UpdateEquipPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mType;
    ::ll::TypedStorage<4, 4, int> mSize;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityUniqueID;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateEquipPacketPayload& operator=(UpdateEquipPacketPayload const&);
    UpdateEquipPacketPayload(UpdateEquipPacketPayload const&);
    UpdateEquipPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::UpdateEquipPacketPayload& operator=(::UpdateEquipPacketPayload&&);

    MCAPI ~UpdateEquipPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
