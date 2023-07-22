/**
 * @file  OnFireComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnFireComponent.
 *
 */
struct OnFireComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRECOMPONENT
public:
    struct OnFireComponent& operator=(struct OnFireComponent const &) = delete;
    OnFireComponent(struct OnFireComponent const &) = delete;
    OnFireComponent() = delete;
#endif

public:
    /**
     * @symbol  ?addAdditionalSaveData\@OnFireComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@OnFireComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @symbol  ?convertFromLegacyData\@OnFireComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @symbol  ?needsLegacyConversion\@OnFireComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

//private:

};