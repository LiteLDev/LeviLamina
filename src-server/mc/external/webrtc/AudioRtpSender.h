#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/DtmfProviderInterface.h"
#include "mc/external/webrtc/RtpSenderBase.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class AudioRtpSender : public ::webrtc::DtmfProviderInterface, public ::webrtc::RtpSenderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb28e63;
    ::ll::UntypedStorage<8, 8> mUnkedb02c;
    ::ll::UntypedStorage<8, 8> mUnk393418;
    ::ll::UntypedStorage<1, 1> mUnk8d3d1e;
    ::ll::UntypedStorage<8, 8> mUnk74471a;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioRtpSender& operator=(AudioRtpSender const&);
    AudioRtpSender(AudioRtpSender const&);
    AudioRtpSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~AudioRtpSender() /*override*/;

    // vIndex: 0
    virtual bool CanInsertDtmf() /*override*/;

    // vIndex: 1
    virtual bool InsertDtmf(int code, int duration) /*override*/;

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

    // vIndex: 39
    virtual void DetachTrack() /*override*/;

    // vIndex: 40
    virtual void AddTrackToStats() /*override*/;

    // vIndex: 41
    virtual void RemoveTrackFromStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioRtpSender(
        ::rtc::Thread*                               worker_thread,
        ::std::string const&                         id,
        ::webrtc::LegacyStatsCollectorInterface*     legacy_stats,
        ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::AudioRtpSender> Create(
        ::rtc::Thread*                               worker_thread,
        ::std::string const&                         id,
        ::webrtc::LegacyStatsCollectorInterface*     stats,
        ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                               worker_thread,
        ::std::string const&                         id,
        ::webrtc::LegacyStatsCollectorInterface*     legacy_stats,
        ::webrtc::RtpSenderBase::SetStreamsObserver* set_streams_observer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $CanInsertDtmf();

    MCNAPI bool $InsertDtmf(int code, int duration);

    MCNAPI void $OnChanged();

    MCNAPI ::cricket::MediaType $media_type() const;

    MCNAPI ::std::string $track_kind() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtmfSenderInterface> $GetDtmfSender() const;

    MCNAPI ::webrtc::RTCError $GenerateKeyFrame(::std::vector<::std::string> const& rids);

    MCNAPI void $SetSend();

    MCNAPI void $ClearSend();

    MCNAPI void $AttachTrack();

    MCNAPI void $DetachTrack();

    MCNAPI void $AddTrackToStats();

    MCNAPI void $RemoveTrackFromStats();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForObserverInterface();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRtpSenderInternal();
    // NOLINTEND
};

} // namespace webrtc
