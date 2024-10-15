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
    MCAPI void* ctor$(class PositionTrackingId&& id);

    MCAPI void* ctor$(class PositionTrackingId const& id);

    MCAPI static class PositionTrackingId const& INVALID_ID();

    MCAPI static uint& sNextId();

    // NOLINTEND
};
