#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorType.h"

namespace webrtc {

class RTCError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc8df31;
    ::ll::UntypedStorage<8, 32> mUnke84b50;
    ::ll::UntypedStorage<4, 4>  mUnk7df56b;
    ::ll::UntypedStorage<2, 4>  mUnk86fbc8;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCError& operator=(RTCError const&);
    RTCError(RTCError const&);
    RTCError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RTCError(::webrtc::RTCErrorType);

    MCAPI RTCError(::webrtc::RTCErrorType, ::std::string_view);

    MCAPI char const* message() const;

    MCAPI ::webrtc::RTCError& operator=(::webrtc::RTCError&&);

    MCAPI void set_message(::std::string_view);

    MCAPI ~RTCError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RTCError OK();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RTCErrorType);

    MCAPI void* $ctor(::webrtc::RTCErrorType, ::std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
