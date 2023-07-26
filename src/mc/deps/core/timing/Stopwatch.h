#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {

public:
    // prevent constructor by default
    Stopwatch& operator=(Stopwatch const&) = delete;
    Stopwatch(Stopwatch const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?stop\@Stopwatch\@\@UEAANXZ
     */
    virtual double stop(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?stopContinue\@Stopwatch\@\@UEAANXZ
     */
    virtual double stopContinue(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?print\@Stopwatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPWATCH
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Stopwatch(); // NOLINT
#endif
    /**
     * @symbol ??0Stopwatch\@\@QEAA\@XZ
     */
    MCAPI Stopwatch(); // NOLINT
    /**
     * @symbol ?reset\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?start\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void start(); // NOLINT
};
