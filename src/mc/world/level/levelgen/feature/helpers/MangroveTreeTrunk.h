#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mBaseHeight;
    ::ll::TypedStorage<4, 4, int>                                  mTrunkWidth;
    ::ll::TypedStorage<4, 4, int>                                  mHeightRandA;
    ::ll::TypedStorage<4, 4, int>                                  mHeightRandB;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mBranchLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mBranchSteps;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                 mBranchChance;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mTrunkBlockDescriptor;
    ::ll::TypedStorage<8, 224, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                  mHeightIntervals;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MangroveTreeTrunk() /*override*/ = default;

    virtual int getTreeHeight(::Random& random) const /*override*/;

    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
