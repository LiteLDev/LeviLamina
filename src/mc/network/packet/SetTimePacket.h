#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetTimePacket : public ::Packet {
public:
    // prevent constructor by default
    SetTimePacket& operator=(SetTimePacket const&);
    SetTimePacket(SetTimePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetTimePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetTimePacket();

    MCAPI explicit SetTimePacket(int time);

    // NOLINTEND
};
