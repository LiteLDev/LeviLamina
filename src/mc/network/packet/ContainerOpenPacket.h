#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class ContainerOpenPacket : public ::Packet {
public:
    ContainerID          mContainerId;    // this+0x30
    ContainerType        mType;           // this+0x31
    NetworkBlockPosition mPos;            // this+0x34
    ActorUniqueID        mEntityUniqueID; // this+0x40

    // prevent constructor by default
    ContainerOpenPacket& operator=(ContainerOpenPacket const&);
    ContainerOpenPacket(ContainerOpenPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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

    // symbol: ??1ContainerOpenPacket@@UEAA@XZ
    MCVAPI ~ContainerOpenPacket();

    // symbol: ??0ContainerOpenPacket@@QEAA@XZ
    MCAPI ContainerOpenPacket();

    // symbol: ??0ContainerOpenPacket@@QEAA@W4ContainerID@@W4ContainerType@@AEBVBlockPos@@AEBUActorUniqueID@@@Z
    MCAPI ContainerOpenPacket(::ContainerID, ::ContainerType, class BlockPos const&, struct ActorUniqueID const&);

    // NOLINTEND
};
