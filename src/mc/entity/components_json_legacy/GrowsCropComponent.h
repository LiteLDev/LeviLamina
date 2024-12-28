#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class GrowsCropComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke44fe2;
    ::ll::UntypedStorage<4, 12> mUnk8c9fd2;
    ::ll::UntypedStorage<4, 12> mUnk1642ea;
    // NOLINTEND

public:
    // prevent constructor by default
    GrowsCropComponent& operator=(GrowsCropComponent const&);
    GrowsCropComponent(GrowsCropComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrowsCropComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
