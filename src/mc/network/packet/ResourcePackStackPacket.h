#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {
public:
    std::vector<PackInstanceId> mAddOnIdsAndVersions;
    std::vector<PackInstanceId> mTexturePackIdsAndVersions;
    BaseGameVersion             mBaseGameVersion;
    bool                        mTexturePackRequired;
    ExperimentStorage           mExperiments;
    bool                        mHasEditorPacks;

    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&);
    ResourcePackStackPacket(ResourcePackStackPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackStackPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePackStackPacket();

    MCAPI ResourcePackStackPacket(
        std::vector<struct PackInstanceId>,
        std::vector<struct PackInstanceId>,
        class BaseGameVersion const&,
        bool,
        class Experiments const&,
        bool
    );

    // NOLINTEND
};
