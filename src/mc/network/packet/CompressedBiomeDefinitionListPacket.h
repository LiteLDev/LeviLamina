#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/BiomeDefinitionListPacket.h"

class CompressedBiomeDefinitionListPacket : public ::BiomeDefinitionListPacket {
public:
    std::string definitions;

    // prevent constructor by default
    CompressedBiomeDefinitionListPacket& operator=(CompressedBiomeDefinitionListPacket const&);
    CompressedBiomeDefinitionListPacket(CompressedBiomeDefinitionListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompressedBiomeDefinitionListPacket@@UEAA@XZ
    virtual ~CompressedBiomeDefinitionListPacket() = default;

    // vIndex: 1, symbol: ?getId@CompressedBiomeDefinitionListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CompressedBiomeDefinitionListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CompressedBiomeDefinitionListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?read@CompressedBiomeDefinitionListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CompressedBiomeDefinitionListPacket@@QEAA@XZ
    MCAPI CompressedBiomeDefinitionListPacket();

    // symbol: ??0CompressedBiomeDefinitionListPacket@@QEAA@VCompoundTag@@@Z
    MCAPI explicit CompressedBiomeDefinitionListPacket(class CompoundTag biomeData);

    // NOLINTEND
};
