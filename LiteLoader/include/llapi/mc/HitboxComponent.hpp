/**
 * @file  HitboxComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HitboxComponent.
 *
 */
class HitboxComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HITBOXCOMPONENT
public:
    class HitboxComponent& operator=(class HitboxComponent const &) = delete;
    HitboxComponent() = delete;
#endif

public:
    /**
     * @hash   462747889
     * @symbol  ??0HitboxComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HitboxComponent(class HitboxComponent const &);
    /**
     * @symbol  ?addAdditionalSaveData\@HitboxComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   986566296
     * @symbol  ?fromCompoundTag\@HitboxComponent\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void fromCompoundTag(class CompoundTag const &);
    /**
     * @hash   -452445442
     * @symbol  ??4HitboxComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HitboxComponent & operator=(class HitboxComponent &&);
    /**
     * @hash   -705815954
     * @symbol  ?toCompoundTag\@HitboxComponent\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void toCompoundTag(class CompoundTag &);
    /**
     * @hash   1368254993
     * @symbol  ??1HitboxComponent\@\@QEAA\@XZ
     */
    MCAPI ~HitboxComponent();

};