#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/synth/AquiferNoises.h"
#include "mc/world/level/levelgen/synth/OverworldNoises3d.h"
#include "mc/world/level/levelgen/v1/SurfaceLevelCache.h"
#include "mc/world/level/block/Block.h"

class Aquifer {
public:
    // Aquifer inner types declare
    AquiferNoises*     mAquiferNoises;             // 0
    OverworldNoises3d* mOverworldNoises3d;         // 8
    SurfaceLevelCache* mSurfaceLevelCache;         // 16
    int                seaLevel;                   // 24
    int                mLastFluidLevel;            // 28
    float              mLastBarrier;               // 32
    char               filler1[1];                 // 36
    bool               mShouldScheduleFluidUpdate; // 37
    char               filler2[50];                // 38
    Block*             mWaterBlock;                // 88
    Block*             mLavaBlock;                 // 96
    Block*             mFlowingWaterBlock;         // 104
    Block*             mFlowingLavaBlock;          // 112
    // clang-format off
    struct FluidSample;
    // clang-format on

    // Aquifer inner types define
    struct FluidSample {
    public:
        char filler[20];
    };

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&);
    Aquifer(Aquifer const&);
    Aquifer();

public:
    // NOLINTBEGIN
    // symbol: ??0Aquifer@@QEAA@AEBVChunkPos@@AEBVAquiferNoises@@AEBUOverworldNoises3d@@AEBVSurfaceLevelCache@@HHH@Z
    MCAPI Aquifer(
        class ChunkPos const& chunkPos,
        class AquiferNoises const&,
        struct OverworldNoises3d const&,
        class SurfaceLevelCache const&,
        int,
        int,
        int seaLevel
    );

    // symbol: ?computeAt@Aquifer@@QEAAXAEBVBlockPos@@@Z
    MCAPI void computeAt(class BlockPos const&);

    // symbol: ?getLastBarrier@Aquifer@@QEBAMXZ
    MCAPI float getLastBarrier() const;

    // symbol: ?getLastFluidBlockType@Aquifer@@QEBAPEBVBlock@@_N@Z
    MCAPI class Block const* getLastFluidBlockType(bool) const;

    // symbol: ?getLastFluidLevel@Aquifer@@QEBAHXZ
    MCAPI int getLastFluidLevel() const;

    // symbol: ?shouldScheduleFluidUpdate@Aquifer@@QEBA_NXZ
    MCAPI bool shouldScheduleFluidUpdate() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_computeAquifer@Aquifer@@AEBA?AUFluidSample@1@AEBVBlockPos@@@Z
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const&) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?chunkOffset@Aquifer@@0V?$array@U?$pair@HH@std@@$0N@@std@@B
    MCAPI static std::array<std::pair<int, int>, 13> const chunkOffset;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $chunkOffset() { return chunkOffset; }

    // NOLINTEND
};
