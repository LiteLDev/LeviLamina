#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk483d8f;
    ::ll::UntypedStorage<4, 4>   mUnkf36806;
    ::ll::UntypedStorage<4, 4>   mUnkcb39a8;
    ::ll::UntypedStorage<4, 8>   mUnk5a03d6;
    ::ll::UntypedStorage<4, 4>   mUnk706496;
    ::ll::UntypedStorage<4, 4>   mUnkd5a864;
    ::ll::UntypedStorage<4, 4>   mUnkc3e2d9;
    ::ll::UntypedStorage<8, 184> mUnk58f724;
    ::ll::UntypedStorage<8, 8>   mUnkc60f7b;
    ::ll::UntypedStorage<8, 208> mUnkd46268;
    ::ll::UntypedStorage<8, 24>  mUnk11dbbd;
    // NOLINTEND

public:
    // prevent constructor by default
    MegaTreeTrunk& operator=(MegaTreeTrunk const&);
    MegaTreeTrunk(MegaTreeTrunk const&);
    MegaTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MegaTreeTrunk() /*override*/;

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
    MCAPI bool _prepareSpawn(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        int                             treeHeight,
        ::TreeHelper::TreeParams const& treeParams
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
