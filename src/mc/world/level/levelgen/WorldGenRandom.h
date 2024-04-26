#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IPositionalRandomFactory;
class IRandom;
struct Seed128Bit;
// clang-format on

namespace br::worldgen {

struct WorldGenRandom {
public:
    // prevent constructor by default
    WorldGenRandom& operator=(WorldGenRandom const&);

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@WorldGenRandom@worldgen@br@@UEAAXI@Z
    MCVAPI void consumeCount(uint);

    // symbol:
    // ?fork@WorldGenRandom@worldgen@br@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol:
    // ?forkPositional@WorldGenRandom@worldgen@br@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ?nextBoolean@WorldGenRandom@worldgen@br@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@WorldGenRandom@worldgen@br@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextFloat@WorldGenRandom@worldgen@br@@UEAAMXZ
    MCVAPI float nextFloat();

    // symbol: ?nextGaussianDouble@WorldGenRandom@worldgen@br@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@WorldGenRandom@worldgen@br@@UEAAHXZ
    MCVAPI int nextInt();

    // symbol: ?nextInt@WorldGenRandom@worldgen@br@@UEAAHH@Z
    MCVAPI int nextInt(int);

    // symbol: ?nextLong@WorldGenRandom@worldgen@br@@UEAA_JXZ
    MCVAPI int64 nextLong();

    // symbol: ?seed128@WorldGenRandom@worldgen@br@@UEBA?AUSeed128Bit@@XZ
    MCVAPI struct Seed128Bit seed128() const;

    // symbol: ?seed64@WorldGenRandom@worldgen@br@@UEBA_JXZ
    MCVAPI int64 seed64() const;

    // symbol: ?setSeed@WorldGenRandom@worldgen@br@@UEAAXUSeed128Bit@@@Z
    MCVAPI void setSeed(struct Seed128Bit);

    // symbol: ?setSeed@WorldGenRandom@worldgen@br@@UEAAX_J@Z
    MCVAPI void setSeed(int64);

    // symbol: ??1WorldGenRandom@worldgen@br@@UEAA@XZ
    MCVAPI ~WorldGenRandom();

    // symbol: ??0WorldGenRandom@worldgen@br@@QEAA@XZ
    MCAPI WorldGenRandom();

    // symbol: ??0WorldGenRandom@worldgen@br@@QEAA@AEBU012@@Z
    MCAPI WorldGenRandom(struct br::worldgen::WorldGenRandom const&);

    // symbol: ?forkPositional@WorldGenRandom@worldgen@br@@QEAA?AU123@VBlockPos@@@Z
    MCAPI struct br::worldgen::WorldGenRandom forkPositional(class BlockPos);

    // symbol: ?setLargeFeatureSeed@WorldGenRandom@worldgen@br@@QEAAAEAU123@_JHH@Z
    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64, int, int);

    // symbol: ?setLargeFeatureWithSalt@WorldGenRandom@worldgen@br@@QEAAAEAU123@_JHHH@Z
    MCAPI struct br::worldgen::WorldGenRandom& setLargeFeatureWithSalt(int64, int, int, int);

    // symbol: ?create@WorldGenRandom@worldgen@br@@SA?AU123@_J@Z
    MCAPI static struct br::worldgen::WorldGenRandom create(int64);

    // NOLINTEND
};

}; // namespace br::worldgen
