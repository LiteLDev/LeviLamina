/**
 * @file  PortalShape.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1532287208
     * @symbol  ??0PortalShape\@\@QEAA\@AEBVBlockSource\@\@AEBVBlockPos\@\@W4PortalAxis\@\@\@Z
     */
    MCAPI PortalShape(class BlockSource const &, class BlockPos const &, enum class PortalAxis);
    /**
     * @hash   -1783263014
     * @symbol  ?createPortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@\@Z
     */
    MCAPI void createPortalBlocks(class WorldChangeTransaction &) const;
    /**
     * @hash   -1821147586
     * @symbol  ?createRecord\@PortalShape\@\@QEBA?AVPortalRecord\@\@XZ
     */
    MCAPI class PortalRecord createRecord() const;
    /**
     * @hash   -1508586391
     * @symbol  ?evaluate\@PortalShape\@\@QEAAXAEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockPos const &, class BlockSource const &);
    /**
     * @hash   -862610440
     * @symbol  ?getNumberOfPortalBlocks\@PortalShape\@\@QEBAHXZ
     */
    MCAPI int getNumberOfPortalBlocks() const;
    /**
     * @hash   642456324
     * @symbol  ?getPortalBlockAABB\@PortalShape\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getPortalBlockAABB() const;
    /**
     * @hash   115304118
     * @symbol  ?isFilled\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isFilled() const;
    /**
     * @hash   -1827880668
     * @symbol  ?isValid\@PortalShape\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -971482045
     * @symbol  ?removePortalBlocks\@PortalShape\@\@QEBAXAEAVWorldChangeTransaction\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void removePortalBlocks(class WorldChangeTransaction &, class BlockPos const &) const;
    /**
     * @hash   1182623816
     * @symbol  ?setAxis\@PortalShape\@\@QEAAXW4PortalAxis\@\@\@Z
     */
    MCAPI void setAxis(enum class PortalAxis);
    /**
     * @hash   1738091401
     * @symbol  ?updateNeighboringBlocks\@PortalShape\@\@QEBAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void updateNeighboringBlocks(class BlockSource &, class Vec3 const &) const;

//private:
    /**
     * @hash   1868026059
     * @symbol  ?_calculatePortalHeight\@PortalShape\@\@AEAAHAEBVBlockSource\@\@\@Z
     */
    MCAPI int _calculatePortalHeight(class BlockSource const &);
    /**
     * @hash   448819024
     * @symbol  ?_getDistanceUntilEdge\@PortalShape\@\@AEBAHAEBVBlockPos\@\@W4Name\@Facing\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI int _getDistanceUntilEdge(class BlockPos const &, enum class Facing::Name, class BlockSource const &) const;

private:

};