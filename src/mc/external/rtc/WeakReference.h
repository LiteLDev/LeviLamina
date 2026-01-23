#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace rtc::internal {

class WeakReference {
public:
    // WeakReference inner types declare
    // clang-format off
    class Flag;
    // clang-format on

    // WeakReference inner types define
    class Flag : public ::webrtc::RefCountInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk8c8c56;
        ::ll::UntypedStorage<1, 1> mUnk2575e3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Flag& operator=(Flag const&);
        Flag(Flag const&);
        Flag();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Flag() /*override*/ = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80e506;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakReference& operator=(WeakReference const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeakReference();

    MCNAPI WeakReference(::rtc::internal::WeakReference&&);

    MCNAPI WeakReference(::rtc::internal::WeakReference const&);

    MCNAPI bool is_valid() const;

    MCNAPI ~WeakReference();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::internal::WeakReference&&);

    MCNAPI void* $ctor(::rtc::internal::WeakReference const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc::internal
