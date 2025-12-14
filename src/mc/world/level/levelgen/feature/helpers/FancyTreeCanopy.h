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

class FancyTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mHeight;
    ::ll::TypedStorage<4, 4, int>                 mRadius;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mLeavesBlockDescriptor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FancyTreeCanopy() /*override*/ = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::std::vector<::BlockPos> const&
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
