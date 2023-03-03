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
     * @symbol  ??0HitboxComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HitboxComponent(class HitboxComponent const &);
    /**
     * @symbol  ?addAdditionalSaveData\@HitboxComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?fromCompoundTag\@HitboxComponent\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void fromCompoundTag(class CompoundTag const &);
    /**
     * @symbol  ??4HitboxComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HitboxComponent & operator=(class HitboxComponent &&);
    /**
     * @symbol  ?toCompoundTag\@HitboxComponent\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void toCompoundTag(class CompoundTag &);
    /**
     * @symbol  ??1HitboxComponent\@\@QEAA\@XZ
     */
    MCAPI ~HitboxComponent();

};