#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedDataStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATASTORAGE
public:
    SavedDataStorage& operator=(SavedDataStorage const&) = delete;
    SavedDataStorage(SavedDataStorage const&)            = delete;
    SavedDataStorage()                                   = delete;
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
    MCAPI SavedDataStorage(class LevelStorage*);
    /**
     * @symbol
     * ?loadAndSet\@SavedDataStorage\@\@QEAA_NAEAVSavedData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool loadAndSet(class SavedData&, std::string const&);
    /**
     * @symbol ?save\@SavedDataStorage\@\@QEAAXXZ
     */
    MCAPI void save();
    /**
     * @symbol
     * ?set\@SavedDataStorage\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVSavedData\@\@\@Z
     */
    MCAPI void set(std::string const&, class SavedData&);
};
