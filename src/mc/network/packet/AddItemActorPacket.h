#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class DataItem;
class ItemActor;
class NetworkItemStackDescriptor;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
class Vec3;
struct ActorUniqueID;
// clang-format on

class AddItemActorPacket : public ::AddActorBasePacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper*>              mEntityData;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;
    ::ll::TypedStorage<1, 1, bool>                                          mIsFromFishing;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddItemActorPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddItemActorPacket();

    MCAPI explicit AddItemActorPacket(::ItemActor& itemEntity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemActor& itemEntity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
