#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class FeatureRegistryPacket : public ::Packet {
public:
    std::vector<FeatureRegistry::FeatureBinaryJsonFormat> mFeaturesData; // this+0x30

    // prevent constructor by default
    FeatureRegistryPacket& operator=(FeatureRegistryPacket const&);
    FeatureRegistryPacket(FeatureRegistryPacket const&);
    FeatureRegistryPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@FeatureRegistryPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@FeatureRegistryPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@FeatureRegistryPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@FeatureRegistryPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1FeatureRegistryPacket@@UEAA@XZ
    MCVAPI ~FeatureRegistryPacket();

    // symbol:
    // ??0FeatureRegistryPacket@@QEAA@AEBV?$vector@UFeatureBinaryJsonFormat@FeatureRegistry@@V?$allocator@UFeatureBinaryJsonFormat@FeatureRegistry@@@std@@@std@@@Z
    MCAPI explicit FeatureRegistryPacket(std::vector<struct FeatureRegistry::FeatureBinaryJsonFormat> const&);

    // NOLINTEND
};
