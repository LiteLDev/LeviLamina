/**
 * @file  HideComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HideComponent.
 *
 */
class HideComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDECOMPONENT
public:
    class HideComponent& operator=(class HideComponent const &) = delete;
    HideComponent(class HideComponent const &) = delete;
#endif

public:
    /**
     * @hash   1533541847
     * @symbol  ??0HideComponent\@\@QEAA\@XZ
     */
    MCAPI HideComponent();
    /**
     * @hash   1945080552
     * @symbol  ?addAdditionalSaveData\@HideComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -702980958
     * @symbol  ?initFromDefinition\@HideComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   280152746
     * @symbol  ?isInRaid\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInRaid();
    /**
     * @hash   -1827608886
     * @symbol  ?isReactingToBell\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isReactingToBell();
    /**
     * @hash   1328610725
     * @symbol  ?readAdditionalSaveData\@HideComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -10471001
     * @symbol  ?setInRaid\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setInRaid();
    /**
     * @hash   56571795
     * @symbol  ?setNotHiding\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setNotHiding();
    /**
     * @hash   1092218155
     * @symbol  ?setReactingToBell\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setReactingToBell();

};