#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class IPacketHandlerDispatcher;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
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
    virtual ~Packet();

    virtual ::MinecraftPacketIds getId() const = 0;

    virtual ::std::string getName() const = 0;

    virtual uint64 getMaxSize() const;

    virtual ::Bedrock::Result<void> checkSize(uint64 packetSize, bool receiverIsServer) const;

    virtual void writeWithSerializationMode(
        ::BinaryStream&                bitStream,
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::std::optional<::SerializationMode>
    ) const;

    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    virtual void write(::BinaryStream&) const = 0;

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream);

    virtual bool disallowBatching() const;

    virtual bool isValid() const;

    virtual ::SerializationMode getSerializationMode() const;

    virtual void setSerializationMode(::SerializationMode);

    virtual ::std::string toString() const;

    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> readNoHeader(
        ::ReadOnlyBinaryStream&        bitstream,
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::SubClientId const&           subid
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $getMaxSize() const;

    MCAPI ::Bedrock::Result<void> $checkSize(uint64 packetSize, bool receiverIsServer) const;

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                bitStream,
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::std::optional<::SerializationMode>
    ) const;

    MCAPI void $write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCFOLD ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCFOLD void $setSerializationMode(::SerializationMode);

    MCFOLD ::std::string $toString() const;

    MCFOLD ::Bedrock::Result<void>
    $_read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
