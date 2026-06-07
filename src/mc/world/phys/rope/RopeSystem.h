#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Rope;
class Vec3;
struct RopeParams;
struct RopePointsRef;
struct RopeWave;
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mWaveApplied;
    ::ll::TypedStorage<8, 24, ::std::vector<::Rope>> mRopes;
    ::ll::TypedStorage<8, 8, uint64>                 mCutRenderNode;
    ::ll::TypedStorage<8, 8, uint64>                 mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mEndPinEntity;
    ::ll::TypedStorage<4, 4, ::std::atomic_flag>     mTicking;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>    mRenderMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RopeSystem();

    MCAPI void _tick();

#ifdef LL_PLAT_C
    MCAPI void addWave(uint64 index, ::RopeWave&& wave);
#endif

    MCAPI void cutAtPercent(float percent);

#ifdef LL_PLAT_C
    MCFOLD uint64 getCutNode() const;

    MCFOLD ::ActorUniqueID const& getEndPinEntity() const;

    MCAPI ::RopePointsRef getPoints(uint64 index);
#endif

    MCAPI void initialize(::RopeParams const& params, uint64 initialRopeCount);

    MCAPI void initializePins(::Vec3 const& startPin, ::Vec3 const& endPin);

    MCAPI bool isCut() const;

    MCAPI bool isDestroyed() const;

    MCAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);

#ifdef LL_PLAT_C
    MCAPI void setRopeCount(uint64 ropeCount);

    MCFOLD void storeEndPinEntity(::ActorUniqueID const& end);

    MCAPI void updatePins(uint64 ropeIndex, ::Vec3 const& startPin, ::Vec3 const& endPin);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& sEnabled();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
