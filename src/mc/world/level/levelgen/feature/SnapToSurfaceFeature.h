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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SnapToSurfaceFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SnapToSurfaceFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

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
          _findSnapPos(class IBlockWorldGenAPI&, class BlockPos const&, ::SnapToSurfaceFeature::Surface) const;

    // NOLINTEND
};
