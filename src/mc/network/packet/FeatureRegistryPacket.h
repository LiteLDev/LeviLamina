#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class FeatureRegistryPacket : public ::Packet {
public:
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

    // NOLINTEND
};
