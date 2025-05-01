#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpEncodingParameters; }
// clang-format on

namespace webrtc {

class TransceiverStableState {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetInitSendEncodings(::std::vector<::webrtc::RtpEncodingParameters> const&);

    MCNAPI void SetMSectionIfUnset(::std::optional<::std::string>, ::std::optional<uint64>);

    MCNAPI void SetRemoteStreamIds(::std::vector<::std::string> const&);

    MCNAPI void set_newly_created();

    MCNAPI ~TransceiverStableState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
