#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NBTSaver {

public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&) = delete;
    NBTSaver(NBTSaver const&)            = delete;
    NBTSaver()                           = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
