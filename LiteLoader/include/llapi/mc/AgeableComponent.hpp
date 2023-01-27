/**
 * @file  AgeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgeableComponent.
 *
 */
class AgeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLECOMPONENT
public:
    class AgeableComponent& operator=(class AgeableComponent const &) = delete;
    AgeableComponent(class AgeableComponent const &) = delete;
    AgeableComponent() = delete;
#endif

public:
    /**
     * @hash   -1306129592
     * @symbol  ?addAdditionalSaveData\@AgeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -788170552
     * @symbol  ?getAge\@AgeableComponent\@\@QEBAHXZ
     */
    MCAPI int getAge() const;
    /**
     * @hash   914975829
     * @symbol  ?getInteraction\@AgeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   1816393298
     * @symbol  ?readAdditionalSaveData\@AgeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1209829098
     * @symbol  ?setAge\@AgeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setAge(int);

};