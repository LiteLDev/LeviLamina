#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {

public:
    // prevent constructor by default
    ZipProgress& operator=(ZipProgress const&) = delete;
    ZipProgress(ZipProgress const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?clear\@ZipProgress\@ZipUtils\@Core\@\@UEAAXXZ
     */
    virtual void clear(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_ZIPUTILS_ZIPPROGRESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ZipProgress(); // NOLINT
#endif
    /**
     * @symbol ??0ZipProgress\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ZipProgress(); // NOLINT
};

}; // namespace Core::ZipUtils
