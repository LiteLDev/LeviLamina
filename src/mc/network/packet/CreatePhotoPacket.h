#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CreatePhotoPacket : public ::Packet {
public:
    std::string   mPhotoItemName; // this+0x30
    ActorUniqueID mId;            // this+0x50
    std::string   mPhotoName;     // this+0x58

    // prevent constructor by default
    CreatePhotoPacket& operator=(CreatePhotoPacket const&);
    CreatePhotoPacket(CreatePhotoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreatePhotoPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CreatePhotoPacket();

    // NOLINTEND
};
