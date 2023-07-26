/**
 * @file  PortalShape.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalShape.
 *
 */
class PortalShape {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALSHAPE
public:
    class PortalShape& operator=(class PortalShape const &) = delete;
    PortalShape(class PortalShape const &) = delete;
    PortalShape() = delete;
#endif

public:
    /**
     * @symbol  ??0PortalShape\@\@QEAA\@AEBVBlockSource\@\@AEBVBlockPos\@\@W4PortalAxis\@\@\@Z
     */
    MCAPI PortalShape(class BlockSource const &, class BlockPos const &, enum class PortalAxis);
    /**
     * @symbol  ?createPortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@\@Z
     */
    MCAPI void createPortalBlocks(class WorldChangeTransaction &) const;
    /**
     * @symbol  ?createRecord\@PortalShape\@\@QEBA?AVPortalRecord\@\@XZ
     */
    MCAPI class PortalRecord createRecord() const;
    /**
     * @symbol  ?evaluate\@PortalShape\@\@QEAAXAEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockPos const &, class BlockSource const &);
    /**
     * @symbol  ?getNumberOfPortalBlocks\@PortalShape\@\@QEBAHXZ
     */
    MCAPI int getNumberOfPortalBlocks() const;
    /**
     * @symbol  ?getPortalBlockAABB\@PortalShape\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getPortalBlockAABB() const;
    /**
     * @symbol  ?isFilled\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isFilled() const;
    /**
     * @symbol  ?isValid\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?removePortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void removePortalBlocks(class WorldChangeTransaction &, class BlockPos const &) const;
    /**
     * @symbol  ?setAxis\@PortalShape\@\@QEAAXW4PortalAxis\@\@\@Z
     */
    MCAPI void setAxis(enum class PortalAxis);
    /**
     * @symbol  ?updateNeighboringBlocks\@PortalShape\@\@QEBAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void updateNeighboringBlocks(class BlockSource &, class Vec3 const &) const;

//private:
    /**
     * @symbol  ?_calculatePortalHeight\@PortalShape\@\@AEAAHAEBVBlockSource\@\@\@Z
     */
    MCAPI int _calculatePortalHeight(class BlockSource const &);
    /**
     * @symbol  ?_getDistanceUntilEdge\@PortalShape\@\@AEBAHAEBVBlockPos\@\@W4Name\@Facing\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI int _getDistanceUntilEdge(class BlockPos const &, enum class Facing::Name, class BlockSource const &) const;

private:

};