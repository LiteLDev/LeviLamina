#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class BlockSource;
class CompoundTag;
class HashedString;
class Random;
// clang-format on

class POIInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk82eab5;
    ::ll::UntypedStorage<8, 48> mUnk6130ba;
    ::ll::UntypedStorage<8, 48> mUnkf46f85;
    ::ll::UntypedStorage<8, 8>  mUnk3a5ecf;
    ::ll::UntypedStorage<4, 12> mUnked9252;
    ::ll::UntypedStorage<8, 8>  mUnk8753c7;
    ::ll::UntypedStorage<8, 8>  mUnke8a65c;
    ::ll::UntypedStorage<8, 8>  mUnke1c3c1;
    ::ll::UntypedStorage<4, 4>  mUnk6bac51;
    ::ll::UntypedStorage<4, 4>  mUnk5d6ad8;
    ::ll::UntypedStorage<8, 48> mUnkb52c59;
    ::ll::UntypedStorage<2, 2>  mUnk51db84;
    ::ll::UntypedStorage<1, 1>  mUnk16dd7d;
    // NOLINTEND

public:
    // prevent constructor by default
    POIInstance& operator=(POIInstance const&);
    POIInstance(POIInstance const&);
    POIInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI POIInstance(
        ::BlockPos const& pos,
        bool              useBoundingBox,
        ::std::string     name,
        ::POIType         type,
        float             radius,
        uint64            maxCapacity,
        uint64            weight,
        ::std::string     soundEvent,
        ::std::string     initEvent,
        ::std::string     endEvent
    );

    MCFOLD ::HashedString const& getName() const;

    MCFOLD ::BlockPos const& getPosition() const;

    MCAPI float getRadius() const;

    MCAPI ::AABB getSecondBlockFullAABB(::BlockSource& region);

    MCFOLD ::HashedString const& getSoundEvent() const;

    MCAPI void incrementArrivalFailureCount();

    MCAPI void resetArrivalFailureCount();

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void trySpawnParticles(::BlockSource& region, ::Random& random, int particleType) const;

    MCFOLD bool useBoundingBox() const;

    MCAPI ~POIInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockPos const& pos,
        bool              useBoundingBox,
        ::std::string     name,
        ::POIType         type,
        float             radius,
        uint64            maxCapacity,
        uint64            weight,
        ::std::string     soundEvent,
        ::std::string     initEvent,
        ::std::string     endEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
