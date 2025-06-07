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

class MangroveTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk78fa10;
    ::ll::UntypedStorage<4, 4>   mUnkaa8a70;
    ::ll::UntypedStorage<4, 4>   mUnk4f02dd;
    ::ll::UntypedStorage<4, 4>   mUnk462300;
    ::ll::UntypedStorage<4, 8>   mUnka4a1d8;
    ::ll::UntypedStorage<4, 8>   mUnk737bc2;
    ::ll::UntypedStorage<4, 12>  mUnk5c917f;
    ::ll::UntypedStorage<8, 184> mUnk89830f;
    ::ll::UntypedStorage<8, 208> mUnk2307c2;
    ::ll::UntypedStorage<8, 24>  mUnkfe7711;
    // NOLINTEND

public:
    // prevent constructor by default
    MangroveTreeTrunk& operator=(MangroveTreeTrunk const&);
    MangroveTreeTrunk(MangroveTreeTrunk const&);
    MangroveTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeTrunk() /*override*/ = default;

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
    MCNAPI void _placeBranch(
        ::IBlockWorldGenAPI&       target,
        ::std::vector<::BlockPos>* canopyAttachmentPositions,
        ::Random&                  random,
        int                        treeHeight,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
        ::BlockPos&                     logPos,
        int                             currentHeight,
        uchar                           branchDir,
        int                             branchPos,
        int                             branchSteps,
        ::Block const*                  trunkBlock
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getTreeHeight(::Random& random) const;

    MCNAPI ::std::optional<::BlockPos> $placeTrunk(
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
