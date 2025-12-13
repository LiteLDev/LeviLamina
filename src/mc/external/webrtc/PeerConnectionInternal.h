#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/AudioDeviceModule.h"
#include "mc/external/webrtc/Call.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionSdpMethods.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class CandidateStats; }
namespace cricket { struct TransportStats; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { class Thread; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { struct DataChannelStats; }
// clang-format on

namespace webrtc {

class PeerConnectionInternal : public ::webrtc::PeerConnectionInterface, public ::webrtc::PeerConnectionSdpMethods {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::rtc::Thread* network_thread() const = 0;

    virtual ::rtc::Thread* worker_thread() const = 0;

    virtual bool initial_offerer() const = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    GetTransceiversInternal() const = 0;

    virtual ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const;

    virtual ::std::optional<::std::string> sctp_transport_name() const = 0;

    virtual ::std::vector<::cricket::CandidateStats> GetPooledCandidateStats() const = 0;

    virtual ::std::map<::std::string, ::cricket::TransportStats>
    GetTransportStatsByNames(::std::set<::std::string> const&) = 0;

    virtual ::webrtc::Call::Stats GetCallStats() = 0;

    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats() = 0;

    virtual bool GetLocalCertificate(::std::string const&, ::webrtc::scoped_refptr<::rtc::RTCCertificate>*) = 0;

    virtual ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const&) = 0;

    virtual bool IceRestartPending(::std::string const&) const = 0;

    virtual bool GetSslRole(::std::string const&, ::rtc::SSLRole*) = 0;

    virtual void NoteDataAddedEvent();

    virtual void OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state);

    virtual ~PeerConnectionInternal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
