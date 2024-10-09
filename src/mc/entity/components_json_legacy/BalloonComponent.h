#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonComponent {
public:
    // prevent constructor by default
    BalloonComponent& operator=(BalloonComponent const&);
    BalloonComponent(BalloonComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BalloonComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void computeMaxHeight(class Actor& owner);

    MCAPI void detach(class Actor& owner);

    MCAPI class Actor* getAttachedActor(class Actor& owner);

    MCAPI float getMaxHeight() const;

    MCAPI void integrate(class Actor& owner);

    MCAPI void onRemoved(class Actor& owner, bool shouldPop);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setAttachedActor(class Actor& owner, class Actor& toAttach);

    MCAPI bool shouldPop(class Actor& owner, bool& removeAttached);

    MCAPI static class Actor* getBalloonForActor(class Actor const& actor);

    MCAPI static std::string const ATTACHED_TAG;

    MCAPI static float const FENCE_BALLOON_RANGE;

    MCAPI static float const MAX_BALLOON_RANGE;

    MCAPI static std::string const MAX_HEIGHT_TAG;

    MCAPI static std::string const SHOULD_DROP_TAG;

    // NOLINTEND
};
