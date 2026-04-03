#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RoofedTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mHeight;
    ::ll::TypedStorage<4, 4, int>                 mCoreWidth;
    ::ll::TypedStorage<1, 1, bool>                mUseParsedCoreWidth;
    ::ll::TypedStorage<4, 4, int>                 mOuterRadius;
    ::ll::TypedStorage<4, 4, int>                 mInnerRadius;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mLeavesBlockDescriptor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RoofedTreeCanopy() /*override*/ = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
