/**
 * @file  POIInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class POIInstance.
 *
 */
class POIInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIINSTANCE
public:
    class POIInstance& operator=(class POIInstance const &) = delete;
    POIInstance(class POIInstance const &) = delete;
    POIInstance() = delete;
#endif

public:
    /**
     * @symbol  ??0POIInstance\@\@QEAA\@AEBVBlockPos\@\@_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIType\@\@M_K4222\@Z
     */
    MCAPI POIInstance(class BlockPos const &, bool, std::string, enum class POIType, float, unsigned __int64, unsigned __int64, std::string, std::string, std::string);
    /**
     * @symbol  ?decreaseOwnerCount\@POIInstance\@\@QEAAX_K\@Z
     */
    MCAPI void decreaseOwnerCount(unsigned __int64);
    /**
     * @symbol  ?getEndEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getEndEvent() const;
    /**
     * @symbol  ?getInitEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getInitEvent() const;
    /**
     * @symbol  ?getName\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol  ?getOwnerCapacity\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCapacity() const;
    /**
     * @symbol  ?getOwnerCount\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCount() const;
    /**
     * @symbol  ?getPosition\@POIInstance\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol  ?getRadius\@POIInstance\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @symbol  ?getSecondBlockFullAABB\@POIInstance\@\@QEAA?AVAABB\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource &);
    /**
     * @symbol  ?getSoundEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getSoundEvent() const;
    /**
     * @symbol  ?getType\@POIInstance\@\@QEBA?AW4POIType\@\@XZ
     */
    MCAPI enum class POIType getType() const;
    /**
     * @symbol  ?getTypeName\@POIInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTypeName() const;
    /**
     * @symbol  ?getWeight\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getWeight() const;
    /**
     * @symbol  ?increaseOwnerCount\@POIInstance\@\@QEAAX_K\@Z
     */
    MCAPI void increaseOwnerCount(unsigned __int64);
    /**
     * @symbol  ?incrementArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void incrementArrivalFailureCount();
    /**
     * @symbol  ?isFull\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool isFull() const;
    /**
     * @symbol  ?isPathable\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool isPathable() const;
    /**
     * @symbol  ?resetArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void resetArrivalFailureCount();
    /**
     * @symbol  ?setVillage\@POIInstance\@\@QEAAXPEAVVillage\@\@\@Z
     */
    MCAPI void setVillage(class Village *);
    /**
     * @symbol  ?trySpawnParticles\@POIInstance\@\@QEBAXAEAVBlockSource\@\@AEAVRandom\@\@H\@Z
     */
    MCAPI void trySpawnParticles(class BlockSource &, class Random &, int) const;
    /**
     * @symbol  ?useBoundingBox\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool useBoundingBox() const;

};