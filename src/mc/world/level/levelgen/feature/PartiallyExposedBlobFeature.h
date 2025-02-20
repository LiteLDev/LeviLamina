#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class PartiallyExposedBlobFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkb31f0c;
    ::ll::UntypedStorage<4, 4>   mUnk603a72;
    ::ll::UntypedStorage<4, 4>   mUnk32f433;
    ::ll::UntypedStorage<8, 184> mUnke9275c;
    // NOLINTEND

public:
    // prevent constructor by default
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 0
    virtual ~PartiallyExposedBlobFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canBePlaced(::IBlockWorldGenAPI const& target, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
