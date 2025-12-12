#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ConditionalListFeature : public ::IFeature {
public:
    // ConditionalListFeature inner types declare
    // clang-format off
    struct FeatureExpressionNodePair;
    // clang-format on

    // ConditionalListFeature inner types define
    enum class EarlyOutScheme : int {
        ConditionSuccess = 0,
        PlacementSuccess = 1,
    };

    struct FeatureExpressionNodePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk1490ae;
        ::ll::UntypedStorage<8, 16> mUnk3ca238;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureExpressionNodePair& operator=(FeatureExpressionNodePair const&);
        FeatureExpressionNodePair(FeatureExpressionNodePair const&);
        FeatureExpressionNodePair();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8b5713;
    ::ll::UntypedStorage<4, 4>  mUnk184fb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalListFeature& operator=(ConditionalListFeature const&);
    ConditionalListFeature(ConditionalListFeature const&);
    ConditionalListFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConditionalListFeature() /*override*/ = default;

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
