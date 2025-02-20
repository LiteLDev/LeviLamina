#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class DataItem;
class LayeredAbilities;
class NetworkItemStackDescriptor;
class Player;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
class Vec2;
class Vec3;
struct ActorLink;
struct ActorUniqueID;
struct PropertySyncData;
namespace mce { class UUID; }
// clang-format on

class AddPlayerPacket : public ::AddActorBasePacket {
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
    // vIndex: 0
    virtual ~AddPlayerPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
