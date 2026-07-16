#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PayloadType; }
namespace webrtc { class PayloadTypePicker; }
namespace webrtc { class RTCError; }
namespace webrtc { struct Codec; }
// clang-format on

namespace webrtc {

class PayloadTypeRecorder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka0b5ff;
    ::ll::UntypedStorage<8, 16> mUnk7907e2;
    ::ll::UntypedStorage<8, 16> mUnka233fb;
    ::ll::UntypedStorage<4, 4>  mUnk903791;
    ::ll::UntypedStorage<8, 16> mUnk75e99d;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadTypeRecorder& operator=(PayloadTypeRecorder const&);
    PayloadTypeRecorder(PayloadTypeRecorder const&);
    PayloadTypeRecorder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddMapping(::webrtc::PayloadType payload_type, ::webrtc::Codec codec);

    MCNAPI void Commit();

    MCNAPI void DisallowRedefinition();

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::Codec> LookupCodec(::webrtc::PayloadType payload_type) const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::PayloadType> LookupPayloadType(::webrtc::Codec codec) const;

    MCNAPI explicit PayloadTypeRecorder(::webrtc::PayloadTypePicker& suggester);

    MCNAPI void ReallowRedefinition();

    MCNAPI ~PayloadTypeRecorder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PayloadTypePicker& suggester);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
