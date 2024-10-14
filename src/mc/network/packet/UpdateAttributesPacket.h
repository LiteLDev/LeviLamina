#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/attribute/AttributeData.h"
#include "mc/world/attribute/AttributeModifier.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
