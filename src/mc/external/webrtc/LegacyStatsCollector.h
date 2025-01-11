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
        MCAPI SessionStats();

        MCAPI ~SessionStats();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct TransportStats {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI TransportStats(::std::string, ::cricket::TransportStats);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string, ::cricket::TransportStats);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::StatsReport* AddCandidateReport(::cricket::CandidateStats const&, bool);

    MCAPI ::webrtc::StatsReport* AddCertificateReports(::std::unique_ptr<::rtc::SSLCertificateStats>);

    MCAPI ::webrtc::StatsReport*
    AddConnectionInfoReport(::std::string const&, int, int, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&, ::cricket::ConnectionInfo const&);

    MCAPI void AddStream(::webrtc::MediaStreamInterface*);

    MCAPI void AddTrack(::webrtc::MediaStreamTrackInterface*);

    MCAPI void ExtractBweInfo();

    MCAPI void ExtractDataInfo_n(::webrtc::StatsCollection*);

    MCAPI void ExtractMediaInfo(::std::map<::std::string, ::std::string> const&);

    MCAPI void ExtractSenderInfo();

    MCAPI ::std::map<::std::string, ::std::string> ExtractSessionAndDataInfo();

    MCAPI ::webrtc::LegacyStatsCollector::SessionStats
    ExtractSessionInfo_n(::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> const&, ::std::optional<::std::string>, ::std::optional<::std::string>);

    MCAPI void ExtractSessionInfo_s(::webrtc::LegacyStatsCollector::SessionStats&);

    MCAPI ::webrtc::StatsReport*
    GetReport(::webrtc::StatsReport::StatsType const&, ::std::string const&, ::webrtc::StatsReport::Direction);

    MCAPI void InvalidateCache();

    MCAPI bool IsValidTrack(::std::string const&);

    MCAPI explicit LegacyStatsCollector(::webrtc::PeerConnectionInternal*);

    MCAPI ::webrtc::StatsReport* PrepareADMReport();

    MCAPI ::webrtc::StatsReport* PrepareReport(
        bool,
        uint,
        ::std::string const&,
        ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&,
        ::webrtc::StatsReport::Direction
    );

    MCAPI void UpdateReportFromAudioTrack(::webrtc::AudioTrackInterface*, ::webrtc::StatsReport*, bool);

    MCAPI void UpdateStats(::webrtc::PeerConnectionInterface::StatsOutputLevel);

    MCAPI void UpdateStatsFromExistingLocalAudioTracks(bool);

    MCAPI void UpdateTrackReports();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::PeerConnectionInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
