/**
 * @file  CompoundBlockVolume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CompoundBlockVolume {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUME
public:
    CompoundBlockVolume(class CompoundBlockVolume const &) = delete;
    CompoundBlockVolume() = delete;
#endif

public:
    /**
     * @symbol ?capacity\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 capacity() const;
    /**
     * @symbol ?clear\@CompoundBlockVolume\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?getBoundingBox\@CompoundBlockVolume\@\@QEBA?AVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox getBoundingBox() const;
    /**
     * @symbol ?getMax\@CompoundBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMax() const;
    /**
     * @symbol ?getMin\@CompoundBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMin() const;
    /**
     * @symbol ?isInside\@CompoundBlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isInside(class BlockPos const &) const;
    /**
     * @symbol ??4CompoundBlockVolume\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class CompoundBlockVolume & operator=(class CompoundBlockVolume const &);
    /**
     * @symbol ??8CompoundBlockVolume\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolume const &) const;
    /**
     * @symbol ?peekLastVolume\@CompoundBlockVolume\@\@QEBA?AV?$optional\@VCompoundBlockVolumeItem\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class CompoundBlockVolumeItem> peekLastVolume() const;
    /**
     * @symbol ?popLastVolume\@CompoundBlockVolume\@\@QEAA_NXZ
     */
    MCAPI bool popLastVolume();
    /**
     * @symbol ?pushVolume\@CompoundBlockVolume\@\@QEAAXAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI void pushVolume(class CompoundBlockVolumeItem const &);
    /**
     * @symbol ?replaceOrAddLastVolume\@CompoundBlockVolume\@\@QEAA_NAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI bool replaceOrAddLastVolume(class CompoundBlockVolumeItem const &);
    /**
     * @symbol ?translate\@CompoundBlockVolume\@\@QEAAXHHH\@Z
     */
    MCAPI void translate(int, int, int);
    /**
     * @symbol ?volumeCount\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 volumeCount() const;
    /**
     * @symbol ?bindType\@CompoundBlockVolume\@\@SAXXZ
     */
    MCAPI static void bindType();

//protected:
    /**
     * @symbol ?_recalculateBounds\@CompoundBlockVolume\@\@IEAAXXZ
     */
    MCAPI void _recalculateBounds();

protected:

};
