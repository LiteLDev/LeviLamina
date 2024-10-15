#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class UpdateClientInputLocksPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateClientInputLocksPacket& operator=(UpdateClientInputLocksPacket const&);
    UpdateClientInputLocksPacket(UpdateClientInputLocksPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateClientInputLocksPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateClientInputLocksPacket();

    MCAPI UpdateClientInputLocksPacket(
        struct ClientInputLockComponent const& inputLockComponent,
        class Vec3 const&                      serverPos
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ClientInputLockComponent const& inputLockComponent, class Vec3 const& serverPos);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
