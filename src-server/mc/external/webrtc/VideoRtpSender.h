#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RtpSenderBase.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class VideoRtpSender : public ::webrtc::RtpSenderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk18b2f8;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoRtpSender& operator=(VideoRtpSender const&);
    VideoRtpSender(VideoRtpSender const&);
    VideoRtpSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~VideoRtpSender() /*override*/;

    // vIndex: 0
    virtual void OnChanged() /*override*/;

    // vIndex: 7
    virtual ::cricket::MediaType media_type() const /*override*/;

    // vIndex: 35
    virtual ::std::string track_kind() const /*override*/;

    // vIndex: 15
    virtual ::webrtc::scoped_refptr<::webrtc::DtmfSenderInterface> GetDtmfSender() const /*override*/;

    // vIndex: 42
    virtual ::webrtc::RTCError GenerateKeyFrame(::std::vector<::std::string> const& rids) /*override*/;

    // vIndex: 36
    virtual void SetSend() /*override*/;

    // vIndex: 37
    virtual void ClearSend() /*override*/;

    // vIndex: 38
    virtual void AttachTrack() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoRtpSender(::rtc::Thread* worker_thread, ::std::string const& id, ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::VideoRtpSender> Create(::rtc::Thread* worker_thread, ::std::string const& id, ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread* worker_thread, ::std::string const& id, ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnChanged();

    MCNAPI ::cricket::MediaType $media_type() const;

    MCNAPI ::std::string $track_kind() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtmfSenderInterface> $GetDtmfSender() const;

    MCNAPI ::webrtc::RTCError $GenerateKeyFrame(::std::vector<::std::string> const& rids);

    MCNAPI void $SetSend();

    MCNAPI void $ClearSend();

    MCNAPI void $AttachTrack();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForObserverInterface();

    MCNAPI static void** $vftableForRtpSenderInternal();
    // NOLINTEND

};

}
