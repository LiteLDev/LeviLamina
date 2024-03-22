#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RemoveVolumeEntityPacket : public ::Packet {
public:
    DimensionType mDimensionType; // this+0x38

    // prevent constructor by default
    RemoveVolumeEntityPacket& operator=(RemoveVolumeEntityPacket const&);
    RemoveVolumeEntityPacket(RemoveVolumeEntityPacket const&);
    RemoveVolumeEntityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RemoveVolumeEntityPacket@@UEAA@XZ
    virtual ~RemoveVolumeEntityPacket();

    // vIndex: 1, symbol: ?getId@RemoveVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RemoveVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RemoveVolumeEntityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RemoveVolumeEntityPacket@@QEAA@AEAVEntityContext@@@Z
    MCAPI explicit RemoveVolumeEntityPacket(class EntityContext& entity);

    // NOLINTEND
};
