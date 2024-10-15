#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/storage/AdventureSettings.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct AdventureSettings const& adventureSettings);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
