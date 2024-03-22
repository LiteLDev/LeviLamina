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
    // vIndex: 0, symbol: ??1FeatureRegistryPacket@@UEAA@XZ
    virtual ~FeatureRegistryPacket();

    // vIndex: 1, symbol: ?getId@FeatureRegistryPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@FeatureRegistryPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@FeatureRegistryPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@FeatureRegistryPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol:
    // ??0FeatureRegistryPacket@@QEAA@AEBV?$vector@UFeatureBinaryJsonFormat@FeatureRegistry@@V?$allocator@UFeatureBinaryJsonFormat@FeatureRegistry@@@std@@@std@@@Z
    MCAPI explicit FeatureRegistryPacket(std::vector<struct FeatureRegistry::FeatureBinaryJsonFormat> const&);

    // NOLINTEND
};
