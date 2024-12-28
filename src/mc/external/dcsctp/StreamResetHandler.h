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
    StreamResetHandler& operator=(StreamResetHandler const&);
    StreamResetHandler(StreamResetHandler const&);
    StreamResetHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI void HandleReConfig(::dcsctp::ReConfigChunk);

    MCAPI void
    HandleResetIncoming(::dcsctp::ParameterDescriptor const&, ::std::vector<::dcsctp::ReconfigurationResponseParameter>&);

    MCAPI void
    HandleResetOutgoing(::dcsctp::ParameterDescriptor const&, ::std::vector<::dcsctp::ReconfigurationResponseParameter>&);

    MCAPI void HandleResponse(::dcsctp::ParameterDescriptor const&);

    MCAPI ::dcsctp::ReConfigChunk MakeReconfigChunk();

    MCAPI ::std::optional<::dcsctp::ReConfigChunk> MakeStreamResetRequest();

    MCAPI ::webrtc::TimeDelta OnReconfigTimerExpiry();

    MCAPI ::std::optional<::std::vector<::dcsctp::ReconfigurationResponseParameter>>
    Process(::dcsctp::ReConfigChunk const&);

    MCAPI void ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>);

    MCAPI
    StreamResetHandler(::std::string_view, ::dcsctp::Context*, ::dcsctp::TimerManager*, ::dcsctp::DataTracker*, ::dcsctp::ReassemblyQueue*, ::dcsctp::RetransmissionQueue*, ::dcsctp::DcSctpSocketHandoverState const*);

    MCAPI bool Validate(::dcsctp::ReConfigChunk const&);

    MCAPI bool
    ValidateReqSeqNbr(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::ReconfigRequestSNTag, uint>>, ::std::vector<::dcsctp::ReconfigurationResponseParameter>&);

    MCAPI ~StreamResetHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string_view, ::dcsctp::Context*, ::dcsctp::TimerManager*, ::dcsctp::DataTracker*, ::dcsctp::ReassemblyQueue*, ::dcsctp::RetransmissionQueue*, ::dcsctp::DcSctpSocketHandoverState const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
