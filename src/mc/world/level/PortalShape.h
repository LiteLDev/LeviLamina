#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PortalAxis.h"
#include "mc/world/Facing.h"

class PortalShape {
public:
    // prevent constructor by default
    PortalShape& operator=(PortalShape const&);
    PortalShape(PortalShape const&);
    PortalShape();

public:
    // NOLINTBEGIN
    // symbol: ??0PortalShape@@QEAA@AEBVBlockSource@@AEBVBlockPos@@W4PortalAxis@@@Z
    MCAPI PortalShape(class BlockSource const& source, class BlockPos const& pos, ::PortalAxis axis);

    // symbol: ?createPortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@@Z
    MCAPI void createPortalBlocks(class WorldChangeTransaction& transaction) const;

    // symbol: ?createRecord@PortalShape@@QEBA?AVPortalRecord@@XZ
    MCAPI class PortalRecord createRecord() const;

    // symbol: ?evaluate@PortalShape@@QEAAXAEBVBlockPos@@AEBVBlockSource@@@Z
    MCAPI void evaluate(class BlockPos const& originalPosition, class BlockSource const& source);

    // symbol: ?getNumberOfPortalBlocks@PortalShape@@QEBAHXZ
    MCAPI int getNumberOfPortalBlocks() const;

    // symbol: ?isFilled@PortalShape@@QEBA_NXZ
    MCAPI bool isFilled() const;

    // symbol: ?isValid@PortalShape@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?removePortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@AEBVBlockPos@@@Z
    MCAPI void removePortalBlocks(class WorldChangeTransaction& transaction, class BlockPos const&) const;

    // symbol: ?setAxis@PortalShape@@QEAAXW4PortalAxis@@@Z
    MCAPI void setAxis(::PortalAxis axis);

    // symbol: ?updateNeighboringBlocks@PortalShape@@QEBAXAEAVBlockSource@@AEBVVec3@@@Z
    MCAPI void updateNeighboringBlocks(class BlockSource& source, class Vec3 const& perpendicularAxis) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculatePortalHeight@PortalShape@@AEAAHAEBVBlockSource@@@Z
    MCAPI int _calculatePortalHeight(class BlockSource const& source);

    // symbol: ?_getDistanceUntilEdge@PortalShape@@AEBAHAEBVBlockPos@@W4Name@Facing@@AEBVBlockSource@@@Z
    MCAPI int
    _getDistanceUntilEdge(class BlockPos const& pos, ::Facing::Name direction, class BlockSource const& source) const;

    // NOLINTEND
};
