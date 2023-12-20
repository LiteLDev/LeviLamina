#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class BitrateProber {
public:
    // BitrateProber inner types declare
    // clang-format off
    struct ProbeCluster;
    // clang-format on

    // BitrateProber inner types define
    struct ProbeCluster {
    public:
        // prevent constructor by default
        ProbeCluster& operator=(ProbeCluster const&);
        ProbeCluster(ProbeCluster const&);
        ProbeCluster();
    };

public:
    // prevent constructor by default
    BitrateProber& operator=(BitrateProber const&);
    BitrateProber(BitrateProber const&);
    BitrateProber();

public:
    // NOLINTBEGIN
    // symbol: ??0BitrateProber@webrtc@@QEAA@AEBVFieldTrialsView@1@@Z
    MCAPI explicit BitrateProber(class webrtc::FieldTrialsView const&);

    // symbol: ?CreateProbeCluster@BitrateProber@webrtc@@QEAAXAEBUProbeClusterConfig@2@@Z
    MCAPI void CreateProbeCluster(struct webrtc::ProbeClusterConfig const&);

    // symbol: ?CurrentCluster@BitrateProber@webrtc@@QEAA?AV?$optional@UPacedPacketInfo@webrtc@@@std@@VTimestamp@2@@Z
    MCAPI std::optional<struct webrtc::PacedPacketInfo> CurrentCluster(class webrtc::Timestamp);

    // symbol: ?NextProbeTime@BitrateProber@webrtc@@QEBA?AVTimestamp@2@V32@@Z
    MCAPI class webrtc::Timestamp NextProbeTime(class webrtc::Timestamp) const;

    // symbol: ?OnIncomingPacket@BitrateProber@webrtc@@QEAAXVDataSize@2@@Z
    MCAPI void OnIncomingPacket(class webrtc::DataSize);

    // symbol: ?ProbeSent@BitrateProber@webrtc@@QEAAXVTimestamp@2@VDataSize@2@@Z
    MCAPI void ProbeSent(class webrtc::Timestamp, class webrtc::DataSize);

    // symbol: ?RecommendedMinProbeSize@BitrateProber@webrtc@@QEBA?AVDataSize@2@XZ
    MCAPI class webrtc::DataSize RecommendedMinProbeSize() const;

    // symbol: ?SetEnabled@BitrateProber@webrtc@@QEAAX_N@Z
    MCAPI void SetEnabled(bool);

    // symbol: ??1BitrateProber@webrtc@@QEAA@XZ
    MCAPI ~BitrateProber();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CalculateNextProbeTime@BitrateProber@webrtc@@AEBA?AVTimestamp@2@AEBUProbeCluster@12@@Z
    MCAPI class webrtc::Timestamp CalculateNextProbeTime(struct webrtc::BitrateProber::ProbeCluster const&) const;

    // NOLINTEND
};

}; // namespace webrtc
