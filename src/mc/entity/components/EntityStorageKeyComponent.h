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
    ::ll::UntypedStorage<8, 32> mUnk7b9fd1;
    ::ll::UntypedStorage<8, 32> mUnk603187;
    ::ll::UntypedStorage<1, 1>  mUnk3883e8;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntityStorageKeyComponent(::std::string const& storageKey);

    MCAPI void addAdditionalSaveData(::Actor const& owner, ::CompoundTag& tag) const;

    MCAPI ::EntityStorageKeyComponent& operator=(::EntityStorageKeyComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& storageKey);
    // NOLINTEND
};
