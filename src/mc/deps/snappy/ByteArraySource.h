#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class ByteArraySource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPPY_BYTEARRAYSOURCE
public:
    ByteArraySource& operator=(ByteArraySource const&) = delete;
    ByteArraySource(ByteArraySource const&)            = delete;
    ByteArraySource()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Available\@ByteArraySource\@snappy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 Available() const;
    /**
     * @vftbl 2
     * @symbol ?Peek\@ByteArraySource\@snappy\@\@UEAAPEBDPEA_K\@Z
     */
    virtual char const* Peek(unsigned __int64*);
    /**
     * @vftbl 3
     * @symbol ?Skip\@ByteArraySource\@snappy\@\@UEAAX_K\@Z
     */
    virtual void Skip(unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_BYTEARRAYSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ByteArraySource();
#endif
};

}; // namespace snappy
