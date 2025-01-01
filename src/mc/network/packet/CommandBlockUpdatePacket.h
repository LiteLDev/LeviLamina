#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
// clang-format on

class CommandBlockUpdatePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mBlockPos;
    ::ll::TypedStorage<2, 2, ::CommandBlockMode>      mMode;
    ::ll::TypedStorage<1, 1, bool>                    mRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                    mIsConditional;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mEntityId;
    ::ll::TypedStorage<8, 32, ::std::string>          mCommand;
    ::ll::TypedStorage<8, 32, ::std::string>          mLastOutput;
    ::ll::TypedStorage<8, 32, ::std::string>          mName;
    ::ll::TypedStorage<4, 4, int>                     mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                    mTrackOutput;
    ::ll::TypedStorage<1, 1, bool>                    mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                    mIsBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CommandBlockUpdatePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockUpdatePacket();

    MCAPI CommandBlockUpdatePacket(::CommandBlockUpdatePacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CommandBlockUpdatePacket const&);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
