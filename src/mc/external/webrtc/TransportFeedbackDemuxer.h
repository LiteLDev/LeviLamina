#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StreamFeedbackProvider.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamFeedbackObserver; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class TransportFeedbackDemuxer : public ::webrtc::StreamFeedbackProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk545058;
    ::ll::UntypedStorage<8, 24> mUnk323496;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportFeedbackDemuxer& operator=(TransportFeedbackDemuxer const&);
    TransportFeedbackDemuxer(TransportFeedbackDemuxer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    RegisterStreamFeedbackObserver(::std::vector<uint> ssrcs, ::webrtc::StreamFeedbackObserver* observer) /*override*/;

    virtual void DeRegisterStreamFeedbackObserver(::webrtc::StreamFeedbackObserver* observer) /*override*/;

    virtual ~TransportFeedbackDemuxer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnTransportFeedback(::webrtc::TransportPacketsFeedback const& feedback);

    MCNAPI TransportFeedbackDemuxer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $RegisterStreamFeedbackObserver(::std::vector<uint> ssrcs, ::webrtc::StreamFeedbackObserver* observer);

    MCNAPI void $DeRegisterStreamFeedbackObserver(::webrtc::StreamFeedbackObserver* observer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
