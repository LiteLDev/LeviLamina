#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimerComponent {
public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&);
    TimerComponent(TimerComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TimerComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool getHasExecuted() const;

    MCAPI bool getLooping() const;

    MCAPI uint64 getTimeStamp(class Level const& level);

    MCAPI class TimerComponent& operator=(class TimerComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void restartTimer(class Actor& actor);

    MCAPI void setHasExecuted(bool hasExecuted);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int getRandomTime(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
