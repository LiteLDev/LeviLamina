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
    // vIndex: 0
    virtual ~CreativeContentPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CreativeContentPacket();

    // NOLINTEND
};
