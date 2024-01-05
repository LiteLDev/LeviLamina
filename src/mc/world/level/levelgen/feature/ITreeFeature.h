#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class ITreeFeature : public ::IFeature {
public:
    // prevent constructor by default
    ITreeFeature& operator=(ITreeFeature const&);
    ITreeFeature(ITreeFeature const&);
    ITreeFeature();

public:
    // NOLINTBEGIN
    // symbol: ??1ITreeFeature@@UEAA@XZ
    MCVAPI ~ITreeFeature();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_place@ITreeFeature@@IEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    MCAPI std::optional<class BlockPos> _place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
