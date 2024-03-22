#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class UpdateEquipPacket : public ::Packet {
public:
    ContainerID   mContainerId;    // this+0x30
    ContainerType mType;           // this+0x31
    int           mSize;           // this+0x34
    ActorUniqueID mEntityUniqueID; // this+0x38
    CompoundTag   mData;           // this+0x40

    // prevent constructor by default
    UpdateEquipPacket& operator=(UpdateEquipPacket const&);
    UpdateEquipPacket(UpdateEquipPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateEquipPacket@@UEAA@XZ
    virtual ~UpdateEquipPacket();

    // vIndex: 1, symbol: ?getId@UpdateEquipPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateEquipPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateEquipPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& bitStream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateEquipPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateEquipPacket@@QEAA@XZ
    MCAPI UpdateEquipPacket();

    // symbol: ??0UpdateEquipPacket@@QEAA@W4ContainerID@@W4ContainerType@@H$$QEAVCompoundTag@@AEBUActorUniqueID@@@Z
    MCAPI UpdateEquipPacket(
        ::ContainerID               containerID,
        ::ContainerType             type,
        int                         size,
        class CompoundTag&&         tag,
        struct ActorUniqueID const& entityID
    );

    // NOLINTEND
};
