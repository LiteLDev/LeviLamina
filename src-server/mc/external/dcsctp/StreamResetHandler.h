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
    // StreamResetHandler inner types declare
    // clang-format off
    class CurrentRequest;
    // clang-format on
    
    // StreamResetHandler inner types define
    class CurrentRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk7526ed;
        ::ll::UntypedStorage<4, 4> mUnk6407d2;
        ::ll::UntypedStorage<8, 24> mUnk639e19;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CurrentRequest& operator=(CurrentRequest const&);
        CurrentRequest(CurrentRequest const&);
        CurrentRequest();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf1ba99;
    ::ll::UntypedStorage<8, 8> mUnkd12b18;
    ::ll::UntypedStorage<8, 8> mUnk512da3;
    ::ll::UntypedStorage<8, 8> mUnk429750;
    ::ll::UntypedStorage<8, 8> mUnkfc9914;
    ::ll::UntypedStorage<8, 16> mUnkb30ce0;
    ::ll::UntypedStorage<8, 8> mUnk724ccd;
    ::ll::UntypedStorage<4, 4> mUnkc24295;
    ::ll::UntypedStorage<8, 48> mUnk541a8a;
    ::ll::UntypedStorage<8, 8> mUnk5bba38;
    ::ll::UntypedStorage<4, 4> mUnk174adc;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamResetHandler& operator=(StreamResetHandler const&);
    StreamResetHandler(StreamResetHandler const&);
    StreamResetHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void HandleReConfig(::dcsctp::ReConfigChunk chunk);

    MCNAPI void HandleResetIncoming(::dcsctp::ParameterDescriptor const& descriptor, ::std::vector<::dcsctp::ReconfigurationResponseParameter>& responses);

    MCNAPI void HandleResetOutgoing(::dcsctp::ParameterDescriptor const& descriptor, ::std::vector<::dcsctp::ReconfigurationResponseParameter>& responses);

    MCNAPI void HandleResponse(::dcsctp::ParameterDescriptor const& descriptor);

    MCNAPI ::dcsctp::ReConfigChunk MakeReconfigChunk();

    MCNAPI ::std::optional<::dcsctp::ReConfigChunk> MakeStreamResetRequest();

    MCNAPI ::webrtc::TimeDelta OnReconfigTimerExpiry();

    MCNAPI ::std::optional<::std::vector<::dcsctp::ReconfigurationResponseParameter>> Process(::dcsctp::ReConfigChunk const& chunk);

    MCNAPI void ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams);

    MCNAPI StreamResetHandler(::std::string_view log_prefix, ::dcsctp::Context* context, ::dcsctp::TimerManager* timer_manager, ::dcsctp::DataTracker* data_tracker, ::dcsctp::ReassemblyQueue* reassembly_queue, ::dcsctp::RetransmissionQueue* retransmission_queue, ::dcsctp::DcSctpSocketHandoverState const* handover_state);

    MCNAPI bool Validate(::dcsctp::ReConfigChunk const& chunk);

    MCNAPI bool ValidateReqSeqNbr(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::ReconfigRequestSNTag, uint>> req_seq_nbr, ::std::vector<::dcsctp::ReconfigurationResponseParameter>& responses);

    MCNAPI ~StreamResetHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view log_prefix, ::dcsctp::Context* context, ::dcsctp::TimerManager* timer_manager, ::dcsctp::DataTracker* data_tracker, ::dcsctp::ReassemblyQueue* reassembly_queue, ::dcsctp::RetransmissionQueue* retransmission_queue, ::dcsctp::DcSctpSocketHandoverState const* handover_state);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
