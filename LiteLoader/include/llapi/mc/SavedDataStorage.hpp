/**
 * @file  SavedDataStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SavedDataStorage.
 *
 */
class SavedDataStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATASTORAGE
public:
    class SavedDataStorage& operator=(class SavedDataStorage const &) = delete;
    SavedDataStorage(class SavedDataStorage const &) = delete;
    SavedDataStorage() = delete;
#endif

public:
    /**
     * @hash   -649703334
     * @symbol  ??0SavedDataStorage\@\@QEAA\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI SavedDataStorage(class LevelStorage *);
    /**
     * @hash   2097405454
     * @symbol  ?loadAndSet\@SavedDataStorage\@\@QEAA_NAEAVSavedData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool loadAndSet(class SavedData &, std::string const &);
    /**
     * @hash   1573111653
     * @symbol  ?save\@SavedDataStorage\@\@QEAAXXZ
     */
    MCAPI void save();
    /**
     * @hash   -942720175
     * @symbol  ?set\@SavedDataStorage\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVSavedData\@\@\@Z
     */
    MCAPI void set(std::string const &, class SavedData &);

};