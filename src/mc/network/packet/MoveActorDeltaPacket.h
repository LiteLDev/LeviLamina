#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/MoveActorDeltaData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MoveActorDeltaPacket : public ::Packet {
public:
    MoveActorDeltaData mMoveData; // this+0x30

    // prevent constructor by default
    MoveActorDeltaPacket& operator=(MoveActorDeltaPacket const&);
    MoveActorDeltaPacket(MoveActorDeltaPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveActorDeltaPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MoveActorDeltaPacket();

    MCAPI explicit MoveActorDeltaPacket(class MoveActorDeltaData const& data);

    // NOLINTEND
};
