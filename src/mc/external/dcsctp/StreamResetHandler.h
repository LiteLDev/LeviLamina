#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Context; }
namespace dcsctp { class DataTracker; }
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
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class StreamResetHandler {
public:
    // prevent constructor by default
    StreamResetHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void HandleReConfig(::dcsctp::ReConfigChunk);

    MCNAPI void HandleResetIncoming(
        ::dcsctp::ParameterDescriptor const&,
        ::std::vector<::dcsctp::ReconfigurationResponseParameter>&
    );

    MCNAPI void HandleResetOutgoing(
        ::dcsctp::ParameterDescriptor const&,
        ::std::vector<::dcsctp::ReconfigurationResponseParameter>&
    );

    MCNAPI void HandleResponse(::dcsctp::ParameterDescriptor const&);

    MCNAPI ::dcsctp::ReConfigChunk MakeReconfigChunk();

    MCNAPI ::std::optional<::dcsctp::ReConfigChunk> MakeStreamResetRequest();

    MCNAPI ::webrtc::TimeDelta OnReconfigTimerExpiry();

    MCNAPI ::std::optional<::std::vector<::dcsctp::ReconfigurationResponseParameter>>
    Process(::dcsctp::ReConfigChunk const&);

    MCNAPI void ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCNAPI StreamResetHandler(
        ::std::string_view,
        ::dcsctp::Context*,
        ::dcsctp::TimerManager*,
        ::dcsctp::DataTracker*,
        ::dcsctp::ReassemblyQueue*,
        ::dcsctp::RetransmissionQueue*,
        ::dcsctp::DcSctpSocketHandoverState const*
    );

    MCNAPI bool Validate(::dcsctp::ReConfigChunk const&);

    MCNAPI bool ValidateReqSeqNbr(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::ReconfigRequestSNTag, uint>>,
        ::std::vector<::dcsctp::ReconfigurationResponseParameter>&
    );

    MCNAPI ~StreamResetHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::dcsctp::Context*,
        ::dcsctp::TimerManager*,
        ::dcsctp::DataTracker*,
        ::dcsctp::ReassemblyQueue*,
        ::dcsctp::RetransmissionQueue*,
        ::dcsctp::DcSctpSocketHandoverState const*
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
