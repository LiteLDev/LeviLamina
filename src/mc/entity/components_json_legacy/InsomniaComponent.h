#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class InsomniaComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mTimeSinceRest;
    ::ll::TypedStorage<4, 4, float> mDaysUntilInsomnia;
    ::ll::TypedStorage<4, 4, int>   mTicksUntilInsomnia;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD int getInsomniaTimerTicks() const;

    MCFOLD int getTicksUntilInsomnia() const;

    MCAPI int incrementTimeSinceRest();

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void restartTimer();
    // NOLINTEND
};
