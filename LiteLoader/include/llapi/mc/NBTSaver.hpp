/**
 * @file  NBTSaver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBTSaver.
 *
 */
class NBTSaver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSAVER
public:
    class NBTSaver& operator=(class NBTSaver const &) = delete;
    NBTSaver(class NBTSaver const &) = delete;
    NBTSaver() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTSAVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTSaver();
#endif
    /**
     * @symbol ?getSavedCompoundTag\@NBTSaver\@\@QEAA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag getSavedCompoundTag();

};
