#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class UncheckedByteArraySink {

public:
    // prevent constructor by default
    UncheckedByteArraySink& operator=(UncheckedByteArraySink const&) = delete;
    UncheckedByteArraySink(UncheckedByteArraySink const&)            = delete;
    UncheckedByteArraySink()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Append\@UncheckedByteArraySink\@snappy\@\@UEAAXPEBD_K\@Z
     */
    virtual void Append(char const*, unsigned __int64); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?GetAppendBuffer\@UncheckedByteArraySink\@snappy\@\@UEAAPEAD_KPEAD\@Z
     */
    virtual char* GetAppendBuffer(unsigned __int64, char*); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?AppendAndTakeOwnership\@UncheckedByteArraySink\@snappy\@\@UEAAXPEAD_KP6AXPEAXPEBD1\@Z2\@Z
     */
    virtual void
    AppendAndTakeOwnership(char*, unsigned __int64, void (*)(void*, char const*, unsigned __int64), void*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?GetAppendBufferVariable\@UncheckedByteArraySink\@snappy\@\@UEAAPEAD_K0PEAD0PEA_K\@Z
     */
    virtual char*
    GetAppendBufferVariable(unsigned __int64, unsigned __int64, char*, unsigned __int64, unsigned __int64*); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_UNCHECKEDBYTEARRAYSINK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UncheckedByteArraySink(); // NOLINT
#endif
};

}; // namespace snappy
