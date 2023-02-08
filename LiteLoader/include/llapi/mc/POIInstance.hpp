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
     * @hash   -227648102
     * @symbol  ??0POIInstance\@\@QEAA\@AEBVBlockPos\@\@_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIType\@\@M_K4222\@Z
     */
    MCAPI POIInstance(class BlockPos const &, bool, std::string, enum class POIType, float, unsigned __int64, unsigned __int64, std::string, std::string, std::string);
    /**
     * @hash   -936084075
     * @symbol  ?decreaseOwnerCount\@POIInstance\@\@QEAAX_K\@Z
     */
    MCAPI void decreaseOwnerCount(unsigned __int64);
    /**
     * @hash   599834432
     * @symbol  ?getEndEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getEndEvent() const;
    /**
     * @hash   -232655918
     * @symbol  ?getInitEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getInitEvent() const;
    /**
     * @hash   -715393712
     * @symbol  ?getName\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   1738033613
     * @symbol  ?getOwnerCapacity\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCapacity() const;
    /**
     * @hash   19732859
     * @symbol  ?getOwnerCount\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCount() const;
    /**
     * @hash   -1822404402
     * @symbol  ?getPosition\@POIInstance\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   2061280150
     * @symbol  ?getRadius\@POIInstance\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @hash   -720434779
     * @symbol  ?getSecondBlockFullAABB\@POIInstance\@\@QEAA?AVAABB\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource &);
    /**
     * @hash   -905904448
     * @symbol  ?getSoundEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getSoundEvent() const;
    /**
     * @hash   -825120526
     * @symbol  ?getType\@POIInstance\@\@QEBA?AW4POIType\@\@XZ
     */
    MCAPI enum class POIType getType() const;
    /**
     * @hash   -238214354
     * @symbol  ?getTypeName\@POIInstance\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTypeName() const;
    /**
     * @hash   -50399285
     * @symbol  ?getWeight\@POIInstance\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getWeight() const;
    /**
     * @hash   210164501
     * @symbol  ?increaseOwnerCount\@POIInstance\@\@QEAAX_K\@Z
     */
    MCAPI void increaseOwnerCount(unsigned __int64);
    /**
     * @hash   -1019551535
     * @symbol  ?incrementArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void incrementArrivalFailureCount();
    /**
     * @hash   356618482
     * @symbol  ?isFull\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool isFull() const;
    /**
     * @hash   -1086686574
     * @symbol  ?isPathable\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool isPathable() const;
    /**
     * @hash   190792913
     * @symbol  ?resetArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void resetArrivalFailureCount();
    /**
     * @hash   -766069145
     * @symbol  ?setVillage\@POIInstance\@\@QEAAXPEAVVillage\@\@\@Z
     */
    MCAPI void setVillage(class Village *);
    /**
     * @hash   -1256020766
     * @symbol  ?trySpawnParticles\@POIInstance\@\@QEBAXAEAVBlockSource\@\@AEAVRandom\@\@H\@Z
     */
    MCAPI void trySpawnParticles(class BlockSource &, class Random &, int) const;
    /**
     * @hash   -1021306158
     * @symbol  ?useBoundingBox\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool useBoundingBox() const;

};