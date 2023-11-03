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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AddItemActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddItemActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddItemActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@AvailableActorIdentifiersPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 5, symbol: ?disallowBatching@Packet@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 6, symbol: ?isValid@Packet@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol:
    // ?_read@AddItemActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AddItemActorPacket@@QEAA@XZ
    MCAPI AddItemActorPacket();

    // symbol: ??0AddItemActorPacket@@QEAA@AEAVItemActor@@@Z
    MCAPI explicit AddItemActorPacket(class ItemActor&);

    // NOLINTEND
};
