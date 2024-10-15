#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/types/world/actor/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID targetPlayer, class LayeredAbilities const& layeredAbilities);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ActorUniqueID targetPlayer, class LayeredAbilities const& layeredAbilities);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
