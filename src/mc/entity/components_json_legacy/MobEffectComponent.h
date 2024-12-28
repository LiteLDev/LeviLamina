#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class MobEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkef7cd9;
    ::ll::UntypedStorage<4, 4>  mUnk3b0d7c;
    ::ll::UntypedStorage<4, 4>  mUnk670b85;
    ::ll::UntypedStorage<2, 2>  mUnk1fae66;
    ::ll::UntypedStorage<8, 64> mUnkef55a5;
    ::ll::UntypedStorage<8, 24> mUnkb77a3e;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectComponent& operator=(MobEffectComponent const&);
    MobEffectComponent(MobEffectComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffectComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void tick(::Actor& owner);

    MCAPI ~MobEffectComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
