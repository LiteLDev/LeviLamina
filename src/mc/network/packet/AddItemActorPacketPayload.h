#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class ItemActor;
// clang-format on

struct AddItemActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                 mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mVelocity;
    ::ll::TypedStorage<1, 1, bool>                                          mIsFromFishing;
    // NOLINTEND

public:
    // prevent constructor by default
    AddItemActorPacketPayload& operator=(AddItemActorPacketPayload const&);
    AddItemActorPacketPayload(AddItemActorPacketPayload const&);
    AddItemActorPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AddItemActorPacketPayload(::ItemActor& itemEntity);

    MCAPI ::AddItemActorPacketPayload& operator=(::AddItemActorPacketPayload&&);

    MCAPI ~AddItemActorPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemActor& itemEntity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
