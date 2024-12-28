#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpEncodingParameters; }
// clang-format on

namespace webrtc {

class TransceiverStableState {
public:
    // prevent constructor by default
    TransceiverStableState& operator=(TransceiverStableState const&);
    TransceiverStableState(TransceiverStableState const&);
    TransceiverStableState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void SetInitSendEncodings(::std::vector<::webrtc::RtpEncodingParameters> const&);

    MCAPI void SetMSectionIfUnset(::std::optional<::std::string>, ::std::optional<uint64>);

    MCAPI void SetRemoteStreamIds(::std::vector<::std::string> const&);

    MCAPI void set_newly_created();

    MCAPI ~TransceiverStableState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
