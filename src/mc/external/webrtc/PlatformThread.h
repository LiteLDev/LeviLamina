#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct ThreadAttributes; }
// clang-format on

namespace webrtc {

class PlatformThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb5881d;
    ::ll::UntypedStorage<1, 1>  mUnk27abcd;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformThread& operator=(PlatformThread const&);
    PlatformThread(PlatformThread const&);
    PlatformThread();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlatformThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::PlatformThread SpawnDetached(
        ::std::function<void()>    thread_function,
        ::std::string_view         name,
        ::webrtc::ThreadAttributes attributes
    );

    MCNAPI static ::webrtc::PlatformThread SpawnJoinable(
        ::std::function<void()>    thread_function,
        ::std::string_view         name,
        ::webrtc::ThreadAttributes attributes
    );

    MCNAPI static ::webrtc::PlatformThread SpawnThread(
        ::std::function<void()>    thread_function,
        ::std::string_view         name,
        ::webrtc::ThreadAttributes attributes,
        bool                       joinable
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
