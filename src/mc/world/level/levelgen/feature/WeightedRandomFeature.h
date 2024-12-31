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

class WeightedRandomFeature : public ::IFeature {
public:
    // WeightedRandomFeature inner types declare
    // clang-format off
    struct WeightedFeatureReference;
    // clang-format on

    // WeightedRandomFeature inner types define
    struct WeightedFeatureReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk28dbe3;
        ::ll::UntypedStorage<4, 4>  mUnkc6f26e;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedFeatureReference& operator=(WeightedFeatureReference const&);
        WeightedFeatureReference(WeightedFeatureReference const&);
        WeightedFeatureReference();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcbe588;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedRandomFeature& operator=(WeightedRandomFeature const&);
    WeightedRandomFeature(WeightedRandomFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeightedRandomFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeightedRandomFeature();
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
