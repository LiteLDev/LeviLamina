#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk : public ::ITreeTrunk {
public:
    // FancyTreeTrunk inner types declare
    // clang-format off
    class FoliageCoords;
    // clang-format on
    
    // FancyTreeTrunk inner types define
    class FoliageCoords : public ::BlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBranchBase;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mBaseHeight;
    ::ll::TypedStorage<4, 4, int> mHeightVariance;
    ::ll::TypedStorage<4, 4, int> mTrunkWidth;
    ::ll::TypedStorage<4, 4, float> mHeightScale;
    ::ll::TypedStorage<4, 4, float> mBranchSlope;
    ::ll::TypedStorage<4, 4, float> mBranchDensity;
    ::ll::TypedStorage<4, 4, float> mBranchAltitudeFactor;
    ::ll::TypedStorage<4, 4, float> mFoliageAltitudeFactor;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mTrunkBlockDescriptor;
    ::ll::TypedStorage<4, 4, float> mWidthScale;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FancyTreeTrunk() /*override*/ = default;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> placeTrunk(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int treeHeight, ::RenderParams& renderParams, ::TreeHelper::TreeParams const& treeParams, ::ITreeCanopy const* canopy) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _checkLine(::IBlockWorldGenAPI& target, ::BlockPos const& startPos, ::BlockPos const& endPos, ::TreeHelper::TreeParams const& treeParams) const;

    MCAPI void _placeLimb(::IBlockWorldGenAPI& target, ::BlockPos const& startPos, ::BlockPos const& endPos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, int treeHeight, ::RenderParams& renderParams, ::TreeHelper::TreeParams const& treeParams, ::ITreeCanopy const* canopy) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
