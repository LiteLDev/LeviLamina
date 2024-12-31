#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
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
        ::ll::UntypedStorage<8, 24>  mUnk1490ae;
        ::ll::UntypedStorage<8, 216> mUnk3ca238;
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConditionalListFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConditionalListFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
