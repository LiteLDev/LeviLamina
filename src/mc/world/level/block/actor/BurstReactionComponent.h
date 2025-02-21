#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class LabTableReaction;
class Vec3;
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
    // vIndex: 0
    virtual ~BurstReactionComponent() /*override*/ = default;

    // vIndex: 3
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BurstReactionComponent(
        ::ParticleType        type,
        ::Vec3 const&         dims,
        ::Vec3 const&         dirRange,
        int                   count,
        int                   dataMin,
        int                   dataMax,
        bool                  dirOneWay,
        ::HashedString const& newParticle
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ParticleType        type,
        ::Vec3 const&         dims,
        ::Vec3 const&         dirRange,
        int                   count,
        int                   dataMin,
        int                   dataMax,
        bool                  dirOneWay,
        ::HashedString const& newParticle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
