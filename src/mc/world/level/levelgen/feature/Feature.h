#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
class WorldChangeTransaction;
// clang-format on

class Feature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mPlacerID;
    ::ll::TypedStorage<8, 8, ::WorldChangeTransaction*> mTransaction;
    // NOLINTEND

public:
    // prevent constructor by default
    Feature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Feature() /*override*/;

    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const = 0;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Feature(::Actor* placer);

    MCAPI bool _placeBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void _setManuallyPlaced(::Actor* placer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor* placer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
