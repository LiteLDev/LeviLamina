#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Context; }
namespace dcsctp { class DataTracker; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class ReConfigChunk; }
namespace dcsctp { class ReassemblyQueue; }
namespace dcsctp { class ReconfigRequestSNTag; }
namespace dcsctp { class ReconfigurationResponseParameter; }
namespace dcsctp { class RetransmissionQueue; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct ParameterDescriptor; }
// clang-format on

namespace dcsctp {

class StreamResetHandler {
public:
    // prevent constructor by default
    StreamResetHandler& operator=(StreamResetHandler const&);
    StreamResetHandler(StreamResetHandler const&);
    StreamResetHandler();

public:
    // NOLINTBEGIN
    // symbol: ?AddHandoverState@StreamResetHandler@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol: ?GetHandoverReadiness@StreamResetHandler@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol: ?HandleReConfig@StreamResetHandler@dcsctp@@QEAAXVReConfigChunk@2@@Z
    MCAPI void HandleReConfig(class dcsctp::ReConfigChunk);

    // symbol: ?MakeStreamResetRequest@StreamResetHandler@dcsctp@@QEAA?AV?$optional@VReConfigChunk@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::ReConfigChunk> MakeStreamResetRequest();

    // symbol:
    // ?ResetStreams@StreamResetHandler@dcsctp@@QEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    MCAPI void
        ResetStreams(class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>);

    // symbol:
    // ??0StreamResetHandler@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVContext@1@PEAVTimerManager@1@PEAVDataTracker@1@PEAVReassemblyQueue@1@PEAVRetransmissionQueue@1@PEBUDcSctpSocketHandoverState@1@@Z
    MCAPI
    StreamResetHandler(std::string_view, class dcsctp::Context*, class dcsctp::TimerManager*, class dcsctp::DataTracker*, class dcsctp::ReassemblyQueue*, class dcsctp::RetransmissionQueue*, struct dcsctp::DcSctpSocketHandoverState const*);

    // symbol: ??1StreamResetHandler@dcsctp@@QEAA@XZ
    MCAPI ~StreamResetHandler();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?HandleResetIncoming@StreamResetHandler@dcsctp@@AEAAXAEBUParameterDescriptor@2@AEAV?$vector@VReconfigurationResponseParameter@dcsctp@@V?$allocator@VReconfigurationResponseParameter@dcsctp@@@std@@@std@@@Z
    MCAPI void
    HandleResetIncoming(struct dcsctp::ParameterDescriptor const&, std::vector<class dcsctp::ReconfigurationResponseParameter>&);

    // symbol:
    // ?HandleResetOutgoing@StreamResetHandler@dcsctp@@AEAAXAEBUParameterDescriptor@2@AEAV?$vector@VReconfigurationResponseParameter@dcsctp@@V?$allocator@VReconfigurationResponseParameter@dcsctp@@@std@@@std@@@Z
    MCAPI void
    HandleResetOutgoing(struct dcsctp::ParameterDescriptor const&, std::vector<class dcsctp::ReconfigurationResponseParameter>&);

    // symbol: ?HandleResponse@StreamResetHandler@dcsctp@@AEAAXAEBUParameterDescriptor@2@@Z
    MCAPI void HandleResponse(struct dcsctp::ParameterDescriptor const&);

    // symbol: ?MakeReconfigChunk@StreamResetHandler@dcsctp@@AEAA?AVReConfigChunk@2@XZ
    MCAPI class dcsctp::ReConfigChunk MakeReconfigChunk();

    // symbol: ?OnReconfigTimerExpiry@StreamResetHandler@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnReconfigTimerExpiry();

    // symbol:
    // ?Process@StreamResetHandler@dcsctp@@AEAA?AV?$optional@V?$vector@VReconfigurationResponseParameter@dcsctp@@V?$allocator@VReconfigurationResponseParameter@dcsctp@@@std@@@std@@@std@@AEBVReConfigChunk@2@@Z
    MCAPI std::optional<std::vector<class dcsctp::ReconfigurationResponseParameter>>
          Process(class dcsctp::ReConfigChunk const&);

    // symbol: ?Validate@StreamResetHandler@dcsctp@@AEAA_NAEBVReConfigChunk@2@@Z
    MCAPI bool Validate(class dcsctp::ReConfigChunk const&);

    // symbol:
    // ?ValidateReqSeqNbr@StreamResetHandler@dcsctp@@AEAA_NV?$StrongAlias@VReconfigRequestSNTag@dcsctp@@I@webrtc@@AEAV?$vector@VReconfigurationResponseParameter@dcsctp@@V?$allocator@VReconfigurationResponseParameter@dcsctp@@@std@@@std@@@Z
    MCAPI bool
    ValidateReqSeqNbr(class webrtc::StrongAlias<class dcsctp::ReconfigRequestSNTag, uint>, std::vector<class dcsctp::ReconfigurationResponseParameter>&);

    // NOLINTEND
};

}; // namespace dcsctp
