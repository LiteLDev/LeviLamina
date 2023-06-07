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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATASTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SavedDataStorage();
#endif
    /**
     * @symbol ??0SavedDataStorage\@\@QEAA\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI SavedDataStorage(class LevelStorage *);
    /**
     * @symbol ?loadAndSet\@SavedDataStorage\@\@QEAA_NAEAVSavedData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool loadAndSet(class SavedData &, std::string const &);
    /**
     * @symbol ?save\@SavedDataStorage\@\@QEAAXXZ
     */
    MCAPI void save();
    /**
     * @symbol ?set\@SavedDataStorage\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVSavedData\@\@\@Z
     */
    MCAPI void set(std::string const &, class SavedData &);

};
