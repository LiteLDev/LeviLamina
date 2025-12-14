#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
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

class SimpleTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mMinOffset;
    ::ll::TypedStorage<4, 4, int>                                  mMaxOffset;
    ::ll::TypedStorage<4, 4, int>                                  mMinWidth;
    ::ll::TypedStorage<4, 4, float>                                mRiseInv;
    ::ll::TypedStorage<4, 4, int>                                  mRun;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>                  mLeafBlockDescriptor;
    ::ll::TypedStorage<8, 208, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChanceInformation>>  mVariationChancePerLayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleTreeCanopy() /*override*/ = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::Random&                        random,
        ::RenderParams&                  renderParams,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::Random&                        random,
        ::RenderParams&                  renderParams,
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
