#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSTORAGEKEYCOMPONENT
public:
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&) = delete;
    EntityStorageKeyComponent(EntityStorageKeyComponent const&)            = delete;
    EntityStorageKeyComponent()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ??0EntityStorageKeyComponent\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityStorageKeyComponent(std::string const&);
    /**
     * @symbol ?addAdditionalSaveData\@EntityStorageKeyComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const;
    /**
     * @symbol ?readAdditionalSaveData\@EntityStorageKeyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&);
    /**
     * @symbol ??1EntityStorageKeyComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntityStorageKeyComponent();
};
