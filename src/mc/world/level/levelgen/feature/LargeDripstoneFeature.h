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
        ::ll::UntypedStorage<4, 12> mUnk1918c4;
        ::ll::UntypedStorage<1, 1>  mUnk398797;
        ::ll::UntypedStorage<4, 4>  mUnkb24ebd;
        ::ll::UntypedStorage<4, 4>  mUnka18da9;
        ::ll::UntypedStorage<4, 4>  mUnk22ed9f;
        // NOLINTEND

    public:
        // prevent constructor by default
        LargeDripstone& operator=(LargeDripstone const&);
        LargeDripstone(LargeDripstone const&);
        LargeDripstone();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(
            ::IBlockWorldGenAPI&                   target,
            ::DripstoneUtils::WindOffsetter const& wind
        );

        MCAPI void
        placeBlocks(::IBlockWorldGenAPI& target, ::Random& random, ::DripstoneUtils::WindOffsetter const& wind) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    LargeDripstoneFeature& operator=(LargeDripstoneFeature const&);
    LargeDripstoneFeature(LargeDripstoneFeature const&);
    LargeDripstoneFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&) const /*override*/;

    // vIndex: 0
    virtual ~LargeDripstoneFeature() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
