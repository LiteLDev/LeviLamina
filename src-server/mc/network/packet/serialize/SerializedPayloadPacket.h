#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

template <typename PacketInfoT, typename PacketPayloadT>
class SerializedPayloadPacket : public Packet, public PacketPayloadT {
public:
    SerializationMode serializationMode;

    template <typename... Args>
    SerializedPayloadPacket(Args&&... args) : Packet(),
                                              PacketPayloadT(std::forward<Args>(args)...) {}

public:
    virtual ::MinecraftPacketIds getId() const;

    virtual ::std::string getName() const;

    virtual void writeWithSerializationMode(
        ::BinaryStream&                bitStream,
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::std::optional<::SerializationMode>
    ) const;

    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;

    virtual void write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream);

    virtual ::SerializationMode getSerializationMode() const;

    virtual void setSerializationMode(::SerializationMode);

    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&);};
