#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action {};

public:
    // prevent constructor by default
    AnimatePacket& operator=(AnimatePacket const&);
    AnimatePacket(AnimatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnimatePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AnimatePacket();

    MCAPI AnimatePacket(::AnimatePacket::Action action, class Actor& e);

    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId);

    MCAPI AnimatePacket(::AnimatePacket::Action action, class ActorRuntimeID runtimeId, float data);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::AnimatePacket::Action action, class Actor& e);

    MCAPI void* ctor$();

    MCAPI void* ctor$(::AnimatePacket::Action action, class ActorRuntimeID runtimeId);

    MCAPI void* ctor$(::AnimatePacket::Action action, class ActorRuntimeID runtimeId, float data);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
