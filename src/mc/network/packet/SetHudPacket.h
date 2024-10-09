#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

class SetHudPacket : public ::Packet {
public:
    // prevent constructor by default
    SetHudPacket& operator=(SetHudPacket const&);
    SetHudPacket(SetHudPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetHudPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetHudPacket();

    MCAPI SetHudPacket(std::vector<::HudElement> hudElement, ::HudVisibility hudVisible);

    // NOLINTEND
};
