#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/registry/CreativeItemEntry.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CreativeContentPacket : public ::Packet {
public:
    // CreativeContentPacket inner types define
    struct CreativeItemEntryDescription {
        TypedServerNetId<CreativeItemNetIdTag, uint32_t, 0> mCreativeItemNetId; // this+0x0
        NetworkItemInstanceDescriptor                           mItemDescriptor;    // this+0x8
        uint32_t                                            mIndex;             // this+0x48
    };

public:
    const std::vector<CreativeItemEntry>&     mWriteEntries;          // this+0x30
    std::vector<CreativeItemEntryDescription> mReadEntryDescriptions; // this+0x38

    // prevent constructor by default
    CreativeContentPacket& operator=(CreativeContentPacket const&) = delete;
    CreativeContentPacket(CreativeContentPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CreativeContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CreativeContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CreativeContentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CreativeContentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1CreativeContentPacket@@UEAA@XZ
    MCVAPI ~CreativeContentPacket();

    // symbol:
    // ??0CreativeContentPacket@@QEAA@AEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@@Z
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const&);

    // symbol: ??0CreativeContentPacket@@QEAA@XZ
    MCAPI CreativeContentPacket();

    // NOLINTEND
};
