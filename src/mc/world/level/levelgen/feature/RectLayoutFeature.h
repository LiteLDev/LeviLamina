#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class RectLayoutFeature : public ::IFeature {
public:
    // RectLayoutFeature inner types declare
    // clang-format off
    struct FeatureArea;
    // clang-format on

    // RectLayoutFeature inner types define
    struct FeatureArea {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureRef;
        ::ll::TypedStorage<4, 4, int>                    mX;
        ::ll::TypedStorage<4, 4, int>                    mY;
        ::ll::TypedStorage<4, 4, int>                    mWidth;
        ::ll::TypedStorage<4, 4, int>                    mHeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RectLayoutFeature::FeatureArea>> mFeatureAreaCollection;
    ::ll::TypedStorage<4, 4, float>                                            mPercentageEmptySpace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    virtual ~RectLayoutFeature() /*override*/ = default;
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
