#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddPaintingPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddPaintingPacket& operator=(AddPaintingPacket const&);
    AddPaintingPacket(AddPaintingPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AddPaintingPacket@@UEAA@XZ
    virtual ~AddPaintingPacket() = default;

    // vIndex: 1, symbol: ?getId@AddPaintingPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AddPaintingPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddPaintingPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@AddPaintingPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AddPaintingPacket@@QEAA@XZ
    MCAPI AddPaintingPacket();

    // symbol: ??0AddPaintingPacket@@QEAA@AEBVPainting@@@Z
    MCAPI explicit AddPaintingPacket(class Painting const& painting);

    // NOLINTEND
};
