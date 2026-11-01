#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class EntityStorageKeyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mStorageKey;
    ::ll::TypedStorage<8, 32, ::std::string> mLastSerializedActorState;
    ::ll::TypedStorage<1, 1, bool>           mDirtyFromNonSerializedState;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityStorageKeyComponent(::EntityStorageKeyComponent const&);

    MCNAPI explicit EntityStorageKeyComponent(::std::string const& storageKey);

    MCNAPI void addAdditionalSaveData(::Actor const& owner, ::CompoundTag& tag) const;

    MCNAPI ::EntityStorageKeyComponent& operator=(::EntityStorageKeyComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityStorageKeyComponent const&);

    MCNAPI void* $ctor(::std::string const& storageKey);
    // NOLINTEND
};
