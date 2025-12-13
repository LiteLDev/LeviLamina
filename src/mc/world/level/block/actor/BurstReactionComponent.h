#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class BurstReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>  mParticleType;
    ::ll::TypedStorage<8, 48, ::HashedString> mNewParticleType;
    ::ll::TypedStorage<4, 12, ::Vec3>         mDims;
    ::ll::TypedStorage<4, 12, ::Vec3>         mDirRange;
    ::ll::TypedStorage<4, 4, int>             mCount;
    ::ll::TypedStorage<4, 4, int>             mDataMin;
    ::ll::TypedStorage<4, 4, int>             mDataMax;
    ::ll::TypedStorage<1, 1, bool>            mDirOneWay;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BurstReactionComponent() /*override*/ = default;

    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
