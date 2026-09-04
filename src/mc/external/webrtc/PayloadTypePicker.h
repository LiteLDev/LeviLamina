#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PayloadType; }
namespace webrtc { class PayloadTypeRecorder; }
namespace webrtc { class RTCError; }
namespace webrtc { struct Codec; }
// clang-format on

namespace webrtc {

class PayloadTypePicker {
public:
    // PayloadTypePicker inner types declare
    // clang-format off
    class MapEntry;
    // clang-format on

    // PayloadTypePicker inner types define
    class MapEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>   mUnk3cad1b;
        ::ll::UntypedStorage<8, 232> mUnkdfe476;
        // NOLINTEND

    public:
        // prevent constructor by default
        MapEntry& operator=(MapEntry const&);
        MapEntry(MapEntry const&);
        MapEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MapEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4894f4;
    ::ll::UntypedStorage<8, 16> mUnk50a891;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadTypePicker& operator=(PayloadTypePicker const&);
    PayloadTypePicker(PayloadTypePicker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCError AddMapping(::webrtc::PayloadType payload_type, ::webrtc::Codec codec);

    MCNAPI PayloadTypePicker();

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::PayloadType>
    SuggestMapping(::webrtc::Codec codec, ::webrtc::PayloadTypeRecorder const* excluder);

    MCNAPI ~PayloadTypePicker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
