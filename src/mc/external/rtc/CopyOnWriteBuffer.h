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
    MCAPI void Clear();

    MCAPI CopyOnWriteBuffer();

    MCAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer&&);

    MCAPI CopyOnWriteBuffer(::rtc::CopyOnWriteBuffer const&);

    MCAPI explicit CopyOnWriteBuffer(uint64);

    MCAPI CopyOnWriteBuffer(uint64, uint64);

    MCAPI void EnsureCapacity(uint64);

    MCAPI void SetSize(uint64);

    MCAPI void UnshareAndEnsureCapacity(uint64);

    MCAPI ::rtc::CopyOnWriteBuffer& operator=(::rtc::CopyOnWriteBuffer&&);

    MCAPI bool operator==(::rtc::CopyOnWriteBuffer const&) const;

    MCAPI ~CopyOnWriteBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::rtc::CopyOnWriteBuffer&&);

    MCAPI void* $ctor(::rtc::CopyOnWriteBuffer const&);

    MCAPI void* $ctor(uint64);

    MCAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
