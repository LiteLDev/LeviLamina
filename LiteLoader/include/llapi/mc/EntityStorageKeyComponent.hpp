/**
 * @file  EntityStorageKeyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityStorageKeyComponent.
 *
 */
class EntityStorageKeyComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSTORAGEKEYCOMPONENT
public:
    class EntityStorageKeyComponent& operator=(class EntityStorageKeyComponent const &) = delete;
    EntityStorageKeyComponent(class EntityStorageKeyComponent const &) = delete;
    EntityStorageKeyComponent() = delete;
#endif

public:
    /**
     * @hash   109695551
     * @symbol  ??0EntityStorageKeyComponent\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EntityStorageKeyComponent(std::string const &);
    /**
     * @hash   1327959353
     * @symbol  ?addAdditionalSaveData\@EntityStorageKeyComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @hash   -1250140581
     * @symbol  ?readAdditionalSaveData\@EntityStorageKeyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @hash   -1996895230
     * @symbol  ??1EntityStorageKeyComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntityStorageKeyComponent();

};