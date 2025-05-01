#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NoSurfaceOreFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk7a39e3;
    ::ll::UntypedStorage<8, 184> mUnkd47633;
    ::ll::UntypedStorage<8, 184> mUnkcdc6eb;
    ::ll::UntypedStorage<8, 184> mUnk480c75;
    // NOLINTEND

public:
    // prevent constructor by default
    NoSurfaceOreFeature& operator=(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 0
    virtual ~NoSurfaceOreFeature() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
