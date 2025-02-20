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
    ::ll::UntypedStorage<4, 4>  mUnkb70d1c;
    ::ll::UntypedStorage<8, 48> mUnka64ca9;
    ::ll::UntypedStorage<4, 12> mUnk8c8eff;
    ::ll::UntypedStorage<4, 12> mUnk84f5c1;
    ::ll::UntypedStorage<4, 4>  mUnkc46d85;
    ::ll::UntypedStorage<4, 4>  mUnkad6848;
    ::ll::UntypedStorage<4, 4>  mUnk7bb8bc;
    ::ll::UntypedStorage<1, 1>  mUnka41855;
    // NOLINTEND

public:
    // prevent constructor by default
    BurstReactionComponent& operator=(BurstReactionComponent const&);
    BurstReactionComponent(BurstReactionComponent const&);
    BurstReactionComponent();

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
