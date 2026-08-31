#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FinalRefCountedObject.h"

namespace webrtc::internal {

class WeakReference {
public:
    // WeakReference inner types declare
    // clang-format off
    class Flag;
    // clang-format on

    // WeakReference inner types define
    class Flag {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk127781;
        ::ll::UntypedStorage<1, 1> mUnkae3099;
        // NOLINTEND

    public:
        // prevent constructor by default
        Flag& operator=(Flag const&);
        Flag(Flag const&);
        Flag();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk274330;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakReference& operator=(WeakReference const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeakReference();

    MCNAPI WeakReference(::webrtc::internal::WeakReference&&);

    MCNAPI WeakReference(::webrtc::internal::WeakReference const&);

    MCNAPI bool is_valid() const;

    MCNAPI ~WeakReference();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::internal::WeakReference&&);

    MCNAPI void* $ctor(::webrtc::internal::WeakReference const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
