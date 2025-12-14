#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeCanopy : public ::ITreeCanopy {
public:
    // MangroveTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // MangroveTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 184, ::BlockDescriptor> mBlockDescriptor;
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBlockReference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                          mMinOffset;
    ::ll::TypedStorage<4, 4, int>                                                          mMaxOffset;
    ::ll::TypedStorage<4, 4, int>                                                          mMinWidth;
    ::ll::TypedStorage<4, 4, float>                                                        mRiseInv;
    ::ll::TypedStorage<4, 4, int>                                                          mRun;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                   mCanopyHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                   mCanopyRadius;
    ::ll::TypedStorage<4, 4, int>                                                          mLeafPlacementAttempts;
    ::ll::TypedStorage<8, 24, ::std::vector<::MangroveTreeCanopy::WeightedBlockReference>> mLeavesBlockDescriptors;
    ::ll::TypedStorage<8, 208, ::TreeHelper::AttachableDecoration>                         mCanopyDecoration;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>                                          mHangingBlockDescriptor;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                                         mHangingBlockPlacementChance;
    ::ll::TypedStorage<4, 4, int>                                                          mRequiredEmptyBlocks;
    ::ll::TypedStorage<4, 4, int>                                                          mExclusionRadiusXZ;
    ::ll::TypedStorage<4, 4, int>                                                          mExclusionRadiusY;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MangroveTreeCanopy() /*override*/ = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
