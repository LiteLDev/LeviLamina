#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct MobArmorEquipmentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mHead;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mTorso;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mLegs;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mFeet;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MobArmorEquipmentPacketPayload& operator=(MobArmorEquipmentPacketPayload const&);
    MobArmorEquipmentPacketPayload(MobArmorEquipmentPacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobArmorEquipmentPacketPayload();

    MCAPI MobArmorEquipmentPacketPayload(::MobArmorEquipmentPacketPayload&&);

    MCAPI explicit MobArmorEquipmentPacketPayload(::Actor const& e);

#ifdef LL_PLAT_C
    MCAPI void fillIn(::Actor& e) const;
#endif

    MCAPI ~MobArmorEquipmentPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MobArmorEquipmentPacketPayload&&);

    MCAPI void* $ctor(::Actor const& e);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
