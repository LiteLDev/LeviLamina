#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitboxComponent {

public:
    // prevent constructor by default
    HitboxComponent& operator=(HitboxComponent const&) = delete;
    HitboxComponent(HitboxComponent const&)            = delete;
    HitboxComponent()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addAdditionalSaveData\@HitboxComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?fromCompoundTag\@HitboxComponent\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void fromCompoundTag(class CompoundTag const&);
    /**
     * @symbol ??4HitboxComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HitboxComponent& operator=(class HitboxComponent&&);
    /**
     * @symbol ?toCompoundTag\@HitboxComponent\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void toCompoundTag(class CompoundTag&);
    // NOLINTEND
};
