#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddItemActorPacket : public ::AddActorBasePacket {
public:
    std::vector<std::unique_ptr<DataItem>> mData;
    SynchedActorDataEntityWrapper*         mEntityData;
    ActorUniqueID                          mId;
    ActorRuntimeID                         mRuntimeId;
    NetworkItemStackDescriptor             mItem;
    Vec3                                   mPos;
    Vec3                                   mVelocity;
    bool                                   mIsFromFishing;

    // prevent constructor by default
    AddItemActorPacket& operator=(AddItemActorPacket const&);
    AddItemActorPacket(AddItemActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AddItemActorPacket@@UEAA@XZ
    virtual ~AddItemActorPacket() = default;

    // vIndex: 1, symbol: ?getId@AddItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AddItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AddItemActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AddItemActorPacket@@QEAA@XZ
    MCAPI AddItemActorPacket();

    // symbol: ??0AddItemActorPacket@@QEAA@AEAVItemActor@@@Z
    MCAPI explicit AddItemActorPacket(class ItemActor& itemEntity);

    // NOLINTEND
};
