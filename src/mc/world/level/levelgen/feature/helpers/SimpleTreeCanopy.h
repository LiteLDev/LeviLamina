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

class SimpleTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkbe72f3;
    ::ll::UntypedStorage<4, 4>   mUnke8e1c3;
    ::ll::UntypedStorage<4, 4>   mUnk9c64a9;
    ::ll::UntypedStorage<4, 4>   mUnkeac94e;
    ::ll::UntypedStorage<4, 4>   mUnkda9dab;
    ::ll::UntypedStorage<8, 184> mUnka9e656;
    ::ll::UntypedStorage<8, 208> mUnkff10ab;
    ::ll::UntypedStorage<8, 24>  mUnkb91e20;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleTreeCanopy& operator=(SimpleTreeCanopy const&);
    SimpleTreeCanopy(SimpleTreeCanopy const&);
    SimpleTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleTreeCanopy() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
