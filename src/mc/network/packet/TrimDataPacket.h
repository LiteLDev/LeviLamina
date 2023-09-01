#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TrimDataPacket : public ::Packet {
public:
    // prevent constructor by default
    TrimDataPacket& operator=(TrimDataPacket const&) = delete;
    TrimDataPacket(TrimDataPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@TrimDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TrimDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@TrimDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@TrimDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1TrimDataPacket@@UEAA@XZ
    MCVAPI ~TrimDataPacket();

    // symbol: ??0TrimDataPacket@@QEAA@XZ
    MCAPI TrimDataPacket();

    // symbol: ?prepareFromRegistries@TrimDataPacket@@SA?AV1@AEBVTrimPatternRegistry@@AEBVTrimMaterialRegistry@@@Z
    MCAPI static class TrimDataPacket
    prepareFromRegistries(class TrimPatternRegistry const&, class TrimMaterialRegistry const&);

    // NOLINTEND
};
