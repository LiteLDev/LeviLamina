#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopyWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeRootWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunkWrapper.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/TreeParams.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ITreeFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::TreeHelper::TreeParams> mTreeParams;
    ::ll::TypedStorage<8, 8, ::ITreeTrunkWrapper>        mTrunk;
    ::ll::TypedStorage<8, 8, ::ITreeCanopyWrapper>       mCanopy;
    ::ll::TypedStorage<8, 8, ::ITreeRootWrapper>         mRoots;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITreeFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> _place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
