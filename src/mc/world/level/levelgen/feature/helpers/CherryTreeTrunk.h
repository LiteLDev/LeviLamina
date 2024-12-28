#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk3fe2aa;
    ::ll::UntypedStorage<4, 4>   mUnkc38599;
    ::ll::UntypedStorage<8, 24>  mUnk746501;
    ::ll::UntypedStorage<8, 24>  mUnk4885d6;
    ::ll::UntypedStorage<4, 8>   mUnkb9269c;
    ::ll::UntypedStorage<4, 8>   mUnk5e2d08;
    ::ll::UntypedStorage<4, 8>   mUnk25263b;
    ::ll::UntypedStorage<8, 8>   mUnkc7acc9;
    // NOLINTEND

public:
    // prevent constructor by default
    CherryTreeTrunk& operator=(CherryTreeTrunk const&);
    CherryTreeTrunk(CherryTreeTrunk const&);
    CherryTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherryTreeTrunk() /*override*/;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
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
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPos _generateBranch(
        ::IBlockWorldGenAPI&            target,
        ::Block const&                  trunkBlock,
        ::Block const&                  sidewaysTrunkBlock,
        ::Random&                       random,
        int                             treeHeight,
        ::BlockPos                      origin,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos                      branchDirection,
        int                             offsetFromOrigin,
        bool                            middleContinuesUpwards
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
