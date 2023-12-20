#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class BufferQueue {
public:
    // prevent constructor by default
    BufferQueue& operator=(BufferQueue const&);
    BufferQueue(BufferQueue const&);
    BufferQueue();

public:
    // NOLINTBEGIN
    // symbol: ??0BufferQueue@rtc@@QEAA@_K0@Z
    MCAPI BufferQueue(uint64, uint64);

    // symbol: ?Clear@BufferQueue@rtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?ReadFront@BufferQueue@rtc@@QEAA_NPEAX_KPEA_K@Z
    MCAPI bool ReadFront(void*, uint64, uint64*);

    // symbol: ?WriteBack@BufferQueue@rtc@@QEAA_NPEBX_KPEA_K@Z
    MCAPI bool WriteBack(void const*, uint64, uint64*);

    // symbol: ?size@BufferQueue@rtc@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1BufferQueue@rtc@@QEAA@XZ
    MCAPI ~BufferQueue();

    // NOLINTEND
};

}; // namespace rtc
