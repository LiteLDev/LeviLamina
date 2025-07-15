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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke05ca9;
    ::ll::UntypedStorage<8, 24> mUnkfcdf4c;
    ::ll::UntypedStorage<8, 16> mUnkf40507;
    ::ll::UntypedStorage<8, 16> mUnkde845a;
    // NOLINTEND

public:
    // prevent constructor by default
    TransceiverList& operator=(TransceiverList const&);
    TransceiverList(TransceiverList const&);
    TransceiverList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    Add(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver);

    MCNAPI void DiscardStableStates();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindByMLineIndex(uint64 mline_index) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindByMid(::std::string const& mid) const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender) const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    List() const;

    MCNAPI ::std::vector<::webrtc::RtpTransceiver*> ListInternal() const;

    MCNAPI void
    Remove(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver);

    MCNAPI ::webrtc::TransceiverStableState* StableState(
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver
    );

    MCNAPI ~TransceiverList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
