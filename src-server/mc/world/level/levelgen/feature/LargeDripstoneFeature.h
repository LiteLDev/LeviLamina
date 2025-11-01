#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class Random;
namespace DripstoneUtils { class WindOffsetter; }
// clang-format on

class LargeDripstoneFeature : public ::IFeature {
public:
    // LargeDripstoneFeature inner types declare
    // clang-format off
    class LargeDripstone;
    // clang-format on
    
    // LargeDripstoneFeature inner types define
    class LargeDripstone {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mRoot;
        ::ll::TypedStorage<1, 1, bool const> mPointingUp;
        ::ll::TypedStorage<4, 4, int> mRadius;
        ::ll::TypedStorage<4, 4, float const> mBluntness;
        ::ll::TypedStorage<4, 4, float const> mScale;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(::IBlockWorldGenAPI& target, ::DripstoneUtils::WindOffsetter const& wind);
    
        MCAPI void placeBlocks(::IBlockWorldGenAPI& target, ::Random& random, ::DripstoneUtils::WindOffsetter const& wind) const;
        // NOLINTEND
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 0
    virtual ~LargeDripstoneFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
