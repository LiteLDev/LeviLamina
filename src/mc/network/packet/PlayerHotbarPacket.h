#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class PlayerHotbarPacket : public ::Packet {
public:
    uint        mSelectedSlot;     // this+0x30
    bool        mShouldSelectSlot; // this+0x34
    ContainerID mContainerId;      // this+0x35

    // prevent constructor by default
    PlayerHotbarPacket& operator=(PlayerHotbarPacket const&);
    PlayerHotbarPacket(PlayerHotbarPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerHotbarPacket@@UEAA@XZ
    virtual ~PlayerHotbarPacket();

    // vIndex: 1, symbol: ?getId@PlayerHotbarPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerHotbarPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerHotbarPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerHotbarPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerHotbarPacket@@QEAA@XZ
    MCAPI PlayerHotbarPacket();

    // symbol: ??0PlayerHotbarPacket@@QEAA@IW4ContainerID@@_N@Z
    MCAPI PlayerHotbarPacket(uint selectedSlot, ::ContainerID containerID, bool shouldSelectSlot);

    // NOLINTEND
};
