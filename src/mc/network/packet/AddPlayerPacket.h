#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class DataItem;
class Player;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
struct ActorLink;
// clang-format on

class AddPlayerPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                   mLinks;
    ::ll::TypedStorage<8, 32, ::std::string>                                mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                  mUuid;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>                                mPlatformOnlineId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mRot;
    ::ll::TypedStorage<4, 4, float>                                         mYHeadRot;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mUnpack;
    ::ll::TypedStorage<4, 1444, ::LayeredAbilities>                         mAbilities;
    ::ll::TypedStorage<8, 32, ::std::string>                                mDeviceId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                               mBuildPlatform;
    ::ll::TypedStorage<4, 4, ::GameType>                                    mPlayerGameType;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mCarriedItem;
    ::ll::TypedStorage<8, 8, ::SynchedActorDataEntityWrapper const*>        mEntityData;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                           mSynchedProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddPlayerPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddPlayerPacket();

    MCAPI explicit AddPlayerPacket(::Player& p);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Player& p);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
