#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/ExpressionNode.h"
#include "mc/world/level/ScatterParams.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/WeakStorageFeature.h"

struct BiomeDecorationFeature {
public:
    enum class CoordinateEvalOrder : int {
        xzy = 0x1,
        yxz = 0x2,
        yzx = 0x3,
        zxy = 0x4,
        zyx = 0x5,
    };

public:
    ScatterParams::CoordinateRange mX;                   // this+0x0
    ScatterParams::CoordinateRange mY;                   // this+0x1E8
    ScatterParams::CoordinateRange mZ;                   // this+0x3D0
    CoordinateEvalOrder            mCoordinateEvalOrder; // this+0x5B8
    ExpressionNode                 mScatterChance;       // this+0x5C0
    int                            mUnknown2;            // this+0x6A8
    int                            mUnknown3;            // this+0x6AC
    ExpressionNode                 mIterations;          // this+0x6B0
    WeakStorageFeature             mFeature;             // this+0x798
    HashedString                   mIdentifier;          // this+0x7B0
    std::string                    mPlacementPass;       // this+0x7E0

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&);
    BiomeDecorationFeature();

public:
    // NOLINTBEGIN
    // symbol: ??0BiomeDecorationFeature@@QEAA@$$QEAU0@@Z
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature&&);

    // symbol: ??0BiomeDecorationFeature@@QEAA@AEBU0@@Z
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature const&);

    // symbol: ??1BiomeDecorationFeature@@QEAA@XZ
    MCAPI ~BiomeDecorationFeature();

    // NOLINTEND
};
