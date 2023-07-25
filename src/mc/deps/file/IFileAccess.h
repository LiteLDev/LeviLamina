#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileAccess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEACCESS
public:
    IFileAccess& operator=(IFileAccess const&) = delete;
    IFileAccess(IFileAccess const&)            = delete;
#endif

public:
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
};
