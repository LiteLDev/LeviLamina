#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct BufferQueue {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BufferQueue(uint64, uint64);

    MCNAPI void Clear();

    MCNAPI bool ReadFront(void*, uint64, uint64*);

    MCNAPI bool WriteBack(void const*, uint64, uint64*);

    MCNAPI uint64 size() const;

    MCNAPI ~BufferQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
