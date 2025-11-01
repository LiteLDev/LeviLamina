#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"
#include "mc/external/rtc/FinalRefCountedObject.h"

namespace rtc {

class CopyOnWriteBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd2e475;
    ::ll::UntypedStorage<8, 8> mUnk1b6d56;
    ::ll::UntypedStorage<8, 8> mUnke1e3f1;
    // NOLINTEND

public:
    // prevent constructor by default
    CopyOnWriteBuffer& operator=(CopyOnWriteBuffer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI CopyOnWriteBuffer();

    MCNAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer&& buf);

    MCNAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer const& buf);

    MCNAPI explicit CopyOnWriteBuffer(uint64 size);

    MCNAPI CopyOnWriteBuffer(uint64 size, uint64 capacity);

    MCNAPI void EnsureCapacity(uint64 new_capacity);

    MCNAPI void SetSize(uint64 size);

    MCNAPI void UnshareAndEnsureCapacity(uint64 new_capacity);

    MCNAPI ::rtc::CopyOnWriteBuffer& operator=(::rtc::CopyOnWriteBuffer&& buf);

    MCNAPI bool operator==(::rtc::CopyOnWriteBuffer const& buf) const;

    MCNAPI ~CopyOnWriteBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::CopyOnWriteBuffer&& buf);

    MCNAPI void* $ctor(::rtc::CopyOnWriteBuffer const& buf);

    MCNAPI void* $ctor(uint64 size);

    MCNAPI void* $ctor(uint64 size, uint64 capacity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
