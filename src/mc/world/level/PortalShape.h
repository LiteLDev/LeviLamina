#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"
#include "mc/world/level/block/PortalAxis.h"

class PortalShape {
public:
    // prevent constructor by default
    PortalShape& operator=(PortalShape const&);
    PortalShape(PortalShape const&);
    PortalShape();

public:
    // NOLINTBEGIN
    MCAPI PortalShape(class BlockSource const& source, class BlockPos const& pos, ::PortalAxis axis);

    MCAPI void createPortalBlocks(class WorldChangeTransaction& transaction) const;

    MCAPI class PortalRecord createRecord() const;

    MCAPI void evaluate(class BlockPos const& originalPosition, class BlockSource const& source);

    MCAPI int getNumberOfPortalBlocks() const;

    MCAPI bool isFilled() const;

    MCAPI bool isValid() const;

    MCAPI void
    removePortalBlocks(class WorldChangeTransaction& transaction, class BlockPos const& firstPortalPosition) const;

    MCAPI void setAxis(::PortalAxis axis);

    MCAPI void updateNeighboringBlocks(class BlockSource& source, class Vec3 const& perpendicularAxis) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _calculatePortalHeight(class BlockSource const& source);

    MCAPI int
    _getDistanceUntilEdge(class BlockPos const& pos, ::Facing::Name direction, class BlockSource const& source) const;

    // NOLINTEND
};
