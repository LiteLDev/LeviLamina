#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class RefreshEntitlementsPacket : public ::Packet {
public:
    // prevent constructor by default
    RefreshEntitlementsPacket& operator=(RefreshEntitlementsPacket const&);
    RefreshEntitlementsPacket(RefreshEntitlementsPacket const&);
    RefreshEntitlementsPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RefreshEntitlementsPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream&);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream&) const;

    // NOLINTEND
};
