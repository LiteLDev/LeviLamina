#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct SlotDropChancesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48> mUnk4301cc;
    ::ll::UntypedStorage<4, 4>  mUnkb0fc84;
    ::ll::UntypedStorage<4, 4>  mUnk28169d;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotDropChancesComponent& operator=(SlotDropChancesComponent const&);
    SlotDropChancesComponent(SlotDropChancesComponent const&);
    SlotDropChancesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND
};
