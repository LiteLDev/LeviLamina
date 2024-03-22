#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/PhotoType.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PhotoTransferPacket : public ::Packet {
public:
    std::string   mPhotoName;    // this+0x30
    std::string   mPhotoData;    // this+0x50
    std::string   mBookId;       // this+0x70
    PhotoType     mType;         // this+0x90
    PhotoType     mSourceType;   // this+0x91
    ActorUniqueID mOwnerId;      // this+0x98
    std::string   mNewPhotoName; // this+0xA0


    // prevent constructor by default
    PhotoTransferPacket& operator=(PhotoTransferPacket const&);
    PhotoTransferPacket(PhotoTransferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PhotoTransferPacket@@UEAA@XZ
    virtual ~PhotoTransferPacket();

    // vIndex: 1, symbol: ?getId@PhotoTransferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PhotoTransferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PhotoTransferPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PhotoTransferPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PhotoTransferPacket@@QEAA@XZ
    MCAPI PhotoTransferPacket();

    // NOLINTEND
};
