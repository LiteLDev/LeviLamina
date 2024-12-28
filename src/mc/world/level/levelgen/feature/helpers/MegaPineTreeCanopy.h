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

class MegaPineTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk4cda19;
    ::ll::UntypedStorage<4, 4>   mUnk19699b;
    ::ll::UntypedStorage<4, 4>   mUnk9a7248;
    ::ll::UntypedStorage<4, 4>   mUnk91acb7;
    ::ll::UntypedStorage<8, 184> mUnk63648c;
    // NOLINTEND

public:
    // prevent constructor by default
    MegaPineTreeCanopy& operator=(MegaPineTreeCanopy const&);
    MegaPineTreeCanopy(MegaPineTreeCanopy const&);
    MegaPineTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MegaPineTreeCanopy() /*override*/;

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
