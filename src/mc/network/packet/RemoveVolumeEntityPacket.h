#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class RemoveVolumeEntityPacket : public ::Packet {
public:
    DimensionType mDimensionType; // this+0x38

    // prevent constructor by default
    RemoveVolumeEntityPacket& operator=(RemoveVolumeEntityPacket const&);
    RemoveVolumeEntityPacket(RemoveVolumeEntityPacket const&);
    RemoveVolumeEntityPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoveVolumeEntityPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI explicit RemoveVolumeEntityPacket(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class EntityContext& entity);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
