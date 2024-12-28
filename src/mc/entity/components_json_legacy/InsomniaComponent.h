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
    ::ll::UntypedStorage<4, 4> mUnkcc9fdb;
    ::ll::UntypedStorage<4, 4> mUnk8961ae;
    ::ll::UntypedStorage<4, 4> mUnkc2a0ef;
    // NOLINTEND

public:
    // prevent constructor by default
    InsomniaComponent& operator=(InsomniaComponent const&);
    InsomniaComponent(InsomniaComponent const&);
    InsomniaComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI int getInsomniaTimerTicks() const;

    MCAPI int getTicksUntilInsomnia() const;

    MCAPI int incrementTimeSinceRest();

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void restartTimer();
    // NOLINTEND
};
