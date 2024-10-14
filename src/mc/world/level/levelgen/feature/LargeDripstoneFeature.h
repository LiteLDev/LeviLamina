#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
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
        // prevent constructor by default
        LargeDripstone& operator=(LargeDripstone const&);
        LargeDripstone(LargeDripstone const&);
        LargeDripstone();

    public:
        // NOLINTBEGIN
        MCAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(
            class IBlockWorldGenAPI&                   target,
            class DripstoneUtils::WindOffsetter const& wind
        );

        MCAPI void placeBlocks(
            class IBlockWorldGenAPI&                   target,
            class Random&                              random,
            class DripstoneUtils::WindOffsetter const& wind
        ) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LargeDripstoneFeature& operator=(LargeDripstoneFeature const&);
    LargeDripstoneFeature(LargeDripstoneFeature const&);
    LargeDripstoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LargeDripstoneFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos>
    place$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // NOLINTEND
};
