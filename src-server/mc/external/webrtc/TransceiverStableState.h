#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpEncodingParameters; }
// clang-format on

namespace webrtc {

class TransceiverStableState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4921a8;
    ::ll::UntypedStorage<8, 16> mUnkff643b;
    ::ll::UntypedStorage<8, 32> mUnk2ce988;
    ::ll::UntypedStorage<8, 32> mUnk604408;
    ::ll::UntypedStorage<1, 1>  mUnkba0e08;
    ::ll::UntypedStorage<1, 1>  mUnkc065fe;
    ::ll::UntypedStorage<4, 12> mUnk799627;
    // NOLINTEND

public:
    // prevent constructor by default
    TransceiverStableState& operator=(TransceiverStableState const&);
    TransceiverStableState(TransceiverStableState const&);
    TransceiverStableState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void SetInitSendEncodings(::std::vector<::webrtc::RtpEncodingParameters> const& encodings);

    MCNAPI void SetMSectionIfUnset(::std::optional<::std::string> mid, ::std::optional<uint64> mline_index);

    MCNAPI void SetRemoteStreamIds(::std::vector<::std::string> const& ids);

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
