#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NBTLoader {

public:
    // prevent constructor by default
    NBTLoader& operator=(NBTLoader const&) = delete;
    NBTLoader(NBTLoader const&)            = delete;
    NBTLoader()                            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
