#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Rope;
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWaveApplied;
    ::ll::TypedStorage<8, 24, ::std::vector<::Rope>> mRopes;
    ::ll::TypedStorage<8, 8, uint64> mCutRenderNode;
    ::ll::TypedStorage<8, 8, uint64> mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEndPinEntity;
    ::ll::TypedStorage<4, 4, ::std::atomic_flag> mTicking;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mRenderMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _cacheColliders(::BlockSource& region);

    MCNAPI void _tickWaves();

    MCNAPI void _updateRenderPoints();

    MCNAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& sEnabled();
    // NOLINTEND

};
