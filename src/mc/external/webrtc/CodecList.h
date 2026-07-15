#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct Codec; }
// clang-format on

namespace webrtc {

class CodecList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk27d008;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecList& operator=(CodecList const&);
    CodecList(CodecList const&);
    CodecList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CheckConsistency();

    MCNAPI ::webrtc::CodecList& operator=(::webrtc::CodecList&&);

    MCNAPI ~CodecList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::webrtc::CodecList> Create(::std::vector<::webrtc::Codec> const& codecs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
