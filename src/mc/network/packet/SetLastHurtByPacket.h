#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetLastHurtByPacket : public ::Packet {
public:
    ActorType mLastHurtBy; // this+0x30

    // prevent constructor by default
    SetLastHurtByPacket& operator=(SetLastHurtByPacket const&);
    SetLastHurtByPacket(SetLastHurtByPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetLastHurtByPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetLastHurtByPacket();

    MCAPI explicit SetLastHurtByPacket(::ActorType lastHurtBy);

    // NOLINTEND
};
