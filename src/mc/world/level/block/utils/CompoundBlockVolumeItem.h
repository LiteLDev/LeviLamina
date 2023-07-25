#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolumeItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUMEITEM
public:
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const&) = delete;
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const&)            = delete;
    CompoundBlockVolumeItem()                                          = delete;
#endif

public:
    /**
     * @symbol ??9CompoundBlockVolumeItem\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class CompoundBlockVolumeItem const&) const;
    /**
     * @symbol ??8CompoundBlockVolumeItem\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolumeItem const&) const;
    /**
     * @symbol ?bindType\@CompoundBlockVolumeItem\@\@SAXXZ
     */
    MCAPI static void bindType();
};
