#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<4, 4>   mUnka466d0;
    ::ll::UntypedStorage<4, 4>   mUnk77c131;
    ::ll::UntypedStorage<8, 184> mUnk10ba30;
    // NOLINTEND

public:
    // prevent constructor by default
    FancyTreeCanopy& operator=(FancyTreeCanopy const&);
    FancyTreeCanopy(FancyTreeCanopy const&);
    FancyTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FancyTreeCanopy() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeCanopy(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const& treeParams, ::std::vector<::BlockPos> const&)
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
    MCAPI ::std::optional<::BlockPos>
    $placeCanopy(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const& treeParams, ::std::vector<::BlockPos> const&)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
