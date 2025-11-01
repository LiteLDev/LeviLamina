#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkControllerInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
namespace webrtc { struct GoogCcConfig; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkControllerConfig; }
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacerConfig; }
namespace webrtc { struct ProbeClusterConfig; }
namespace webrtc { struct ProcessInterval; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RemoteBitrateReport; }
namespace webrtc { struct RoundTripTimeUpdate; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct StreamsConfig; }
namespace webrtc { struct TargetRateConstraints; }
namespace webrtc { struct TransportLossReport; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class GoogCcNetworkController : public ::webrtc::NetworkControllerInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnk9dee80;
    ::ll::UntypedStorage<8, 8>   mUnk56de5d;
    ::ll::UntypedStorage<8, 8>   mUnkf8a57f;
    ::ll::UntypedStorage<1, 1>   mUnkeb147a;
    ::ll::UntypedStorage<8, 80>  mUnkf0a30a;
    ::ll::UntypedStorage<8, 80>  mUnk57188c;
    ::ll::UntypedStorage<1, 1>   mUnk8b17cf;
    ::ll::UntypedStorage<1, 1>   mUnkd58c61;
    ::ll::UntypedStorage<1, 1>   mUnke79c09;
    ::ll::UntypedStorage<8, 88>  mUnk97e0f2;
    ::ll::UntypedStorage<1, 1>   mUnk46382c;
    ::ll::UntypedStorage<8, 8>   mUnkf78e5a;
    ::ll::UntypedStorage<8, 8>   mUnke27abc;
    ::ll::UntypedStorage<8, 8>   mUnk7637d6;
    ::ll::UntypedStorage<8, 8>   mUnk84640f;
    ::ll::UntypedStorage<8, 8>   mUnk3f6052;
    ::ll::UntypedStorage<8, 8>   mUnk42dbaa;
    ::ll::UntypedStorage<8, 8>   mUnk595730;
    ::ll::UntypedStorage<8, 8>   mUnk43c663;
    ::ll::UntypedStorage<8, 8>   mUnk97c5dd;
    ::ll::UntypedStorage<8, 160> mUnka6a5d1;
    ::ll::UntypedStorage<8, 8>   mUnkee1d17;
    ::ll::UntypedStorage<8, 8>   mUnk9181df;
    ::ll::UntypedStorage<8, 8>   mUnk302bae;
    ::ll::UntypedStorage<8, 16>  mUnkc614fc;
    ::ll::UntypedStorage<1, 1>   mUnk4f7e31;
    ::ll::UntypedStorage<8, 144> mUnk22a689;
    ::ll::UntypedStorage<8, 8>   mUnk3899cf;
    ::ll::UntypedStorage<4, 4>   mUnka9ed58;
    ::ll::UntypedStorage<4, 4>   mUnk764bf4;
    ::ll::UntypedStorage<8, 40>  mUnka869dc;
    ::ll::UntypedStorage<8, 8>   mUnk9effed;
    ::ll::UntypedStorage<8, 8>   mUnk55879d;
    ::ll::UntypedStorage<8, 8>   mUnk5bd68b;
    ::ll::UntypedStorage<4, 4>   mUnk221689;
    ::ll::UntypedStorage<1, 2>   mUnk69d66c;
    ::ll::UntypedStorage<8, 8>   mUnkec4825;
    ::ll::UntypedStorage<8, 8>   mUnk90b4fc;
    ::ll::UntypedStorage<8, 8>   mUnkce643d;
    ::ll::UntypedStorage<8, 8>   mUnk754d1d;
    ::ll::UntypedStorage<1, 1>   mUnkc80683;
    ::ll::UntypedStorage<8, 16>  mUnke4b5a1;
    // NOLINTEND

public:
    // prevent constructor by default
    GoogCcNetworkController& operator=(GoogCcNetworkController const&);
    GoogCcNetworkController(GoogCcNetworkController const&);
    GoogCcNetworkController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GoogCcNetworkController() /*override*/;

