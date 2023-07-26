#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"

class PortalShape {

public:
    // prevent constructor by default
    PortalShape& operator=(PortalShape const&) = delete;
    PortalShape(PortalShape const&)            = delete;
    PortalShape()                              = delete;

public:
    /**
     * @symbol ??0PortalShape\@\@QEAA\@AEBVBlockSource\@\@AEBVBlockPos\@\@W4PortalAxis\@\@\@Z
     */
    MCAPI PortalShape(class BlockSource const&, class BlockPos const&, enum class PortalAxis); // NOLINT
    /**
     * @symbol ?createPortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@\@Z
     */
    MCAPI void createPortalBlocks(class WorldChangeTransaction&) const; // NOLINT
    /**
     * @symbol ?createRecord\@PortalShape\@\@QEBA?AVPortalRecord\@\@XZ
     */
    MCAPI class PortalRecord createRecord() const; // NOLINT
    /**
     * @symbol ?evaluate\@PortalShape\@\@QEAAXAEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockPos const&, class BlockSource const&); // NOLINT
    /**
     * @symbol ?getNumberOfPortalBlocks\@PortalShape\@\@QEBAHXZ
     */
    MCAPI int getNumberOfPortalBlocks() const; // NOLINT
    /**
     * @symbol ?isFilled\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isFilled() const; // NOLINT
    /**
     * @symbol ?isValid\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?removePortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void removePortalBlocks(class WorldChangeTransaction&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?setAxis\@PortalShape\@\@QEAAXW4PortalAxis\@\@\@Z
     */
    MCAPI void setAxis(enum class PortalAxis); // NOLINT
    /**
     * @symbol ?updateNeighboringBlocks\@PortalShape\@\@QEBAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void updateNeighboringBlocks(class BlockSource&, class Vec3 const&) const; // NOLINT

    // private:
    /**
     * @symbol ?_calculatePortalHeight\@PortalShape\@\@AEAAHAEBVBlockSource\@\@\@Z
     */
    MCAPI int _calculatePortalHeight(class BlockSource const&); // NOLINT
    /**
     * @symbol ?_getDistanceUntilEdge\@PortalShape\@\@AEBAHAEBVBlockPos\@\@W4Name\@Facing\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI int
    _getDistanceUntilEdge(class BlockPos const&, enum class Facing::Name, class BlockSource const&) const; // NOLINT

private:
};
