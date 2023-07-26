#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&) = delete;
    EntityStorageKeyComponent(EntityStorageKeyComponent const&)            = delete;
    EntityStorageKeyComponent()                                            = delete;

public:
    /**
     * @symbol
     * ??0EntityStorageKeyComponent\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityStorageKeyComponent(std::string const&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@EntityStorageKeyComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@EntityStorageKeyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ??1EntityStorageKeyComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntityStorageKeyComponent(); // NOLINT
};
