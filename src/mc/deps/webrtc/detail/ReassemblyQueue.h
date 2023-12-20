#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/ReconfigurationResponseParameter.h"
#include "mc/deps/webrtc/detail/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class AnyForwardTsnChunk; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class OutgoingSSNResetRequestParameter; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class ReassemblyQueue {
public:
    // prevent constructor by default
    ReassemblyQueue& operator=(ReassemblyQueue const&);
    ReassemblyQueue(ReassemblyQueue const&);
    ReassemblyQueue();

public:
    // NOLINTBEGIN
    // symbol: ?Add@ReassemblyQueue@dcsctp@@QEAAXV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@2@@Z
    MCAPI void Add(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data);

    // symbol: ?AddHandoverState@ReassemblyQueue@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol:
    // ?FlushMessages@ReassemblyQueue@dcsctp@@QEAA?AV?$vector@VDcSctpMessage@dcsctp@@V?$allocator@VDcSctpMessage@dcsctp@@@std@@@std@@XZ
    MCAPI std::vector<class dcsctp::DcSctpMessage> FlushMessages();

    // symbol: ?GetHandoverReadiness@ReassemblyQueue@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol: ?Handle@ReassemblyQueue@dcsctp@@QEAAXAEBVAnyForwardTsnChunk@2@@Z
    MCAPI void Handle(class dcsctp::AnyForwardTsnChunk const&);

    // symbol: ?MaybeResetStreamsDeferred@ReassemblyQueue@dcsctp@@QEAA_NV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI bool MaybeResetStreamsDeferred(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>);

    // symbol:
    // ??0ReassemblyQueue@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@_K_N@Z
    MCAPI ReassemblyQueue(std::string_view, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, uint64, bool);

    // symbol:
    // ?ResetStreams@ReassemblyQueue@dcsctp@@QEAA?AW4Result@ReconfigurationResponseParameter@2@AEBVOutgoingSSNResetRequestParameter@2@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI ::dcsctp::ReconfigurationResponseParameter::Result
    ResetStreams(class dcsctp::OutgoingSSNResetRequestParameter const&, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>);

    // symbol: ?RestoreFromState@ReassemblyQueue@dcsctp@@QEAAXAEBUDcSctpSocketHandoverState@2@@Z
    MCAPI void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol: ??1ReassemblyQueue@dcsctp@@QEAA@XZ
    MCAPI ~ReassemblyQueue();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddReassembledMessage@ReassemblyQueue@dcsctp@@AEAAXV?$ArrayView@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@$0?BCGH@@rtc@@VDcSctpMessage@2@@Z
    MCAPI void AddReassembledMessage(
        class rtc::ArrayView<
            class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const,
            -4711>,
        class dcsctp::DcSctpMessage
    );

    // symbol: ?MaybeMoveLastAssembledWatermarkFurther@ReassemblyQueue@dcsctp@@AEAAXXZ
    MCAPI void MaybeMoveLastAssembledWatermarkFurther();

    // NOLINTEND
};

}; // namespace dcsctp
