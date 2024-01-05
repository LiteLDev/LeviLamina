#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface {};

public:
    // prevent constructor by default
    SnapToSurfaceFeature& operator=(SnapToSurfaceFeature const&);
    SnapToSurfaceFeature(SnapToSurfaceFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SnapToSurfaceFeature@@UEAA@XZ
    virtual ~SnapToSurfaceFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SnapToSurfaceFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0SnapToSurfaceFeature@@QEAA@XZ
    MCAPI SnapToSurfaceFeature();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findSnapPos@SnapToSurfaceFeature@@AEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@W4Surface@1@@Z
    MCAPI std::optional<class BlockPos>
    _findSnapPos(class IBlockWorldGenAPI& target, class BlockPos const& pos, ::SnapToSurfaceFeature::Surface) const;

    // NOLINTEND
};
