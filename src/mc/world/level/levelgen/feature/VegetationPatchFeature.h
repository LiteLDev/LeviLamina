#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class VegetationPatchFeature : public ::IFeature {
public:
    // VegetationPatchFeature inner types define
    enum class Surface : int {
        Ceiling = 0,
        Floor   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkd45ca8;
    ::ll::UntypedStorage<8, 184> mUnk114c24;
    ::ll::UntypedStorage<8, 24>  mUnkc4f4d7;
    ::ll::UntypedStorage<4, 4>   mUnk9ad8d0;
    ::ll::UntypedStorage<4, 8>   mUnk60f0ce;
    ::ll::UntypedStorage<4, 4>   mUnk2c0bc3;
    ::ll::UntypedStorage<4, 4>   mUnk801fe4;
    ::ll::UntypedStorage<4, 4>   mUnk94f872;
    ::ll::UntypedStorage<4, 8>   mUnkc946dc;
    ::ll::UntypedStorage<4, 4>   mUnk9b1729;
    ::ll::UntypedStorage<1, 1>   mUnk4d1077;
    // NOLINTEND

public:
    // prevent constructor by default
    VegetationPatchFeature& operator=(VegetationPatchFeature const&);
    VegetationPatchFeature(VegetationPatchFeature const&);
    VegetationPatchFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VegetationPatchFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isExposedDirection(::IBlockWorldGenAPI& target, ::BlockPos const& pos, uchar direction) const;

    MCAPI ::std::vector<::BlockPos>
    _placeGroundPatch(::IBlockWorldGenAPI& target, ::Random& random, ::BlockPos const& origin, int xRadius, int zRadius)
        const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
