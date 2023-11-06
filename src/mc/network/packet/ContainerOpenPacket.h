#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class ContainerOpenPacket : public ::Packet {
public:
    // prevent constructor by default
    ContainerOpenPacket& operator=(ContainerOpenPacket const&);
    ContainerOpenPacket(ContainerOpenPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ContainerOpenPacket@@UEAA@XZ
    virtual ~ContainerOpenPacket();

    // vIndex: 1, symbol: ?getId@ContainerOpenPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ContainerOpenPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ContainerOpenPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ContainerOpenPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ContainerOpenPacket@@QEAA@XZ
    MCAPI ContainerOpenPacket();

    // symbol: ??0ContainerOpenPacket@@QEAA@W4ContainerID@@W4ContainerType@@AEBVBlockPos@@AEBUActorUniqueID@@@Z
    MCAPI ContainerOpenPacket(::ContainerID, ::ContainerType, class BlockPos const&, struct ActorUniqueID const&);

    // NOLINTEND
};
