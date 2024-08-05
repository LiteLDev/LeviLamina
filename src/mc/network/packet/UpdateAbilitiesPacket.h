#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateAbilitiesPacket : public ::Packet {
public:
    SerializedAbilitiesData mData; // this+0x30

    // prevent constructor by default
    UpdateAbilitiesPacket& operator=(UpdateAbilitiesPacket const&);
    UpdateAbilitiesPacket(UpdateAbilitiesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateAbilitiesPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateAbilitiesPacket();

    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const&);

    // NOLINTEND
};
