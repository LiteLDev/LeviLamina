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

class RandomSpreadTreeCanopy : public ::ITreeCanopy {
public:
    // RandomSpreadTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // RandomSpreadTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnkcfe7ff;
        ::ll::UntypedStorage<4, 4>   mUnk732e3f;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WeightedBlockReference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk616e41;
    ::ll::UntypedStorage<4, 8>  mUnkcb02c6;
    ::ll::UntypedStorage<4, 4>  mUnke19657;
    ::ll::UntypedStorage<8, 24> mUnk654fad;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSpreadTreeCanopy& operator=(RandomSpreadTreeCanopy const&);
    RandomSpreadTreeCanopy(RandomSpreadTreeCanopy const&);
    RandomSpreadTreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomSpreadTreeCanopy() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $placeCanopy(
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
