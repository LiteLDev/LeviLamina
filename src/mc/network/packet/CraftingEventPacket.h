#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CraftingEventPacket : public ::Packet {
public:
    ContainerID                             mContainerId;   // this+0x30
    int                                     mContainerType; // this+0x34
    mce::UUID                               mRecipeId;      // this+0x38
    std::vector<NetworkItemStackDescriptor> mInputItems;    // this+0x48
    std::vector<NetworkItemStackDescriptor> mOutputItems;   // this+0x60

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftingEventPacket@@UEAA@XZ
    virtual ~CraftingEventPacket() = default;

    // vIndex: 1, symbol: ?getId@CraftingEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CraftingEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CraftingEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CraftingEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0CraftingEventPacket@@QEAA@XZ
    MCAPI CraftingEventPacket();

    // NOLINTEND
};
