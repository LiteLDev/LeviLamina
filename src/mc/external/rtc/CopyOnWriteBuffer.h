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

    MCNAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer&&);

    MCNAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer const&);

    MCNAPI explicit CopyOnWriteBuffer(uint64);

    MCNAPI CopyOnWriteBuffer(uint64, uint64);

    MCNAPI void EnsureCapacity(uint64);

    MCNAPI void SetSize(uint64);

    MCNAPI void UnshareAndEnsureCapacity(uint64);

    MCNAPI ::rtc::CopyOnWriteBuffer& operator=(::rtc::CopyOnWriteBuffer&&);

    MCNAPI bool operator==(::rtc::CopyOnWriteBuffer const&) const;

    MCNAPI ~CopyOnWriteBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::CopyOnWriteBuffer&&);

    MCNAPI void* $ctor(::rtc::CopyOnWriteBuffer const&);

    MCNAPI void* $ctor(uint64);

    MCNAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
