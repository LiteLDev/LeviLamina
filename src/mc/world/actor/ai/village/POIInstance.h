#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"

class POIInstance {
public:
    // prevent constructor by default
    POIInstance& operator=(POIInstance const&);
    POIInstance(POIInstance const&);
    POIInstance();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0POIInstance@@QEAA@AEBVBlockPos@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIType@@M_K4222@Z
    MCAPI POIInstance(
        class BlockPos const& pos,
        bool                  useBoundingBox,
        std::string           name,
        ::POIType             type,
        float                 radius,
        uint64                maxCapacity,
        uint64                weight,
        std::string           soundEvent,
        std::string           initEvent,
        std::string           endEvent
    );

    // symbol: ?decreaseOwnerCount@POIInstance@@QEAAX_K@Z
    MCAPI void decreaseOwnerCount(uint64 amount);

    // symbol: ?getEndEvent@POIInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getEndEvent() const;

    // symbol: ?getInitEvent@POIInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getInitEvent() const;

    // symbol: ?getName@POIInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getName() const;

    // symbol: ?getOwnerCapacity@POIInstance@@QEBA_KXZ
    MCAPI uint64 getOwnerCapacity() const;

    // symbol: ?getOwnerCount@POIInstance@@QEBA_KXZ
    MCAPI uint64 getOwnerCount() const;

    // symbol: ?getPosition@POIInstance@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPosition() const;

    // symbol: ?getRadius@POIInstance@@QEBAMXZ
    MCAPI float getRadius() const;

    // symbol: ?getSecondBlockFullAABB@POIInstance@@QEAA?AVAABB@@AEAVBlockSource@@@Z
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource& region);

    // symbol: ?getSoundEvent@POIInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getSoundEvent() const;

    // symbol: ?getType@POIInstance@@QEBA?AW4POIType@@XZ
    MCAPI ::POIType getType() const;

    // symbol: ?getTypeName@POIInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getTypeName() const;

    // symbol: ?getWeight@POIInstance@@QEBA_KXZ
    MCAPI uint64 getWeight() const;

    // symbol: ?increaseOwnerCount@POIInstance@@QEAAX_K@Z
    MCAPI void increaseOwnerCount(uint64 amount);

    // symbol: ?incrementArrivalFailureCount@POIInstance@@QEAAXXZ
    MCAPI void incrementArrivalFailureCount();

    // symbol: ?isFull@POIInstance@@QEBA_NXZ
    MCAPI bool isFull() const;

    // symbol: ?isPathable@POIInstance@@QEBA_NXZ
    MCAPI bool isPathable() const;

    // symbol: ?resetArrivalFailureCount@POIInstance@@QEAAXXZ
    MCAPI void resetArrivalFailureCount();

    // symbol: ?save@POIInstance@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag&) const;

    // symbol: ?setVillage@POIInstance@@QEAAXPEAVVillage@@@Z
    MCAPI void setVillage(class Village* value);

    // symbol: ?trySpawnParticles@POIInstance@@QEBAXAEAVBlockSource@@AEAVRandom@@H@Z
    MCAPI void trySpawnParticles(class BlockSource& region, class Random& random, int particleType) const;

    // symbol: ?useBoundingBox@POIInstance@@QEBA_NXZ
    MCAPI bool useBoundingBox() const;

    // NOLINTEND
};
