#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class DataItem;
class PropertyComponent;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
// clang-format on

class SetActorDataPacket : public ::Packet {
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
    SetActorDataPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetActorDataPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetActorDataPacket(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
