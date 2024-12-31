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

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ~Flag() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Flag();

        MCAPI void Invalidate();

        MCAPI bool IsValid() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
    MCAPI WeakReference();

    MCAPI explicit WeakReference(::rtc::internal::WeakReference::Flag const*);

    MCAPI WeakReference(::rtc::internal::WeakReference&&);

    MCAPI WeakReference(::rtc::internal::WeakReference const&);

    MCAPI bool is_valid() const;

    MCAPI ~WeakReference();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::rtc::internal::WeakReference::Flag const*);

    MCAPI void* $ctor(::rtc::internal::WeakReference&&);

    MCAPI void* $ctor(::rtc::internal::WeakReference const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc::internal
