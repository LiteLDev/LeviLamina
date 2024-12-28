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

class FallenTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnkff52c7;
    ::ll::UntypedStorage<4, 8>   mUnk2fe6cb;
    ::ll::UntypedStorage<4, 8>   mUnk318b99;
    ::ll::UntypedStorage<8, 184> mUnk80a26d;
    ::ll::UntypedStorage<8, 24>  mUnk99fb8f;
    ::ll::UntypedStorage<8, 208> mUnk4d2496;
    // NOLINTEND

public:
    // prevent constructor by default
    FallenTreeTrunk& operator=(FallenTreeTrunk const&);
    FallenTreeTrunk(FallenTreeTrunk const&);
    FallenTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FallenTreeTrunk() /*override*/;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeTrunk(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int treeHeight, ::RenderParams& renderParams, ::TreeHelper::TreeParams const& treeParams, ::ITreeCanopy const*)
        const /*override*/;
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

    MCAPI ::std::optional<::BlockPos>
    $placeTrunk(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int treeHeight, ::RenderParams& renderParams, ::TreeHelper::TreeParams const& treeParams, ::ITreeCanopy const*)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
