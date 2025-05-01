#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class LegacyStatsCollector {
public:
    // LegacyStatsCollector inner types declare
    // clang-format off
    struct SessionStats;
    struct TransportStats;
    // clang-format on

    // LegacyStatsCollector inner types define
    struct SessionStats {
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

    struct TransportStats {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TransportStats(::std::string, ::cricket::TransportStats);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::string, ::cricket::TransportStats);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::StatsReport* AddCandidateReport(::cricket::CandidateStats const&, bool);

    MCNAPI ::webrtc::StatsReport* AddCertificateReports(::std::unique_ptr<::rtc::SSLCertificateStats>);

    MCNAPI ::webrtc::StatsReport*
    AddConnectionInfoReport(::std::string const&, int, int, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&, ::cricket::ConnectionInfo const&);

    MCNAPI void AddStream(::webrtc::MediaStreamInterface*);

    MCNAPI void AddTrack(::webrtc::MediaStreamTrackInterface*);

    MCNAPI void ExtractBweInfo();

    MCNAPI void ExtractDataInfo_n(::webrtc::StatsCollection*);

    MCNAPI void ExtractMediaInfo(::std::map<::std::string, ::std::string> const&);

    MCNAPI void ExtractSenderInfo();

    MCNAPI ::std::map<::std::string, ::std::string> ExtractSessionAndDataInfo();

    MCNAPI ::webrtc::LegacyStatsCollector::SessionStats
    ExtractSessionInfo_n(::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> const&, ::std::optional<::std::string>, ::std::optional<::std::string>);

    MCNAPI void ExtractSessionInfo_s(::webrtc::LegacyStatsCollector::SessionStats&);

    MCNAPI ::webrtc::StatsReport*
    GetReport(::webrtc::StatsReport::StatsType const&, ::std::string const&, ::webrtc::StatsReport::Direction);

    MCNAPI void InvalidateCache();

    MCNAPI bool IsValidTrack(::std::string const&);

    MCNAPI explicit LegacyStatsCollector(::webrtc::PeerConnectionInternal*);

    MCNAPI ::webrtc::StatsReport* PrepareADMReport();

    MCNAPI ::webrtc::StatsReport* PrepareReport(
        bool,
        uint,
        ::std::string const&,
        ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&,
        ::webrtc::StatsReport::Direction
    );

    MCNAPI void UpdateReportFromAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::StatsReport*, bool);

    MCNAPI void UpdateStats(::webrtc::PeerConnectionInterface::StatsOutputLevel);

    MCNAPI void UpdateStatsFromExistingLocalAudioTracks(bool);

    MCNAPI void UpdateTrackReports();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
