#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class AreaAttackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk478a6e;
    ::ll::UntypedStorage<4, 4>  mUnkd28980;
    ::ll::UntypedStorage<4, 4>  mUnk83c6fe;
    ::ll::UntypedStorage<8, 64> mUnk13e75f;
    ::ll::UntypedStorage<4, 4>  mUnk77028f;
    ::ll::UntypedStorage<1, 1>  mUnk8bc53e;
    ::ll::UntypedStorage<8, 24> mUnkf15f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
    AreaAttackComponent(AreaAttackComponent const&);
    AreaAttackComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::AreaAttackComponent& operator=(::AreaAttackComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);

    MCAPI ~AreaAttackComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
