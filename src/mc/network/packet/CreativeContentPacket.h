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
        CreativeItemNetId             mCreativeItemNetId; // this+0x0
        NetworkItemInstanceDescriptor mItemDescriptor;    // this+0x8
        uint                          mIndex;             // this+0x48
    };

public:
    std::vector<CreativeItemEntry> const&     mWriteEntries;          // this+0x30
    std::vector<CreativeItemEntryDescription> mReadEntryDescriptions; // this+0x38

    // prevent constructor by default
    CreativeContentPacket& operator=(CreativeContentPacket const&);
    CreativeContentPacket(CreativeContentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CreativeContentPacket@@UEAA@XZ
    virtual ~CreativeContentPacket();

    // vIndex: 1, symbol: ?getId@CreativeContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CreativeContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CreativeContentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CreativeContentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CreativeContentPacket@@QEAA@XZ
    MCAPI CreativeContentPacket();

    // symbol:
    // ??0CreativeContentPacket@@QEAA@AEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@@Z
    MCAPI explicit CreativeContentPacket(std::vector<class CreativeItemEntry> const& content);

    // NOLINTEND
};
