#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileAccess {

public:
    // prevent constructor by default
    IFileAccess& operator=(IFileAccess const&) = delete;
    IFileAccess(IFileAccess const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFILEACCESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IFileAccess();
#endif
    /**
     * @symbol ??0IFileAccess\@\@QEAA\@XZ
     */
    MCAPI IFileAccess();
    // NOLINTEND
};
