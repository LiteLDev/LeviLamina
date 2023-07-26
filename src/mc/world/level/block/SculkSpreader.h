#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkSpreader {

public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const&) = delete;
    SculkSpreader(SculkSpreader const&)            = delete;

public:
    /**
     * @symbol ??0SculkSpreader\@\@QEAA\@_NHHHH\@Z
     */
    MCAPI SculkSpreader(bool, int, int, int, int); // NOLINT
    /**
     * @symbol ??0SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI SculkSpreader(); // NOLINT
    /**
     * @symbol ?addCursors\@SculkSpreader\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addCursors(class BlockPos const&, int); // NOLINT
    /**
     * @symbol ?clearCursors\@SculkSpreader\@\@QEAAXXZ
     */
    MCAPI void clearCursors(); // NOLINT
    /**
     * @symbol ?getCursorPosition\@SculkSpreader\@\@QEBA?AVBlockPos\@\@H\@Z
     */
    MCAPI class BlockPos getCursorPosition(int) const; // NOLINT
    /**
     * @symbol ?getMaxCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getMaxCharge() const; // NOLINT
    /**
     * @symbol ?getNumberOfCursors\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNumberOfCursors() const; // NOLINT
    /**
     * @symbol ?getTotalCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getTotalCharge() const; // NOLINT
    /**
     * @symbol ?load\@SculkSpreader\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?save\@SculkSpreader\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?updateCursors\@SculkSpreader\@\@QEAAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI void
    updateCursors(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, class Random&, bool); // NOLINT
    /**
     * @symbol ??1SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI ~SculkSpreader(); // NOLINT
};
