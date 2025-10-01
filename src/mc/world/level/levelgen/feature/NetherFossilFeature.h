#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class NetherFossilFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk21717a;
    ::ll::UntypedStorage<1, 1>  mUnkaf6255;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherFossilFeature& operator=(NetherFossilFeature const&);
    NetherFossilFeature(NetherFossilFeature const&);
    NetherFossilFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~NetherFossilFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _tryPlaceDriedGhastBlock(
        ::BlockSource&    region,
        ::BlockPos const& aabbMin,
        ::BlockPos const& aabbMax,
        int               fossilHeight,
        ::Random&         random
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::std::string const[]> STRUCTURE_LOCATION_FOSSIL();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
