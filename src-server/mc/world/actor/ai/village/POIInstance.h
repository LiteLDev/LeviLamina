#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class CompoundTag;
class Random;
class Village;
// clang-format on

class POIInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 48, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 48, ::HashedString> mEndEvent;
    ::ll::TypedStorage<8, 8, ::Village*>      mVillage;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mPosition;
    ::ll::TypedStorage<8, 8, uint64>          mOwnerCount;
    ::ll::TypedStorage<8, 8, uint64>          mOwnerCapacity;
    ::ll::TypedStorage<8, 8, uint64>          mWeight;
    ::ll::TypedStorage<4, 4, float>           mRadius;
    ::ll::TypedStorage<4, 4, ::POIType>       mType;
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEvent;
    ::ll::TypedStorage<2, 2, short>           mArrivalFailuresCount;
    ::ll::TypedStorage<1, 1, bool>            mUseBoundingBox;
    // NOLINTEND

public:
    // prevent constructor by default
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

    MCAPI ::AABB getSecondBlockFullAABB(::BlockSource& region);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void trySpawnParticles(::BlockSource& region, ::Random& random, int particleType) const;

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
