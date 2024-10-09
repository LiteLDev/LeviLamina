#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/SyncedAttribute.h"
#include "mc/network/packet/types/world/actor/ActorLink.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/attribute/AttributeInstanceHandle.h"


// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"

class AddActorPacket : public ::AddActorBasePacket {
public:
    std::vector<ActorLink>                 mLinks;
    Vec3                                   mPos;
    Vec3                                   mVelocity;
    Vec2                                   mRot;
    float                                  mYHeadRotation;
    float                                  mYBodyRotation;
    ActorUniqueID                          mEntityId;
    ActorRuntimeID                         mRuntimeId;
    SynchedActorDataEntityWrapper*         mEntityData;
    std::vector<std::unique_ptr<DataItem>> mData;
    ActorDefinitionIdentifier              mType;
    PropertySyncData                       mSynchedProperties;
    std::vector<AttributeInstanceHandle>   mAttributeHandles;
    std::vector<SyncedAttribute>           mAttributes;

    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const&);
    AddActorPacket(AddActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddActorPacket();

    MCAPI explicit AddActorPacket(class Actor& e);

    // NOLINTEND
};
