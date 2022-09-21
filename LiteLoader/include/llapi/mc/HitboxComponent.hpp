/**
 * @file  MC/HitboxComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   321703841
     * @symbol ??0HitboxComponent@@QEAA@AEBV0@@Z
     */
    MCAPI HitboxComponent(class HitboxComponent const &);
    /**
     * @hash   139487080
     * @symbol ?fromCompoundTag@HitboxComponent@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void fromCompoundTag(class CompoundTag const &);
    /**
     * @hash   -589245714
     * @symbol ??4HitboxComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class HitboxComponent & operator=(class HitboxComponent &&);
    /**
     * @hash   -1552910546
     * @symbol ?toCompoundTag@HitboxComponent@@QEAAXAEAVCompoundTag@@@Z
     */
    MCAPI void toCompoundTag(class CompoundTag &);
    /**
     * @hash   1230685921
     * @symbol ??1HitboxComponent@@QEAA@XZ
     */
    MCAPI ~HitboxComponent();

};