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
    // vIndex: 0, symbol: ??1UpdateAdventureSettingsPacket@@UEAA@XZ
    virtual ~UpdateAdventureSettingsPacket();

    // vIndex: 1, symbol: ?getId@UpdateAdventureSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateAdventureSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateAdventureSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateAdventureSettingsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateAdventureSettingsPacket@@QEAA@XZ
    MCAPI UpdateAdventureSettingsPacket();

    // symbol: ??0UpdateAdventureSettingsPacket@@QEAA@AEBUAdventureSettings@@@Z
    MCAPI explicit UpdateAdventureSettingsPacket(struct AdventureSettings const& adventureSettings);

    // NOLINTEND
};
