#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    CompoundBlockVolume(CompoundBlockVolume const&) = delete;
    CompoundBlockVolume()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?capacity\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI uint64_t capacity() const;
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
    MCAPI bool isInside(class BlockPos const&) const;
    /**
     * @symbol ??4CompoundBlockVolume\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class CompoundBlockVolume& operator=(class CompoundBlockVolume const&);
    /**
     * @symbol ??8CompoundBlockVolume\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolume const&) const;
    /**
     * @symbol ?peekLastVolume\@CompoundBlockVolume\@\@QEBA?AV?$optional\@VCompoundBlockVolumeItem\@\@\@std\@\@XZ
     */
    MCAPI std::optional<class CompoundBlockVolumeItem> peekLastVolume() const;
    /**
     * @symbol ?popLastVolume\@CompoundBlockVolume\@\@QEAA_NXZ
     */
    MCAPI bool popLastVolume();
    /**
     * @symbol ?pushVolume\@CompoundBlockVolume\@\@QEAAXAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI void pushVolume(class CompoundBlockVolumeItem const&);
    /**
     * @symbol ?replaceOrAddLastVolume\@CompoundBlockVolume\@\@QEAA_NAEBVCompoundBlockVolumeItem\@\@\@Z
     */
    MCAPI bool replaceOrAddLastVolume(class CompoundBlockVolumeItem const&);
    /**
     * @symbol ?translate\@CompoundBlockVolume\@\@QEAAXHHH\@Z
     */
    MCAPI void translate(int, int, int);
    /**
     * @symbol ?volumeCount\@CompoundBlockVolume\@\@QEBA_KXZ
     */
    MCAPI uint64_t volumeCount() const;
    /**
     * @symbol ?bindType\@CompoundBlockVolume\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_recalculateBounds\@CompoundBlockVolume\@\@IEAAXXZ
     */
    MCAPI void _recalculateBounds();
    // NOLINTEND
};
