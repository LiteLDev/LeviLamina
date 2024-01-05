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
        // symbol: ?getHeightAtRadius@LargeDripstone@LargeDripstoneFeature@@QEBAHM@Z
        MCAPI int getHeightAtRadius(float) const;

        // symbol:
        // ?moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary@LargeDripstone@LargeDripstoneFeature@@QEAA_NAEAVIBlockWorldGenAPI@@AEBVWindOffsetter@DripstoneUtils@@@Z
        MCAPI bool
        moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(class IBlockWorldGenAPI& target, class DripstoneUtils::WindOffsetter const&);

        // symbol:
        // ?placeBlocks@LargeDripstone@LargeDripstoneFeature@@QEBAXAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVWindOffsetter@DripstoneUtils@@@Z
        MCAPI void
        placeBlocks(class IBlockWorldGenAPI& target, class Random& random, class DripstoneUtils::WindOffsetter const&)
            const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LargeDripstoneFeature& operator=(LargeDripstoneFeature const&);
    LargeDripstoneFeature(LargeDripstoneFeature const&);
    LargeDripstoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LargeDripstoneFeature@@UEAA@XZ
    virtual ~LargeDripstoneFeature() = default;

    // vIndex: 1, symbol:
    // ?place@LargeDripstoneFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND
};
