#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CreatePhotoPacket : public ::Packet {
public:
    std::string mPhotoItemName; // this+0x30

    ActorUniqueID mId;        // this+0x50
    std::string   mPhotoName; // this+0x58

    // prevent constructor by default
    CreatePhotoPacket& operator=(CreatePhotoPacket const&);
    CreatePhotoPacket(CreatePhotoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CreatePhotoPacket() = default;

    // vIndex: 1, symbol: ?getId@CreatePhotoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CreatePhotoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CreatePhotoPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CreatePhotoPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0CreatePhotoPacket@@QEAA@XZ
    MCAPI CreatePhotoPacket();

    // NOLINTEND
};
