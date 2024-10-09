#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/village/POIType.h"

class POIInstance {
public:
    // prevent constructor by default
    POIInstance& operator=(POIInstance const&);
    POIInstance(POIInstance const&);
    POIInstance();

public:
    // NOLINTBEGIN
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

    MCAPI void decreaseOwnerCount(uint64 amount);

    MCAPI class HashedString const& getEndEvent() const;

    MCAPI class HashedString const& getInitEvent() const;

    MCAPI class HashedString const& getName() const;

    MCAPI uint64 getOwnerCapacity() const;

    MCAPI uint64 getOwnerCount() const;

    MCAPI class BlockPos const& getPosition() const;

    MCAPI float getRadius() const;

    MCAPI class AABB getSecondBlockFullAABB(class BlockSource& region);

    MCAPI class HashedString const& getSoundEvent() const;

    MCAPI ::POIType getType() const;

    MCAPI std::string getTypeName() const;

    MCAPI uint64 getWeight() const;

    MCAPI void increaseOwnerCount(uint64 amount);

    MCAPI void incrementArrivalFailureCount();

    MCAPI bool isFull() const;

    MCAPI bool isPathable() const;

    MCAPI void resetArrivalFailureCount();

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void setVillage(class Village* value);

    MCAPI void trySpawnParticles(class BlockSource& region, class Random& random, int particleType) const;

    MCAPI bool useBoundingBox() const;

    // NOLINTEND
};
