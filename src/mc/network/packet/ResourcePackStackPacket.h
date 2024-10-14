#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/PackInstanceId.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
        std::vector<struct PackInstanceId> addOnIdsAndVersions,
        std::vector<struct PackInstanceId> texturePackIdsAndVersions,
        class BaseGameVersion const&       baseGameVersion,
        bool                               texturePackRequired,
        class Experiments const&           experiments,
        bool                               includeEditorPacks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
