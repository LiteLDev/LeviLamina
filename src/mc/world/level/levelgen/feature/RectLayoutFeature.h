#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<8, 24> mUnk48c921;
        ::ll::UntypedStorage<4, 4>  mUnkf431fe;
        ::ll::UntypedStorage<4, 4>  mUnk4931ae;
        ::ll::UntypedStorage<4, 4>  mUnka34aac;
        ::ll::UntypedStorage<4, 4>  mUnkd456f6;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureArea& operator=(FeatureArea const&);
        FeatureArea(FeatureArea const&);
        FeatureArea();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk525c6f;
    ::ll::UntypedStorage<4, 4>  mUnk27c366;
    // NOLINTEND

public:
    // prevent constructor by default
    RectLayoutFeature& operator=(RectLayoutFeature const&);
    RectLayoutFeature(RectLayoutFeature const&);
    RectLayoutFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    virtual ~RectLayoutFeature() /*override*/ = default;
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
