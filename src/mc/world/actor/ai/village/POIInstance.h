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

    // symbol: ?getPosition@POIInstance@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPosition() const;

    // symbol: ?getRadius@POIInstance@@QEBAMXZ
    MCAPI float getRadius() const;

    // symbol: ?getSecondBlockFullAABB@POIInstance@@QEAA?AVAABB@@AEAVBlockSource@@@Z
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource& region);

    // symbol: ?getSoundEvent@POIInstance@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getSoundEvent() const;

    // symbol: ?incrementArrivalFailureCount@POIInstance@@QEAAXXZ
    MCAPI void incrementArrivalFailureCount();

    // symbol: ?resetArrivalFailureCount@POIInstance@@QEAAXXZ
    MCAPI void resetArrivalFailureCount();

    // symbol: ?trySpawnParticles@POIInstance@@QEBAXAEAVBlockSource@@AEAVRandom@@H@Z
    MCAPI void trySpawnParticles(class BlockSource& region, class Random& random, int particleType) const;

    // symbol: ?useBoundingBox@POIInstance@@QEBA_NXZ
    MCAPI bool useBoundingBox() const;

    // NOLINTEND
};
