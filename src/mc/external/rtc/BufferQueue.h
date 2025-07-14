#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class BufferQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2626b0;
    ::ll::UntypedStorage<8, 8>  mUnke0588c;
    ::ll::UntypedStorage<8, 8>  mUnkf617f2;
    ::ll::UntypedStorage<8, 40> mUnk410391;
    ::ll::UntypedStorage<8, 24> mUnkb5c058;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferQueue& operator=(BufferQueue const&);
    BufferQueue(BufferQueue const&);
    BufferQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BufferQueue(uint64 capacity, uint64 default_size);

    MCNAPI void Clear();

    MCNAPI bool ReadFront(void* buffer, uint64 bytes, uint64* bytes_read);

    MCNAPI bool WriteBack(void const* buffer, uint64 bytes, uint64* bytes_written);

    MCNAPI uint64 size() const;

    MCNAPI ~BufferQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 capacity, uint64 default_size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
