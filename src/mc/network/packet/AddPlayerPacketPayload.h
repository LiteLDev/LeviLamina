#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/SerializedAbilitiesData.h"
#include "mc/world/actor/SynchedActorData.h"
#include "mc/world/actor/state/PropertySyncData.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorLink;
// clang-format on

struct AddPlayerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                          mUuid;
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                      mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mPlatformOnlineId;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mRot;
    ::ll::TypedStorage<4, 4, float>                                 mYHeadRot;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>         mCarriedItem;
    ::ll::TypedStorage<4, 4, ::GameType>                            mPlayerGameType;
    ::ll::TypedStorage<8, 24, ::SynchedActorData::CopyableDataList> mUnpack;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                   mSynchedProperties;
    ::ll::TypedStorage<8, 40, ::SerializedAbilitiesData>            mAbilitiesData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>           mLinks;
    ::ll::TypedStorage<8, 32, ::std::string>                        mDeviceId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                       mBuildPlatform;
    // NOLINTEND

public:
    // prevent constructor by default
    AddPlayerPacketPayload& operator=(AddPlayerPacketPayload const&);
    AddPlayerPacketPayload(AddPlayerPacketPayload const&);
    AddPlayerPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddPlayerPacketPayload(::AddPlayerPacketPayload&&);

    MCAPI explicit AddPlayerPacketPayload(::Player& p);

    MCAPI ~AddPlayerPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AddPlayerPacketPayload&&);

    MCAPI void* $ctor(::Player& p);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
