#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NBTSaver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSAVER
public:
    NBTSaver& operator=(NBTSaver const&) = delete;
    NBTSaver(NBTSaver const&)            = delete;
    NBTSaver()                           = delete;
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
