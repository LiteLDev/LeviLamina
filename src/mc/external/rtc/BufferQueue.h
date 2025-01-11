#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct BufferQueue {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BufferQueue(uint64, uint64);

    MCAPI void Clear();

    MCAPI bool ReadFront(void*, uint64, uint64*);

    MCAPI bool WriteBack(void const*, uint64, uint64*);

    MCAPI uint64 size() const;

    MCAPI ~BufferQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
