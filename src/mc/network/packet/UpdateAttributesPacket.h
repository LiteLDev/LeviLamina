#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/monster/AttributeModifier.h"
#include "mc/world/attribute/AttributeData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateAttributesPacket : public ::Packet {
public:
    ActorRuntimeID             mRuntimeId;     // this+0x30
    std::vector<AttributeData> mAttributeData; // this+0x38
    uint64                     mTick;          // this+0x50

    // prevent constructor by default
    UpdateAttributesPacket& operator=(UpdateAttributesPacket const&);
    UpdateAttributesPacket(UpdateAttributesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateAttributesPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateAttributesPacket();

    MCAPI
    UpdateAttributesPacket(class Actor const& entity, std::vector<class AttributeInstanceHandle> const& dirtyData);

    // NOLINTEND
};
