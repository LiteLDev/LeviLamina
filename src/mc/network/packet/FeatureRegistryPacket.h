#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class FeatureRegistryPacket : public ::Packet {
public:
    std::vector<FeatureRegistry::FeatureBinaryJsonFormat> mFeaturesData; // this+0x30

    // prevent constructor by default
    FeatureRegistryPacket& operator=(FeatureRegistryPacket const&);
    FeatureRegistryPacket(FeatureRegistryPacket const&);
    FeatureRegistryPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FeatureRegistryPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
