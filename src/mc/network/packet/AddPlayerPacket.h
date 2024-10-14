#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/network/packet/types/world/actor/ActorLink.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/GameType.h"


// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"

class AddPlayerPacket : public ::AddActorBasePacket {
public:
    std::vector<ActorLink>                 mLinks;
    std::string                            mName;
    mce::UUID                              mUuid;
    ActorUniqueID                          mEntityId;
    ActorRuntimeID                         mRuntimeId;
    std::string                            mPlatformOnlineId;
    Vec3                                   mPos;
    Vec3                                   mVelocity;
    Vec2                                   mRot;
    float                                  mYHeadRot;
    std::vector<std::unique_ptr<DataItem>> mUnpack;
    LayeredAbilities                       mAbilities;
    std::string                            mDeviceId;
    BuildPlatform                          mBuildPlatform;
    GameType                               mPlayerGameType;
    NetworkItemStackDescriptor             mCarriedItem;
    SynchedActorDataEntityWrapper const*   mEntityData;
    PropertySyncData                       mSynchedProperties;

    // prevent constructor by default
    AddPlayerPacket& operator=(AddPlayerPacket const&);
    AddPlayerPacket(AddPlayerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddPlayerPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddPlayerPacket();

    MCAPI explicit AddPlayerPacket(class Player& p);

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
