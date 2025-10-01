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

class MangroveTreeCanopy : public ::ITreeCanopy {
public:
    // MangroveTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // MangroveTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnk6f4d07;
        ::ll::UntypedStorage<4, 4>   mUnkb1e7ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBlockReference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk33e626;
    ::ll::UntypedStorage<4, 4>   mUnk3d0aa0;
    ::ll::UntypedStorage<4, 4>   mUnk337133;
    ::ll::UntypedStorage<4, 4>   mUnkd99217;
    ::ll::UntypedStorage<4, 4>   mUnk14288e;
    ::ll::UntypedStorage<4, 8>   mUnkaf334a;
    ::ll::UntypedStorage<4, 8>   mUnk6fe0ca;
    ::ll::UntypedStorage<4, 4>   mUnk810dd5;
    ::ll::UntypedStorage<8, 24>  mUnk5b7141;
    ::ll::UntypedStorage<8, 208> mUnkac3b4c;
    ::ll::UntypedStorage<8, 184> mUnk2e3967;
    ::ll::UntypedStorage<4, 12>  mUnk9d15bf;
    ::ll::UntypedStorage<4, 4>   mUnk6bf0cb;
    ::ll::UntypedStorage<4, 4>   mUnke5a713;
    ::ll::UntypedStorage<4, 4>   mUnkc0560e;
    // NOLINTEND

public:
    // prevent constructor by default
    MangroveTreeCanopy& operator=(MangroveTreeCanopy const&);
    MangroveTreeCanopy(MangroveTreeCanopy const&);
    MangroveTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeCanopy() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
