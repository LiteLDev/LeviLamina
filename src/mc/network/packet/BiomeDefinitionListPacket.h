#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BiomeDefinitionListPacket : public ::Packet {
public:
    CompoundTag mBiomeData; // this+0x30

    // prevent constructor by default
    BiomeDefinitionListPacket& operator=(BiomeDefinitionListPacket const&);
    BiomeDefinitionListPacket(BiomeDefinitionListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@BiomeDefinitionListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@BiomeDefinitionListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@BiomeDefinitionListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@BiomeDefinitionListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@BiomeDefinitionListPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1BiomeDefinitionListPacket@@UEAA@XZ
    MCVAPI ~BiomeDefinitionListPacket();

    // symbol: ??0BiomeDefinitionListPacket@@QEAA@XZ
    MCAPI BiomeDefinitionListPacket();

    // symbol: ??0BiomeDefinitionListPacket@@QEAA@VCompoundTag@@@Z
    MCAPI explicit BiomeDefinitionListPacket(class CompoundTag);

    // NOLINTEND
};
