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
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>    mRopeMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void addWave(uint64 index, ::RopeWave&& wave);
#endif

    MCAPI void initialize(::RopeParams const& params, uint64 initialRopeCount);

    MCAPI void initializePins(::Vec3 const& startPin, ::Vec3 const& endPin);

    MCAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);

#ifdef LL_PLAT_C
    MCAPI void setRopeCount(uint64 ropeCount);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static bool& sEnabled();
#endif
    // NOLINTEND
};
