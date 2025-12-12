#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SearchFeature : public ::IFeature {
public:
    // SearchFeature inner types define
    enum class SearchAxis : int {
        NegativeX = 0,
        PositiveX = 1,
        NegativeY = 2,
        PositiveY = 3,
        NegativeZ = 4,
        PositiveZ = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk51b175;
    ::ll::UntypedStorage<4, 24> mUnk9a5d3d;
    ::ll::UntypedStorage<4, 4>  mUnk8f538b;
    ::ll::UntypedStorage<4, 4>  mUnk9c44bb;
    // NOLINTEND

public:
    // prevent constructor by default
    SearchFeature& operator=(SearchFeature const&);
    SearchFeature(SearchFeature const&);
    SearchFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SearchFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
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
