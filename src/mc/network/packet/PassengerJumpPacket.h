#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PassengerJumpPacket : public ::Packet {
public:
    int mJumpScale; // this+0x30

    // prevent constructor by default
    PassengerJumpPacket& operator=(PassengerJumpPacket const&);
    PassengerJumpPacket(PassengerJumpPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PassengerJumpPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PassengerJumpPacket();

    MCAPI explicit PassengerJumpPacket(int jumpScale);

    // NOLINTEND
};
