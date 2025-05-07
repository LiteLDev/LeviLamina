#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class IPacketHandlerDispatcher;
class ReadOnlyBinaryStream;
// clang-format on

class Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketPriority>                        mPriority;
    ::ll::TypedStorage<4, 4, ::NetworkPeer::Reliability>              mReliability;
    ::ll::TypedStorage<1, 1, ::SubClientId>                           mSenderSubId;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHandled;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mReceiveTimepoint;
    ::ll::TypedStorage<8, 8, ::IPacketHandlerDispatcher const*>       mHandler;
    ::ll::TypedStorage<4, 4, ::Compressibility>                       mCompressible;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Packet();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2
    virtual ::std::string getName() const = 0;

    // vIndex: 3
    virtual ::Bedrock::Result<void> checkSize(uint64 packetSize, bool receiverIsServer) const;

    // vIndex: 4
    virtual void write(::BinaryStream&) const = 0;

    // vIndex: 5
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream);

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> readNoHeader(::ReadOnlyBinaryStream& bitstream, ::SubClientId const& subid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $checkSize(uint64 packetSize, bool receiverIsServer) const;

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
