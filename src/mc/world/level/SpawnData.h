#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/EquipmentTable.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SpawnData : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>      mActorId;
    ::ll::TypedStorage<1, 1, bool>                               mIsBaby;
    ::ll::TypedStorage<8, 64, ::std::optional<::EquipmentTable>> mEquipment;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>               mSize;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnData(SpawnData const&);
    SpawnData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpawnData(::CompoundTag const& tag);

    MCAPI ::SpawnData& operator=(::SpawnData const&);

    MCAPI ::std::unique_ptr<::CompoundTag> save();

    MCAPI ~SpawnData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
