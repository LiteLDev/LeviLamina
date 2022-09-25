/**
 * @file  POIInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   408979802
     * @symbol ??0POIInstance@@QEAA@AEBVBlockPos@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIType@@M_K4222@Z
     */
    MCAPI POIInstance(class BlockPos const &, bool, std::string, enum POIType, float, unsigned __int64, unsigned __int64, std::string, std::string, std::string);
    /**
     * @hash   -299456171
     * @symbol ?decreaseOwnerCount@POIInstance@@QEAAX_K@Z
     */
    MCAPI void decreaseOwnerCount(unsigned __int64);
    /**
     * @hash   493570896
     * @symbol ?getEndEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getEndEvent() const;
    /**
     * @hash   -365612190
     * @symbol ?getInitEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getInitEvent() const;
    /**
     * @hash   -812016496
     * @symbol ?getName@POIInstance@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   -1920305779
     * @symbol ?getOwnerCapacity@POIInstance@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCapacity() const;
    /**
     * @hash   -185106213
     * @symbol ?getOwnerCount@POIInstance@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getOwnerCount() const;
    /**
     * @hash   -1113601554
     * @symbol ?getPosition@POIInstance@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   -1597059242
     * @symbol ?getRadius@POIInstance@@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @hash   -83806875
     * @symbol ?getSecondBlockFullAABB@POIInstance@@QEAA?AVAABB@@AEAVBlockSource@@@Z
     */
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource &);
    /**
     * @hash   827559632
     * @symbol ?getSoundEvent@POIInstance@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getSoundEvent() const;
    /**
     * @hash   -188523374
     * @symbol ?getType@POIInstance@@QEBA?AW4POIType@@XZ
     */
    MCAPI enum POIType getType() const;
    /**
     * @hash   398382798
     * @symbol ?getTypeName@POIInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getTypeName() const;
    /**
     * @hash   434436747
     * @symbol ?getWeight@POIInstance@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getWeight() const;
    /**
     * @hash   846761653
     * @symbol ?increaseOwnerCount@POIInstance@@QEAAX_K@Z
     */
    MCAPI void increaseOwnerCount(unsigned __int64);
    /**
     * @hash   -382954383
     * @symbol ?incrementArrivalFailureCount@POIInstance@@QEAAXXZ
     */
    MCAPI void incrementArrivalFailureCount();
    /**
     * @hash   993215634
     * @symbol ?isFull@POIInstance@@QEBA_NXZ
     */
    MCAPI bool isFull() const;
    /**
     * @hash   -450089422
     * @symbol ?isPathable@POIInstance@@QEBA_NXZ
     */
    MCAPI bool isPathable() const;
    /**
     * @hash   827390065
     * @symbol ?resetArrivalFailureCount@POIInstance@@QEAAXXZ
     */
    MCAPI void resetArrivalFailureCount();
    /**
     * @hash   -129471993
     * @symbol ?setVillage@POIInstance@@QEAAXPEAVVillage@@@Z
     */
    MCAPI void setVillage(class Village *);
    /**
     * @hash   -619423614
     * @symbol ?trySpawnParticles@POIInstance@@QEBAXAEAVBlockSource@@AEAVRandom@@H@Z
     */
    MCAPI void trySpawnParticles(class BlockSource &, class Random &, int) const;
    /**
     * @hash   -384755134
     * @symbol ?useBoundingBox@POIInstance@@QEBA_NXZ
     */
    MCAPI bool useBoundingBox() const;

};