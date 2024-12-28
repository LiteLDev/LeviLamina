#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class TransceiverStableState; }
// clang-format on

namespace webrtc {

class TransceiverList {
public:
    // prevent constructor by default
    TransceiverList& operator=(TransceiverList const&);
    TransceiverList(TransceiverList const&);
    TransceiverList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>);

    MCAPI void DiscardStableStates();

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindByMLineIndex(uint64) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindByMid(::std::string const&) const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>) const;

    MCAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    List() const;

    MCAPI ::std::vector<::webrtc::RtpTransceiver*> ListInternal() const;

    MCAPI void Remove(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>);

    MCAPI ::webrtc::TransceiverStableState*
        StableState(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>);

    MCAPI ~TransceiverList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
