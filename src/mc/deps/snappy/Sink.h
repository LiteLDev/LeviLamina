#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Sink {

public:
    // prevent constructor by default
    Sink& operator=(Sink const&) = delete;
    Sink(Sink const&)            = delete;
    Sink()                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?GetAppendBuffer\@Sink\@snappy\@\@UEAAPEAD_KPEAD\@Z
     */
    virtual char* GetAppendBuffer(unsigned __int64, char*); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?AppendAndTakeOwnership\@Sink\@snappy\@\@UEAAXPEAD_KP6AXPEAXPEBD1\@Z2\@Z
     */
    virtual void
    AppendAndTakeOwnership(char*, unsigned __int64, void (*)(void*, char const*, unsigned __int64), void*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?GetAppendBufferVariable\@Sink\@snappy\@\@UEAAPEAD_K0PEAD0PEA_K\@Z
     */
    virtual char*
    GetAppendBufferVariable(unsigned __int64, unsigned __int64, char*, unsigned __int64, unsigned __int64*); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_SINK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Sink(); // NOLINT
#endif
};

}; // namespace snappy
