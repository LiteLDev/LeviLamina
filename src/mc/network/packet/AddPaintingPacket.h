#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddPaintingPacket : public ::AddActorBasePacket {
public:
    ActorUniqueID  mEntityId;  // this+0x30
    ActorRuntimeID mRuntimeId; // this+0x38
    Vec3           mPos;       // this+0x40
    int            mDir;       // this+0x4c
    std::string    mMotive;    // this+0x50

    // prevent constructor by default
    AddPaintingPacket& operator=(AddPaintingPacket const&);
    AddPaintingPacket(AddPaintingPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddPaintingPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddPaintingPacket();

    MCAPI explicit AddPaintingPacket(class Painting const& painting);

    // NOLINTEND
};
