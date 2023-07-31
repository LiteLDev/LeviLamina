#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {

public:
    // prevent constructor by default
    Stopwatch& operator=(Stopwatch const&) = delete;
    Stopwatch(Stopwatch const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?stop\@Stopwatch\@\@UEAANXZ
     */
    virtual double stop();
    /**
     * @vftbl 2
     * @symbol ?stopContinue\@Stopwatch\@\@UEAANXZ
     */
    virtual double stopContinue();
    /**
     * @vftbl 3
     * @symbol ?print\@Stopwatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPWATCH
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Stopwatch();
#endif
    /**
     * @symbol ??0Stopwatch\@\@QEAA\@XZ
     */
    MCAPI Stopwatch();
    /**
     * @symbol ?reset\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?start\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void start();
    // NOLINTEND
};
