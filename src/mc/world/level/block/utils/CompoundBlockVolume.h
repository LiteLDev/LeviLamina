#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolume {

public:
    // prevent constructor by default
    CompoundBlockVolume(CompoundBlockVolume const&) = delete;
    CompoundBlockVolume()                           = delete;

public:
    /**
     * @symbol ?capacity\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 capacity() const; // NOLINT
    /**
     * @symbol ?clear\@CompoundBlockVolume\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?getBoundingBox\@CompoundBlockVolume\@\@QEBA?AVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox getBoundingBox() const; // NOLINT
    /**
     * @symbol ?getMax\@CompoundBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMax() const; // NOLINT
    /**
     * @symbol ?getMin\@CompoundBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMin() const; // NOLINT
    /**
     * @symbol ?isInside\@CompoundBlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInside(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ??4CompoundBlockVolume\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class CompoundBlockVolume& operator=(class CompoundBlockVolume const&); // NOLINT
    /**
     * @symbol ??8CompoundBlockVolume\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolume const&) const; // NOLINT
    /**
     * @symbol ?peekLastVolume\@CompoundBlockVolume\@\@QEBA?AV?$optional\@VCompoundBlockVolumeItem\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class CompoundBlockVolumeItem> peekLastVolume() const; // NOLINT
    /**
     * @symbol ?popLastVolume\@CompoundBlockVolume\@\@QEAA_NXZ
     */
    MCAPI bool popLastVolume(); // NOLINT
    /**
     * @symbol ?pushVolume\@CompoundBlockVolume\@\@QEAAXAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI void pushVolume(class CompoundBlockVolumeItem const&); // NOLINT
    /**
     * @symbol ?replaceOrAddLastVolume\@CompoundBlockVolume\@\@QEAA_NAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI bool replaceOrAddLastVolume(class CompoundBlockVolumeItem const&); // NOLINT
    /**
     * @symbol ?translate\@CompoundBlockVolume\@\@QEAAXHHH\@Z
     */
    MCAPI void translate(int, int, int); // NOLINT
    /**
     * @symbol ?volumeCount\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 volumeCount() const; // NOLINT
    /**
     * @symbol ?bindType\@CompoundBlockVolume\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT

    // protected:
    /**
     * @symbol ?_recalculateBounds\@CompoundBlockVolume\@\@IEAAXXZ
     */
    MCAPI void _recalculateBounds(); // NOLINT

protected:
};
