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

class SimpleTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8fa423;
    ::ll::UntypedStorage<4, 8>   mUnk51c143;
    ::ll::UntypedStorage<4, 8>   mUnk3b03ea;
    ::ll::UntypedStorage<8, 184> mUnk9cbbae;
    ::ll::UntypedStorage<8, 208> mUnked66e3;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleTreeTrunk& operator=(SimpleTreeTrunk const&);
    SimpleTreeTrunk(SimpleTreeTrunk const&);
    SimpleTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleTreeTrunk() /*override*/ = default;

    virtual int getTreeHeight(::Random& random) const /*override*/;

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
