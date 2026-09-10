#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class PropertyComponent;
class SynchedActorDataEntityWrapper;
// clang-format on

struct SetActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mPackedItems;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>                             mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    SetActorDataPacketPayload& operator=(SetActorDataPacketPayload const&);
    SetActorDataPacketPayload(SetActorDataPacketPayload const&);
    SetActorDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetActorDataPacketPayload(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );

    MCAPI ::SetActorDataPacketPayload& operator=(::SetActorDataPacketPayload&&);

    MCAPI ~SetActorDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
