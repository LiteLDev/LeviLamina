#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class BeardAndShaverFeature : public ::IFeature {
public:
    // prevent constructor by default
    BeardAndShaverFeature& operator=(BeardAndShaverFeature const&);
    BeardAndShaverFeature(BeardAndShaverFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeardAndShaverFeature@@UEAA@XZ
    virtual ~BeardAndShaverFeature() = default;

    // vIndex: 1, symbol:
    // ?place@BeardAndShaverFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0BeardAndShaverFeature@@QEAA@XZ
    MCAPI BeardAndShaverFeature();

    // NOLINTEND
};
