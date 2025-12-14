#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/phys/AABB.h"

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
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>      mFeatureRef;
    ::ll::TypedStorage<4, 24, ::AABB>                     mSearchVolume;
    ::ll::TypedStorage<4, 4, ::SearchFeature::SearchAxis> mSearchAxis;
    ::ll::TypedStorage<4, 4, int>                         mRequiredSuccesses;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SearchFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
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
