#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AddVolumeEntityPacket : public ::Packet {
public:
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
};
