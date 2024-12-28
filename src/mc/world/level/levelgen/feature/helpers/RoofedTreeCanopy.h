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

class RoofedTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk92d4fc;
    ::ll::UntypedStorage<4, 4>   mUnk451c2d;
    ::ll::UntypedStorage<4, 4>   mUnkf2d370;
    ::ll::UntypedStorage<4, 4>   mUnk630577;
    ::ll::UntypedStorage<8, 184> mUnkd2261a;
    // NOLINTEND

public:
    // prevent constructor by default
    RoofedTreeCanopy& operator=(RoofedTreeCanopy const&);
    RoofedTreeCanopy(RoofedTreeCanopy const&);
    RoofedTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RoofedTreeCanopy() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeCanopy(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&, ::TreeHelper::TreeParams const&, ::std::vector<::BlockPos> const&)
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
    $placeCanopy(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&, ::TreeHelper::TreeParams const&, ::std::vector<::BlockPos> const&)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
