#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/trim/TrimMaterial.h"
#include "mc/world/trim/TrimPattern.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TrimDataPacket : public ::Packet {
public:
    std::vector<TrimPattern>  mTrimPatterns;  // this+0x30
    std::vector<TrimMaterial> mTrimMaterials; // this+0x48

    // prevent constructor by default
    TrimDataPacket& operator=(TrimDataPacket const&);
    TrimDataPacket(TrimDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TrimDataPacket@@UEAA@XZ
    virtual ~TrimDataPacket();

    // vIndex: 1, symbol: ?getId@TrimDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TrimDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@TrimDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@TrimDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0TrimDataPacket@@QEAA@XZ
    MCAPI TrimDataPacket();

    // symbol: ?prepareFromRegistries@TrimDataPacket@@SA?AV1@AEBVTrimPatternRegistry@@AEBVTrimMaterialRegistry@@@Z
    MCAPI static class TrimDataPacket
    prepareFromRegistries(class TrimPatternRegistry const&, class TrimMaterialRegistry const&);

    // NOLINTEND
};
