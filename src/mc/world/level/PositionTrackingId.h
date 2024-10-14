#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionTrackingId {
public:
    // prevent constructor by default
    PositionTrackingId();

public:
    // NOLINTBEGIN
    MCAPI PositionTrackingId(class PositionTrackingId&& id);

    MCAPI PositionTrackingId(class PositionTrackingId const& id);

    MCAPI void fromTag(class Tag const* tag);

    MCAPI std::unique_ptr<class Tag> getTag() const;

    MCAPI class PositionTrackingId& operator=(class PositionTrackingId&& id);

    MCAPI class PositionTrackingId& operator=(class PositionTrackingId const& id);

    MCAPI std::string const toString() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static class PositionTrackingId const& INVALID_ID();

    MCAPI static uint& sNextId();

    // NOLINTEND
};
