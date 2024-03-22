#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class ContainerClosePacket : public ::Packet {
public:
    ContainerID mContainerId;          // this+0x30
    bool        mServerInitiatedClose; // this+0x31

    // prevent constructor by default
    ContainerClosePacket& operator=(ContainerClosePacket const&);
    ContainerClosePacket(ContainerClosePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ContainerClosePacket@@UEAA@XZ
    virtual ~ContainerClosePacket();

    // vIndex: 1, symbol: ?getId@ContainerClosePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ContainerClosePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ContainerClosePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ContainerClosePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ContainerClosePacket@@QEAA@XZ
    MCAPI ContainerClosePacket();

    // symbol: ??0ContainerClosePacket@@QEAA@W4ContainerID@@_N@Z
    MCAPI ContainerClosePacket(::ContainerID containerId, bool);

    // NOLINTEND
};
