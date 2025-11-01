#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/LegacyStatsCollectorInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/StatsReport.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class CandidateStats; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct TransportStats; }
namespace rtc { struct SSLCertificateStats; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class StatsCollection; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class LegacyStatsCollector : public ::webrtc::LegacyStatsCollectorInterface {
public:
    // LegacyStatsCollector inner types declare
    // clang-format off
    struct SessionStats;
    struct TransportStats;
    // clang-format on
    
    // LegacyStatsCollector inner types define
    struct TransportStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk1caf98;
        ::ll::UntypedStorage<8, 56> mUnk6765fb;
        ::ll::UntypedStorage<8, 8> mUnk3ff39e;
        ::ll::UntypedStorage<8, 8> mUnkfec52c;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TransportStats& operator=(TransportStats const&);
        TransportStats(TransportStats const&);
        TransportStats();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TransportStats(::std::string transport_name, ::cricket::TransportStats transport_stats);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::string transport_name, ::cricket::TransportStats transport_stats);
        // NOLINTEND
    
    };
    
    struct SessionStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk65326e;
        ::ll::UntypedStorage<8, 24> mUnk85becd;
        ::ll::UntypedStorage<8, 16> mUnk46245a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SessionStats& operator=(SessionStats const&);
        SessionStats(SessionStats const&);
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SessionStats();
    
        MCNAPI ~SessionStats();
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
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1a38a8;
    ::ll::UntypedStorage<8, 16> mUnk24ccce;
    ::ll::UntypedStorage<8, 8> mUnka2a452;
    ::ll::UntypedStorage<8, 8> mUnk55f8dd;
    ::ll::UntypedStorage<8, 8> mUnke85b01;
    ::ll::UntypedStorage<1, 1> mUnk56a9e3;
    ::ll::UntypedStorage<8, 24> mUnkf84f18;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStatsCollector& operator=(LegacyStatsCollector const&);
    LegacyStatsCollector(LegacyStatsCollector const&);
    LegacyStatsCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyStatsCollector() /*override*/;

    // vIndex: 1
    virtual void AddLocalAudioTrack(::webrtc::AudioTrackInterface* audio_track, uint ssrc) /*override*/;

    // vIndex: 2
    virtual void RemoveLocalAudioTrack(::webrtc::AudioTrackInterface* audio_track, uint ssrc) /*override*/;

    // vIndex: 3
    virtual void GetStats(::webrtc::MediaStreamTrackInterface* track, ::std::vector<::webrtc::StatsReport const*>* reports) /*override*/;

    // vIndex: 4
    virtual double GetTimeNow();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::StatsReport* AddCandidateReport(::cricket::CandidateStats const& candidate_stats, bool local);

    MCNAPI ::webrtc::StatsReport* AddCertificateReports(::std::unique_ptr<::rtc::SSLCertificateStats> cert_stats);

    MCNAPI ::webrtc::StatsReport* AddConnectionInfoReport(::std::string const& content_name, int component, int connection_id, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& channel_report_id, ::cricket::ConnectionInfo const& info);

    MCNAPI void AddStream(::webrtc::MediaStreamInterface* stream);

    MCNAPI void AddTrack(::webrtc::MediaStreamTrackInterface* track);

    MCNAPI void ExtractBweInfo();

    MCNAPI void ExtractDataInfo_n(::webrtc::StatsCollection* reports);

    MCNAPI void ExtractMediaInfo(::std::map<::std::string, ::std::string> const& transport_names_by_mid);

    MCNAPI void ExtractSenderInfo();

    MCNAPI ::std::map<::std::string, ::std::string> ExtractSessionAndDataInfo();

    MCNAPI ::webrtc::LegacyStatsCollector::SessionStats ExtractSessionInfo_n(::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> const& transceivers, ::std::optional<::std::string> sctp_transport_name, ::std::optional<::std::string> sctp_mid);

    MCNAPI void ExtractSessionInfo_s(::webrtc::LegacyStatsCollector::SessionStats& session_stats);

    MCNAPI ::webrtc::StatsReport* GetReport(::webrtc::StatsReport::StatsType const& type, ::std::string const& id, ::webrtc::StatsReport::Direction direction);

    MCNAPI void InvalidateCache();

    MCNAPI bool IsValidTrack(::std::string const& track_id);

    MCNAPI explicit LegacyStatsCollector(::webrtc::PeerConnectionInternal* pc);

    MCNAPI ::webrtc::StatsReport* PrepareADMReport();

    MCNAPI ::webrtc::StatsReport* PrepareReport(bool local, uint ssrc, ::std::string const& track_id, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& transport_id, ::webrtc::StatsReport::Direction direction);

    MCNAPI void UpdateReportFromAudioTrack(::webrtc::AudioTrackInterface* track, ::webrtc::StatsReport* report, bool has_remote_tracks);

    MCNAPI void UpdateStats(::webrtc::PeerConnectionInterface::StatsOutputLevel level);

    MCNAPI void UpdateStatsFromExistingLocalAudioTracks(bool has_remote_tracks);

    MCNAPI void UpdateTrackReports();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionInternal* pc);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $AddLocalAudioTrack(::webrtc::AudioTrackInterface* audio_track, uint ssrc);

    MCNAPI void $RemoveLocalAudioTrack(::webrtc::AudioTrackInterface* audio_track, uint ssrc);

    MCNAPI void $GetStats(::webrtc::MediaStreamTrackInterface* track, ::std::vector<::webrtc::StatsReport const*>* reports);

    MCNAPI double $GetTimeNow();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
