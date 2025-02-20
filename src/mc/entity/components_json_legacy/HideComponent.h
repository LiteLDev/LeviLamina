#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class HideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk63e831;
    ::ll::UntypedStorage<1, 1> mUnkdb1802;
    // NOLINTEND

public:
    // prevent constructor by default
    HideComponent& operator=(HideComponent const&);
    HideComponent(HideComponent const&);
    HideComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
    // NOLINTEND
};
