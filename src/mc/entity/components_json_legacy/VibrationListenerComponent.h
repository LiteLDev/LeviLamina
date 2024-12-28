#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class VibrationListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc64c8f;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationListenerComponent& operator=(VibrationListenerComponent const&);
    VibrationListenerComponent(VibrationListenerComponent const&);
    VibrationListenerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND
};
