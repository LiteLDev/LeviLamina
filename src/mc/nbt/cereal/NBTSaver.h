#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

class NBTSaver : public ::cereal::BasicSaver {

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
