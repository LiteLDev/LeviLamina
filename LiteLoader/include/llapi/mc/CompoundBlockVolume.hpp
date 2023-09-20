/**
 * @file  CompoundBlockVolume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CompoundBlockVolume {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUME
public:
    CompoundBlockVolume(class CompoundBlockVolume const &) = delete;
#endif

public:
    /**
     * @symbol ??0CompoundBlockVolume\@\@QEAA\@XZ
     */
    MCAPI CompoundBlockVolume();
    /**
     * @symbol ?capacity\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 capacity() const;
    /**
     * @symbol ?clear\@CompoundBlockVolume\@\@QEAAX_N\@Z
     */
    MCAPI void clear(bool);
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
     * @symbol ?getOrigin\@CompoundBlockVolume\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getOrigin() const;
    /**
     * @symbol ?isEmpty\@CompoundBlockVolume\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
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
     * @symbol ?peekLastVolume\@CompoundBlockVolume\@\@QEBA?AV?$optional\@VCompoundBlockVolumeItem\@\@\@std\@\@V?$optional\@W4CompoundBlockVolumePositionRelativity\@\@\@3\@\@Z
     */
    MCAPI class std::optional<class CompoundBlockVolumeItem> peekLastVolume(class std::optional<enum class CompoundBlockVolumePositionRelativity>) const;
    /**
     * @symbol ?popVolume\@CompoundBlockVolume\@\@QEAA_NXZ
     */
    MCAPI bool popVolume();
    /**
     * @symbol ?pushVolume\@CompoundBlockVolume\@\@QEAAX$$QEAVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI void pushVolume(class CompoundBlockVolumeItem &&);
    /**
     * @symbol ?setOrigin\@CompoundBlockVolume\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void setOrigin(class BlockPos const &, bool);
    /**
     * @symbol ?translateOrigin\@CompoundBlockVolume\@\@QEAAXAEBVBlockPos\@\@_N\@Z
     */
    MCAPI void translateOrigin(class BlockPos const &, bool);
    /**
     * @symbol ?volumeCount\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 volumeCount() const;
    /**
     * @symbol ?bindType\@CompoundBlockVolume\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

//protected:
    /**
     * @symbol ?_recalculateBounds\@CompoundBlockVolume\@\@IEAAXXZ
     */
    MCAPI void _recalculateBounds();

protected:

};
