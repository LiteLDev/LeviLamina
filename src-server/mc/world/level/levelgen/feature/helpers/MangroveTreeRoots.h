#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeRoot.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots : public ::ITreeRoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMaxRootWidth;
    ::ll::TypedStorage<4, 4, int> mMaxRootLength;
    ::ll::TypedStorage<4, 8, ::IntRange> mYOffset;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mAboveRootBlockChance;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mRootBlockDescriptor;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mAboveRootBlockDescriptor;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mMuddyRootBlockDescriptor;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mMudBlockDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mRootsMayGrowThrough;
    ::ll::TypedStorage<8, 208, ::TreeHelper::AttachableDecoration> mDecoration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeRoots() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeRoots(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int trunkHeight, ::RenderParams&, ::TreeHelper::TreeParams const& treeParams) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canPlaceRoot(::IBlockWorldGenAPI& target, ::BlockPos const& pos) const;

    MCAPI void _placeRoot(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::std::vector<::BlockPos> _potentialRootPositions(::BlockPos const& pos, uchar prevDir, ::Random& random, ::BlockPos const& origin) const;

    MCAPI bool _simulateRoots(::IBlockWorldGenAPI& target, ::Random& random, ::BlockPos const& rootPos, ::BlockPos const& newOrigin, uchar dir, ::std::vector<::BlockPos>* rootPositions, int layer, ::TreeHelper::TreeParams const& treeParams) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeRoots(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int trunkHeight, ::RenderParams&, ::TreeHelper::TreeParams const& treeParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
