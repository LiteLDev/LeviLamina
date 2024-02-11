#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPos;
class Block;
class Aquifer;
class IPreliminarySurfaceProvider;

struct WorldGenContext {
public:
    std::function<void(const BlockPos&, const Block&, int)> mTickUpdateFn;               // this+0x0
    Aquifer*                                                mAquifer;                    // this+0x40
    IPreliminarySurfaceProvider const*                      mPreliminarySurfaceProvider; // this+0x48

    WorldGenContext() = default;

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WorldGenContext@@QEAA@AEBU0@@Z
    MCAPI WorldGenContext(struct WorldGenContext const&);

    // symbol: ??1WorldGenContext@@QEAA@XZ
    MCAPI ~WorldGenContext();

    // NOLINTEND
};
