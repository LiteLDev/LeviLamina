#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NBTLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTLOADER
public:
    NBTLoader& operator=(NBTLoader const&) = delete;
    NBTLoader(NBTLoader const&)            = delete;
    NBTLoader()                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTLoader();
#endif
    /**
     * @symbol ??0NBTLoader\@\@QEAA\@V?$not_null\@PEBVCompoundTag\@\@\@gsl\@\@\@Z
     */
    MCAPI NBTLoader(class gsl::not_null<class CompoundTag const*>);
};
