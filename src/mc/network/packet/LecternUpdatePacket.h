#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/LecternUpdatePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LecternUpdatePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::LecternUpdatePacketPayload> mPayload;
    ::ll::TypedStorage<4, 4, ::SerializationMode>           mSerializationMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 11
    virtual ::SerializationMode getSerializationMode() const /*override*/;

    // vIndex: 12
    virtual void setSerializationMode(::SerializationMode mode) /*override*/;

    // vIndex: 4
    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    // vIndex: 0
    virtual ~LecternUpdatePacket() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCFOLD void $setSerializationMode(::SerializationMode mode);

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;

    MCFOLD void $write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream&);

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
