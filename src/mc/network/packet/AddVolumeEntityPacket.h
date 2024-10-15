#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AddVolumeEntityPacket : public ::Packet {
public:
    CompoundTag          mComponents;     // this+0x30
    std::string          mJsonIdentifier; // this+0x68
    std::string          mInstanceName;   // this+0x88
    NetworkBlockPosition mMinBounds;      // this+0xa8
    NetworkBlockPosition mMaxBounds;      // this+0xb4
    DimensionType        mDimensionType;  // this+0xc0
    SemVersion           mEngineVersion;  // this+0xc8
    EntityNetId          mEntityNetId;    // this+0x118

    // prevent constructor by default
    AddVolumeEntityPacket& operator=(AddVolumeEntityPacket const&);
    AddVolumeEntityPacket(AddVolumeEntityPacket const&);
    AddVolumeEntityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddVolumeEntityPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddVolumeEntityPacket(
        class EntityContext const& entity,
        class CompoundTag          components,
        class SemVersion const&    engineVersion
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(class EntityContext const& entity, class CompoundTag components, class SemVersion const& engineVersion);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
