#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct NpcRequestPacketPayload;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class NpcRequestPacket : public ::ll::PayloadPacket<::NpcRequestPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk914ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&);
    NpcRequestPacket(NpcRequestPacket const&);
    NpcRequestPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::SerializationMode getSerializationMode() const /*override*/;

    virtual void setSerializationMode(::SerializationMode mode) /*override*/;

    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;

    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual bool disallowBatching() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint64 getMaxSize() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual ~NpcRequestPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NpcRequestPacket(::NpcRequestPacketPayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NpcRequestPacketPayload payload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI ::SerializationMode $getSerializationMode() const;

    MCNAPI void $setSerializationMode(::SerializationMode mode);

    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;

    MCNAPI void $write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCNAPI bool $disallowBatching() const;

    MCNAPI bool $isValid() const;

    MCNAPI uint64 $getMaxSize() const;

    MCNAPI ::std::string $toString() const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCNAPI ::Bedrock::Result<void>
    $_read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};