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
    std::vector<HudElement> elements;
    HudVisibility           visibility;

    // prevent constructor by default
    SetHudPacket& operator=(SetHudPacket const&);
    SetHudPacket(SetHudPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetHudPacket@@UEAA@XZ
    virtual ~SetHudPacket();

    // vIndex: 1, symbol: ?getId@SetHudPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@SetHudPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetHudPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol: ?_read@SetHudPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SetHudPacket@@QEAA@XZ
    MCAPI SetHudPacket();

    // symbol: ??0SetHudPacket@@QEAA@V?$vector@W4HudElement@@V?$allocator@W4HudElement@@@std@@@std@@W4HudVisibility@@@Z
    MCAPI SetHudPacket(std::vector<::HudElement>, ::HudVisibility);

    // NOLINTEND
};
