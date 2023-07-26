/**
 * @file  NBTSaver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
    /**
     * @symbol  ?getSavedCompoundTag\@NBTSaver\@\@QEAA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag getSavedCompoundTag();

};