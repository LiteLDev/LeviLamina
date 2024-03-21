#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ShowStoreOfferRedirectType.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShowStoreOfferPacket : public ::Packet {
public:
    // prevent constructor by default
    ShowStoreOfferPacket& operator=(ShowStoreOfferPacket const&);
    ShowStoreOfferPacket(ShowStoreOfferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ShowStoreOfferPacket@@UEAA@XZ
    virtual ~ShowStoreOfferPacket();

    // vIndex: 1, symbol: ?getId@ShowStoreOfferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ShowStoreOfferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ShowStoreOfferPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ShowStoreOfferPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ShowStoreOfferPacket@@QEAA@XZ
    MCAPI ShowStoreOfferPacket();

    // symbol: ??0ShowStoreOfferPacket@@QEAA@AEBVUUID@mce@@W4ShowStoreOfferRedirectType@@@Z
    MCAPI ShowStoreOfferPacket(class mce::UUID const&, ::ShowStoreOfferRedirectType);

    // NOLINTEND
};
