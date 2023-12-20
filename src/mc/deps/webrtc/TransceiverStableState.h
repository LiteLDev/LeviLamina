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
    // NOLINTBEGIN
    // symbol:
    // ?SetInitSendEncodings@TransceiverStableState@webrtc@@QEAAXAEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@std@@@Z
    MCAPI void SetInitSendEncodings(std::vector<struct webrtc::RtpEncodingParameters> const&);

    // symbol:
    // ?SetMSectionIfUnset@TransceiverStableState@webrtc@@QEAAXV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$optional@_K@4@@Z
    MCAPI void SetMSectionIfUnset(std::optional<std::string>, std::optional<uint64>);

    // symbol:
    // ?SetRemoteStreamIds@TransceiverStableState@webrtc@@QEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void SetRemoteStreamIds(std::vector<std::string> const&);

    // symbol: ?set_newly_created@TransceiverStableState@webrtc@@QEAAXXZ
    MCAPI void set_newly_created();

    // symbol: ??1TransceiverStableState@webrtc@@QEAA@XZ
    MCAPI ~TransceiverStableState();

    // NOLINTEND
};

}; // namespace webrtc
