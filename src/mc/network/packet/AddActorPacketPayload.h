#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/SynchedActorData.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorLink;
struct SyncedAttribute;
// clang-format on

struct AddActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                      mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mActorType;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mVelocity;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mRot;
    ::ll::TypedStorage<4, 4, float>                                 mYHeadRotation;
    ::ll::TypedStorage<4, 4, float>                                 mYBodyRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::SyncedAttribute>>     mAttributes;
    ::ll::TypedStorage<8, 24, ::SynchedActorData::CopyableDataList> mData;
    ::ll::TypedStorage<8, 48, ::PropertySyncData>                   mSynchedProperties;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>           mLinks;
    // NOLINTEND

public:
    // prevent constructor by default
    AddActorPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AddActorPacketPayload(::Actor& e);

    MCAPI ~AddActorPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& e);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
