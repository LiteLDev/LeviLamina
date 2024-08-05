#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MoveActorAbsolutePacket : public ::Packet {
public:
    // prevent constructor by default
    MoveActorAbsolutePacket& operator=(MoveActorAbsolutePacket const&);
    MoveActorAbsolutePacket(MoveActorAbsolutePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveActorAbsolutePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MoveActorAbsolutePacket();

    MCAPI explicit MoveActorAbsolutePacket(class MoveActorAbsoluteData const& data);

    // NOLINTEND
};
