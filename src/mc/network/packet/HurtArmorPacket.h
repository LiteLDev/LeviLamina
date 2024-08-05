#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class HurtArmorPacket : public ::Packet {
public:
    // prevent constructor by default
    HurtArmorPacket& operator=(HurtArmorPacket const&);
    HurtArmorPacket(HurtArmorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HurtArmorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI HurtArmorPacket();

    MCAPI HurtArmorPacket(::ActorDamageCause cause, int dmg, std::bitset<4> armorSlots);

    // NOLINTEND
};
