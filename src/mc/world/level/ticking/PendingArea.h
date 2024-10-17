#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

struct PendingArea {
public:
    // prevent constructor by default
    PendingArea& operator=(PendingArea const&);
    PendingArea(PendingArea const&);
    PendingArea();

public:
    // NOLINTBEGIN
    MCAPI struct TickingAreaDescription getDescription() const;

    MCAPI struct PendingArea& operator=(struct PendingArea&&);

    MCAPI class CompoundTag serialize(DimensionType dimensionId) const;

    MCAPI ~PendingArea();

    MCAPI static struct PendingArea load(std::string const& key, class CompoundTag const& tag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
