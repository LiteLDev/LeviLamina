#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
// clang-format on

namespace webrtc {

class RtpBitrateConfigurator {
public:
    // prevent constructor by default
    RtpBitrateConfigurator& operator=(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator();

public:
    // NOLINTBEGIN
    // symbol: ?GetConfig@RtpBitrateConfigurator@webrtc@@QEBA?AUBitrateConstraints@2@XZ
    MCAPI struct webrtc::BitrateConstraints GetConfig() const;

    // symbol: ??0RtpBitrateConfigurator@webrtc@@QEAA@AEBUBitrateConstraints@1@@Z
    MCAPI explicit RtpBitrateConfigurator(struct webrtc::BitrateConstraints const&);

    // symbol:
    // ?UpdateWithClientPreferences@RtpBitrateConfigurator@webrtc@@QEAA?AV?$optional@UBitrateConstraints@webrtc@@@std@@AEBUBitrateSettings@2@@Z
    MCAPI std::optional<struct webrtc::BitrateConstraints>
          UpdateWithClientPreferences(struct webrtc::BitrateSettings const&);

    // symbol:
    // ?UpdateWithRelayCap@RtpBitrateConfigurator@webrtc@@QEAA?AV?$optional@UBitrateConstraints@webrtc@@@std@@VDataRate@2@@Z
    MCAPI std::optional<struct webrtc::BitrateConstraints> UpdateWithRelayCap(class webrtc::DataRate);

    // symbol:
    // ?UpdateWithSdpParameters@RtpBitrateConfigurator@webrtc@@QEAA?AV?$optional@UBitrateConstraints@webrtc@@@std@@AEBUBitrateConstraints@2@@Z
    MCAPI std::optional<struct webrtc::BitrateConstraints>
          UpdateWithSdpParameters(struct webrtc::BitrateConstraints const&);

    // symbol: ??1RtpBitrateConfigurator@webrtc@@QEAA@XZ
    MCAPI ~RtpBitrateConfigurator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?UpdateConstraints@RtpBitrateConfigurator@webrtc@@AEAA?AV?$optional@UBitrateConstraints@webrtc@@@std@@AEBV?$optional@H@4@@Z
    MCAPI std::optional<struct webrtc::BitrateConstraints> UpdateConstraints(std::optional<int> const&);

    // NOLINTEND
};

}; // namespace webrtc
