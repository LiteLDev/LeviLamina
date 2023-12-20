#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class BitrateEstimator {
public:
    // prevent constructor by default
    BitrateEstimator& operator=(BitrateEstimator const&);
    BitrateEstimator(BitrateEstimator const&);
    BitrateEstimator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BitrateEstimator@webrtc@@UEAA@XZ
    virtual ~BitrateEstimator();

    // vIndex: 1, symbol: ?Update@BitrateEstimator@webrtc@@UEAAXVTimestamp@2@VDataSize@2@_N@Z
    virtual void Update(class webrtc::Timestamp, class webrtc::DataSize, bool);

    // vIndex: 2, symbol: ?bitrate@BitrateEstimator@webrtc@@UEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    virtual std::optional<class webrtc::DataRate> bitrate() const;

    // vIndex: 3, symbol: ?ExpectFastRateChange@BitrateEstimator@webrtc@@UEAAXXZ
    virtual void ExpectFastRateChange();

    // symbol: ??0BitrateEstimator@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit BitrateEstimator(class webrtc::FieldTrialsView const*);

    // symbol: ?PeekRate@BitrateEstimator@webrtc@@QEBA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    MCAPI std::optional<class webrtc::DataRate> PeekRate() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?UpdateWindow@BitrateEstimator@webrtc@@AEAAM_JHHPEA_N@Z
    MCAPI float UpdateWindow(int64, int, int, bool*);

    // NOLINTEND
};

}; // namespace webrtc
