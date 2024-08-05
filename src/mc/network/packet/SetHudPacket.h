#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/HudElement.h"
#include "mc/enums/HudVisibility.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/HudElement.h"
#include "mc/enums/HudVisibility.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetHudPacket : public ::Packet {
public:
    std::vector<HudElement> mElements;
    HudVisibility           mVisibility;

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
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI SetHudPacket();

    MCAPI SetHudPacket(std::vector<::HudElement>, ::HudVisibility);

    // NOLINTEND
};
