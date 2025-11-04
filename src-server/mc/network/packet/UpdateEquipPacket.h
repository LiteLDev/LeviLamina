#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/UpdateEquipPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

MC_NETWORK_PACKET_DECALARE(UpdateEquipPacket) {

public:
    // prevent constructor by default
    UpdateEquipPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 12
    virtual ::SerializationMode getSerializationMode() const /*override*/;

    // vIndex: 13
    virtual void setSerializationMode(::SerializationMode mode) /*override*/;

    // vIndex: 5
    virtual void writeWithSerializationMode(
        ::BinaryStream & stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;

    // vIndex: 7
    virtual void write(::BinaryStream & bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream & stream) const /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<void> read(
        ::ReadOnlyBinaryStream & bitStream,
        ::cereal::ReflectionCtx const& reflectionCtx
    ) /*override*/;

    // vIndex: 10
    virtual bool disallowBatching() const /*override*/;

    // vIndex: 11
    virtual bool isValid() const /*override*/;

    // vIndex: 3
    virtual uint64 getMaxSize() const /*override*/;

    // vIndex: 14
    virtual ::std::string toString() const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream & stream) /*override*/;

    // vIndex: 16
    virtual ::Bedrock::Result<void> _read(
        ::ReadOnlyBinaryStream & stream,
        ::cereal::ReflectionCtx const& reflectionCtx
    ) /*override*/;

    // vIndex: 0
    virtual ~UpdateEquipPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UpdateEquipPacket(::UpdateEquipPacketPayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UpdateEquipPacketPayload payload);
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

    MCFOLD ::SerializationMode $getSerializationMode() const;

    MCFOLD void $setSerializationMode(::SerializationMode mode);

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream & stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;

    MCFOLD void $write(::BinaryStream & bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    MCAPI void $write(::BinaryStream & stream) const;

    MCAPI ::Bedrock::Result<void> $read(
        ::ReadOnlyBinaryStream & bitStream,
        ::cereal::ReflectionCtx const& reflectionCtx
    );

    MCFOLD bool $disallowBatching() const;

    MCFOLD bool $isValid() const;

    MCFOLD uint64 $getMaxSize() const;

    MCAPI ::std::string $toString() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream & stream);

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream & stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
}
MC_NETWORK_PACKET_DECALARE_END