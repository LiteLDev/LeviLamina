#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkSpreader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSPREADER
public:
    SculkSpreader& operator=(SculkSpreader const&) = delete;
    SculkSpreader(SculkSpreader const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SculkSpreader\@\@QEAA\@_NHHHH\@Z
     */
    MCAPI SculkSpreader(bool, int, int, int, int);
    /**
     * @symbol ??0SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI SculkSpreader();
    /**
     * @symbol ?addCursors\@SculkSpreader\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addCursors(class BlockPos const&, int);
    /**
     * @symbol ?clearCursors\@SculkSpreader\@\@QEAAXXZ
     */
    MCAPI void clearCursors();
    /**
     * @symbol ?getCursorPosition\@SculkSpreader\@\@QEBA?AVBlockPos\@\@H\@Z
     */
    MCAPI class BlockPos getCursorPosition(int) const;
    /**
     * @symbol ?getMaxCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getMaxCharge() const;
    /**
     * @symbol ?getNumberOfCursors\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getNumberOfCursors() const;
    /**
     * @symbol ?getTotalCharge\@SculkSpreader\@\@QEBAHXZ
     */
    MCAPI int getTotalCharge() const;
    /**
     * @symbol ?load\@SculkSpreader\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&);
    /**
     * @symbol ?save\@SculkSpreader\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const;
    /**
     * @symbol
     * ?updateCursors\@SculkSpreader\@\@QEAAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@_N\@Z
     */
    MCAPI void updateCursors(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, class Random&, bool);
    /**
     * @symbol ??1SculkSpreader\@\@QEAA\@XZ
     */
    MCAPI ~SculkSpreader();
};
