#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/BiomeDefinitionListPacket.h"

class CompressedBiomeDefinitionListPacket : public ::BiomeDefinitionListPacket {
public:
    // prevent constructor by default
    CompressedBiomeDefinitionListPacket& operator=(CompressedBiomeDefinitionListPacket const&);
    CompressedBiomeDefinitionListPacket(CompressedBiomeDefinitionListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CompressedBiomeDefinitionListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CompressedBiomeDefinitionListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CompressedBiomeDefinitionListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@CompressedBiomeDefinitionListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // symbol: ??1CompressedBiomeDefinitionListPacket@@UEAA@XZ
    MCVAPI ~CompressedBiomeDefinitionListPacket();

    // symbol: ??0CompressedBiomeDefinitionListPacket@@QEAA@VCompoundTag@@@Z
    MCAPI explicit CompressedBiomeDefinitionListPacket(class CompoundTag);

    // symbol: ??0CompressedBiomeDefinitionListPacket@@QEAA@XZ
    MCAPI CompressedBiomeDefinitionListPacket();

    // NOLINTEND
};
