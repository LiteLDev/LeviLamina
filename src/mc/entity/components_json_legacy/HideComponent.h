#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInRaid;
    ::ll::TypedStorage<1, 1, bool> mReactToBell;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HideComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD bool isInRaid();

    MCFOLD bool isReactingToBell();

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void setInRaid();

    MCAPI void setNotHiding();

    MCFOLD void setReactingToBell();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
