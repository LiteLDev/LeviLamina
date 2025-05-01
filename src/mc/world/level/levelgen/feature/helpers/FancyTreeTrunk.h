#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
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
        ::ll::UntypedStorage<4, 4> mUnkba726f;
        // NOLINTEND

    public:
        // prevent constructor by default
        FoliageCoords& operator=(FoliageCoords const&);
        FoliageCoords(FoliageCoords const&);
        FoliageCoords();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnka29a0e;
    ::ll::UntypedStorage<4, 4>   mUnkd084db;
    ::ll::UntypedStorage<4, 4>   mUnkcb2202;
    ::ll::UntypedStorage<4, 4>   mUnk6a3261;
    ::ll::UntypedStorage<4, 4>   mUnkdf86e9;
    ::ll::UntypedStorage<4, 4>   mUnk9e7746;
    ::ll::UntypedStorage<4, 4>   mUnkfc9b48;
    ::ll::UntypedStorage<4, 4>   mUnkab8ff5;
    ::ll::UntypedStorage<8, 184> mUnk5e329f;
    ::ll::UntypedStorage<4, 4>   mUnkbc7830;
    // NOLINTEND

public:
    // prevent constructor by default
    FancyTreeTrunk& operator=(FancyTreeTrunk const&);
    FancyTreeTrunk(FancyTreeTrunk const&);
    FancyTreeTrunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FancyTreeTrunk() /*override*/ = default;

    // vIndex: 2
    virtual int getTreeHeight(::Random& random) const /*override*/;

    // vIndex: 1
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
    // member functions
    // NOLINTBEGIN
    MCNAPI int _checkLine(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               startPos,
        ::BlockPos const&               endPos,
        ::TreeHelper::TreeParams const& treeParams
    ) const;

    MCNAPI void _placeLimb(::IBlockWorldGenAPI& target, ::BlockPos const& startPos, ::BlockPos const& endPos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
