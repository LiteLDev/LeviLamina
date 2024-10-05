#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/levelgen/synth/AquiferNoises.h"
#include "mc/world/level/levelgen/synth/OverworldNoises3d.h"
#include "mc/world/level/levelgen/v1/SurfaceLevelCache.h"

class Aquifer {
public:
    // Aquifer inner types declare
    // clang-format off
    struct FluidSample;
    // clang-format on

    // Aquifer inner types define
    struct FluidSample {
        enum FluidType : schar {};

        BlockPos  pos;   // this+0x0
        int       level; // this+0xC
        FluidType type;  // this+0x10
    };

    AquiferNoises const&     mAquiferNoises;             // this+0x0
    OverworldNoises3d const& mOverworldNoises3d;         // this+0x8
    SurfaceLevelCache const& mSurfaceLevelCache;         // this+0x10
    int                      mSeaLevel;                  // this+0x18
    int                      mLastFluidLevel;            // this+0x1C
    float                    mLastBarrier;               // this+0x20
    FluidSample::FluidType   mFluidType;                 // this+0x24
    bool                     mShouldScheduleFluidUpdate; // this+0x25
    BlockPos                 mMinGrid;                   // this+0x28
    BlockPos                 mGridSize;                  // this+0x34
    std::vector<FluidSample> mFluidLevelCache;           // this+0x40
    Block const&             mWaterBlock;                // this+0x58 Aquifer::getLastFluidBlockType
    Block const&             mLavaBlock;                 // this+0x60
    Block const&             mFlowingWaterBlock;         // this+0x68
    Block const&             mFlowingLavaBlock;          // this+0x70

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&);
    Aquifer(Aquifer const&);
    Aquifer();

public:
    // NOLINTBEGIN
    MCAPI Aquifer(
        class ChunkPos const&           chunkPos,
        class AquiferNoises const&      aquiferNoises,
        struct OverworldNoises3d const& overworldNoises,
        class SurfaceLevelCache const&  surfaceLevelCache,
        int                             minHeight,
        int                             levelGenHeight,
        int                             seaLevel
    );

    MCAPI void computeAt(class BlockPos const& pos);

    MCAPI float getLastBarrier() const;

    MCAPI class Block const* getLastFluidBlockType(bool) const;

    MCAPI int getLastFluidLevel() const;

    MCAPI bool shouldScheduleFluidUpdate() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<std::pair<int, int>, 13> const chunkOffset;

    // NOLINTEND
};
