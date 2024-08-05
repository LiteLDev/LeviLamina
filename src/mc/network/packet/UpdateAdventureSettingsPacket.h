#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/AdventureSettings.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateAdventureSettingsPacket : public ::Packet {
public:
    AdventureSettings mAdventureSettings; // this+0x30

    // prevent constructor by default
    UpdateAdventureSettingsPacket& operator=(UpdateAdventureSettingsPacket const&);
    UpdateAdventureSettingsPacket(UpdateAdventureSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateAdventureSettingsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateAdventureSettingsPacket();

    MCAPI explicit UpdateAdventureSettingsPacket(struct AdventureSettings const& adventureSettings);

    // NOLINTEND
};
