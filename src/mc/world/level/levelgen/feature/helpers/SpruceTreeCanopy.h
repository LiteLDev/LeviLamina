#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
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

class SpruceTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>          mLowerOffset;
    ::ll::TypedStorage<4, 8, ::IntRange>          mUpperOffset;
    ::ll::TypedStorage<4, 8, ::IntRange>          mRadius;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mLeafBlockDescriptor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpruceTreeCanopy() /*override*/ = default;

    // vIndex: 1
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
