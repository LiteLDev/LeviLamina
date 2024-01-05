#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkSpreader {
public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const&);
    SculkSpreader(SculkSpreader const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SculkSpreader@@QEAA@XZ
    MCAPI SculkSpreader();

    // symbol: ??0SculkSpreader@@QEAA@_NHHHH@Z
    MCAPI SculkSpreader(bool, int, int, int, int);

    // symbol: ?addCursors@SculkSpreader@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void addCursors(class BlockPos const& pos, int charge);

    // symbol: ?clearCursors@SculkSpreader@@QEAAXXZ
    MCAPI void clearCursors();

    // symbol: ?getCursorPosition@SculkSpreader@@QEBA?AVBlockPos@@H@Z
    MCAPI class BlockPos getCursorPosition(int index) const;

    // symbol: ?getMaxCharge@SculkSpreader@@QEBAHXZ
    MCAPI int getMaxCharge() const;

    // symbol: ?getNumberOfCursors@SculkSpreader@@QEBAHXZ
    MCAPI int getNumberOfCursors() const;

    // symbol: ?getTotalCharge@SculkSpreader@@QEBAHXZ
    MCAPI int getTotalCharge() const;

    // symbol: ?load@SculkSpreader@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const& tag);

    // symbol: ?save@SculkSpreader@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // symbol: ?updateCursors@SculkSpreader@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI void updateCursors(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&,
        class Random& random,
        bool
    );

    // symbol: ??1SculkSpreader@@QEAA@XZ
    MCAPI ~SculkSpreader();

    // NOLINTEND
};
