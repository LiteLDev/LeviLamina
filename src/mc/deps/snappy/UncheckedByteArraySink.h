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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Append\@UncheckedByteArraySink\@snappy\@\@UEAAXPEBD_K\@Z
     */
    virtual void Append(char const*, uint64_t);
    /**
     * @vftbl 2
     * @symbol ?GetAppendBuffer\@UncheckedByteArraySink\@snappy\@\@UEAAPEAD_KPEAD\@Z
     */
    virtual char* GetAppendBuffer(uint64_t, char*);
    /**
     * @vftbl 3
     * @symbol ?AppendAndTakeOwnership\@UncheckedByteArraySink\@snappy\@\@UEAAXPEAD_KP6AXPEAXPEBD1\@Z2\@Z
     */
    virtual void AppendAndTakeOwnership(char*, uint64_t, void(__cdecl*)(void*, char const*, uint64_t), void*);
    /**
     * @vftbl 4
     * @symbol ?GetAppendBufferVariable\@UncheckedByteArraySink\@snappy\@\@UEAAPEAD_K0PEAD0PEA_K\@Z
     */
    virtual char* GetAppendBufferVariable(uint64_t, uint64_t, char*, uint64_t, uint64_t*);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_UNCHECKEDBYTEARRAYSINK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UncheckedByteArraySink();
#endif
    // NOLINTEND
};

}; // namespace snappy
