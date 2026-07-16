#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/FinalRefCountedObject.h"

namespace webrtc {

class CopyOnWriteBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk28b65a;
    ::ll::UntypedStorage<8, 8> mUnk86abf0;
    ::ll::UntypedStorage<8, 8> mUnk701575;
    // NOLINTEND

public:
    // prevent constructor by default
    CopyOnWriteBuffer& operator=(CopyOnWriteBuffer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI CopyOnWriteBuffer();

    MCNAPI CopyOnWriteBuffer(::webrtc::CopyOnWriteBuffer&& buf);

    MCNAPI CopyOnWriteBuffer(::webrtc::CopyOnWriteBuffer const& buf);

    MCNAPI explicit CopyOnWriteBuffer(uint64 size);

    MCNAPI CopyOnWriteBuffer(uint64 size, uint64 capacity);

    MCNAPI void EnsureCapacity(uint64 new_capacity);

    MCNAPI void SetSize(uint64 size);

    MCNAPI void UnshareAndEnsureCapacity(uint64 new_capacity);

    MCNAPI ::webrtc::CopyOnWriteBuffer& operator=(::webrtc::CopyOnWriteBuffer&& buf);

    MCNAPI bool operator==(::webrtc::CopyOnWriteBuffer const& buf) const;

    MCNAPI ~CopyOnWriteBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::CopyOnWriteBuffer&& buf);

    MCNAPI void* $ctor(::webrtc::CopyOnWriteBuffer const& buf);

    MCNAPI void* $ctor(uint64 size);

    MCNAPI void* $ctor(uint64 size, uint64 capacity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
