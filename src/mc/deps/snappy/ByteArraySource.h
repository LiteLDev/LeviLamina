#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class ByteArraySource {

public:
    // prevent constructor by default
    ByteArraySource& operator=(ByteArraySource const&) = delete;
    ByteArraySource(ByteArraySource const&)            = delete;
    ByteArraySource()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Available\@ByteArraySource\@snappy\@\@UEBA_KXZ
     */
    virtual uint64_t Available() const;
    /**
     * @vftbl 2
     * @symbol ?Peek\@ByteArraySource\@snappy\@\@UEAAPEBDPEA_K\@Z
     */
    virtual char const* Peek(uint64_t*);
    /**
     * @vftbl 3
     * @symbol ?Skip\@ByteArraySource\@snappy\@\@UEAAX_K\@Z
     */
    virtual void Skip(uint64_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNAPPY_BYTEARRAYSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ByteArraySource();
#endif
    // NOLINTEND
};

}; // namespace snappy
