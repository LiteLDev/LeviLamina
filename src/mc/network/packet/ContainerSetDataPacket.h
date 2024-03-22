#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class ContainerSetDataPacket : public ::Packet {
public:
    int         mId;          // this+0x30
    int         mValue;       // this+0x34
    ContainerID mContainerId; // this+0x38

    // prevent constructor by default
    ContainerSetDataPacket& operator=(ContainerSetDataPacket const&);
    ContainerSetDataPacket(ContainerSetDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ContainerSetDataPacket@@UEAA@XZ
    virtual ~ContainerSetDataPacket();

    // vIndex: 1, symbol: ?getId@ContainerSetDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ContainerSetDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ContainerSetDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ContainerSetDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ContainerSetDataPacket@@QEAA@XZ
    MCAPI ContainerSetDataPacket();

    // symbol: ??0ContainerSetDataPacket@@QEAA@W4ContainerID@@HH@Z
    MCAPI ContainerSetDataPacket(::ContainerID containerId, int id, int value);

    // NOLINTEND
};
