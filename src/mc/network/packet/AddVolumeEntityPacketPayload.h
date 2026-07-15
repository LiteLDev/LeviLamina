#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct AddVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag>      mComponents;
    ::ll::TypedStorage<8, 32, ::std::string>      mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>      mInstanceName;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mMaxBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType>     mDimensionType;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>       mEntityNetId;
    // NOLINTEND

public:
    // prevent constructor by default
    AddVolumeEntityPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddVolumeEntityPacketPayload(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );

    MCAPI ~AddVolumeEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
