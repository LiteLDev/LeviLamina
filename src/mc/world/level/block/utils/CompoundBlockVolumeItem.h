#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolumeItem {

public:
    // prevent constructor by default
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const&) = delete;
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const&)            = delete;
    CompoundBlockVolumeItem()                                          = delete;

public:
    /**
     * @symbol ??9CompoundBlockVolumeItem\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class CompoundBlockVolumeItem const&) const; // NOLINT
    /**
     * @symbol ??8CompoundBlockVolumeItem\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolumeItem const&) const; // NOLINT
    /**
     * @symbol ?bindType\@CompoundBlockVolumeItem\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