    // vIndex: 1
    virtual ::webrtc::NetworkControlUpdate OnNetworkAvailability(::webrtc::NetworkAvailability msg) /*override*/;

    // vIndex: 2
    virtual ::webrtc::NetworkControlUpdate OnNetworkRouteChange(::webrtc::NetworkRouteChange msg) /*override*/;

    // vIndex: 3
    virtual ::webrtc::NetworkControlUpdate OnProcessInterval(::webrtc::ProcessInterval msg) /*override*/;

    // vIndex: 4
    virtual ::webrtc::NetworkControlUpdate OnRemoteBitrateReport(::webrtc::RemoteBitrateReport msg) /*override*/;

    // vIndex: 5
    virtual ::webrtc::NetworkControlUpdate OnRoundTripTimeUpdate(::webrtc::RoundTripTimeUpdate msg) /*override*/;

    // vIndex: 6
    virtual ::webrtc::NetworkControlUpdate OnSentPacket(::webrtc::SentPacket sent_packet) /*override*/;

    // vIndex: 7
    virtual ::webrtc::NetworkControlUpdate OnReceivedPacket(::webrtc::ReceivedPacket received_packet) /*override*/;

    // vIndex: 8
    virtual ::webrtc::NetworkControlUpdate OnStreamsConfig(::webrtc::StreamsConfig msg) /*override*/;

    // vIndex: 9
    virtual ::webrtc::NetworkControlUpdate
    OnTargetRateConstraints(::webrtc::TargetRateConstraints constraints) /*override*/;

    // vIndex: 10
    virtual ::webrtc::NetworkControlUpdate OnTransportLossReport(::webrtc::TransportLossReport msg) /*override*/;

    // vIndex: 11
    virtual ::webrtc::NetworkControlUpdate
    OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback report) /*override*/;

    // vIndex: 12
    virtual ::webrtc::NetworkControlUpdate OnNetworkStateEstimate(::webrtc::NetworkStateEstimate msg) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ClampConstraints();

    MCNAPI ::webrtc::PacerConfig GetPacingRates(::webrtc::Timestamp at_time) const;

    MCNAPI GoogCcNetworkController(::webrtc::NetworkControllerConfig config, ::webrtc::GoogCcConfig goog_cc_config);

    MCNAPI void MaybeTriggerOnNetworkChanged(::webrtc::NetworkControlUpdate* update, ::webrtc::Timestamp at_time);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig>
    ResetConstraints(::webrtc::TargetRateConstraints new_constraints);

    MCNAPI void UpdateCongestionWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::NetworkControllerConfig config, ::webrtc::GoogCcConfig goog_cc_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::NetworkControlUpdate $OnNetworkAvailability(::webrtc::NetworkAvailability msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnNetworkRouteChange(::webrtc::NetworkRouteChange msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnProcessInterval(::webrtc::ProcessInterval msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnRemoteBitrateReport(::webrtc::RemoteBitrateReport msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnRoundTripTimeUpdate(::webrtc::RoundTripTimeUpdate msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnSentPacket(::webrtc::SentPacket sent_packet);

    MCNAPI ::webrtc::NetworkControlUpdate $OnReceivedPacket(::webrtc::ReceivedPacket received_packet);

    MCNAPI ::webrtc::NetworkControlUpdate $OnStreamsConfig(::webrtc::StreamsConfig msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnTargetRateConstraints(::webrtc::TargetRateConstraints constraints);

    MCNAPI ::webrtc::NetworkControlUpdate $OnTransportLossReport(::webrtc::TransportLossReport msg);

    MCNAPI ::webrtc::NetworkControlUpdate $OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback report);

    MCNAPI ::webrtc::NetworkControlUpdate $OnNetworkStateEstimate(::webrtc::NetworkStateEstimate msg);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
