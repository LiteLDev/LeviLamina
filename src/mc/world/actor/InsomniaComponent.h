#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaComponent {
public:
    // prevent constructor by default
    InsomniaComponent& operator=(InsomniaComponent const&);
    InsomniaComponent(InsomniaComponent const&);
    InsomniaComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI int getInsomniaTimerTicks() const;

    MCAPI int getTicksUntilInsomnia() const;

    MCAPI int incrementTimeSinceRest();

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void restartTimer();

    // NOLINTEND
};
