#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
// clang-format on

struct AddVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag>          mComponents;
    ::ll::TypedStorage<8, 32, ::std::string>          mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>          mInstanceName;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMinBounds;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMaxBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType>         mDimensionType;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>     mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>           mEntityNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddVolumeEntityPacketPayload();

    MCAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload&&);

    MCAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload const& other);

    MCAPI AddVolumeEntityPacketPayload(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );

    MCAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload&&);

    MCAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload const& other);

    MCAPI ~AddVolumeEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AddVolumeEntityPacketPayload&&);

    MCAPI void* $ctor(::AddVolumeEntityPacketPayload const& other);

    MCAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
