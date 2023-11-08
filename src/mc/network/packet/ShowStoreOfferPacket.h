#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ShowStoreOfferPacket : public ::Packet {
public:
    std::string mOfferId;     // this+0x30
    std::string mContentType; // this+0x50
    bool        mShowAll;     // this+0x70

    // prevent constructor by default
    ShowStoreOfferPacket& operator=(ShowStoreOfferPacket const&);
    ShowStoreOfferPacket(ShowStoreOfferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShowStoreOfferPacket@@UEAA@XZ
    virtual ~ShowStoreOfferPacket() = default;

    // vIndex: 1, symbol: ?getId@ShowStoreOfferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ShowStoreOfferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ShowStoreOfferPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ShowStoreOfferPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ShowStoreOfferPacket@@QEAA@XZ
    MCAPI ShowStoreOfferPacket();

    // NOLINTEND
};
