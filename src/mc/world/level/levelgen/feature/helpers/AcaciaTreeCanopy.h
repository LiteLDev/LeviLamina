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

class AcaciaTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk327a62;
    ::ll::UntypedStorage<1, 1>   mUnk4b9352;
    ::ll::UntypedStorage<8, 184> mUnkfeff36;
    // NOLINTEND

public:
    // prevent constructor by default
    AcaciaTreeCanopy& operator=(AcaciaTreeCanopy const&);
    AcaciaTreeCanopy(AcaciaTreeCanopy const&);
    AcaciaTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcaciaTreeCanopy() /*override*/;

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
