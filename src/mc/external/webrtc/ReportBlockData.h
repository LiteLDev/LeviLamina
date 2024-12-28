#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class ReportBlock; }
// clang-format on

namespace webrtc {

class ReportBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3b8d7a;
    ::ll::UntypedStorage<4, 4> mUnka2f4d1;
    ::ll::UntypedStorage<1, 1> mUnkf9097c;
    ::ll::UntypedStorage<4, 4> mUnk4b6bd3;
    ::ll::UntypedStorage<4, 4> mUnkcdb530;
    ::ll::UntypedStorage<4, 4> mUnkba9e0c;
    ::ll::UntypedStorage<8, 8> mUnkcc2639;
    ::ll::UntypedStorage<8, 8> mUnkfe43e3;
    ::ll::UntypedStorage<8, 8> mUnk3ca37c;
    ::ll::UntypedStorage<8, 8> mUnkea71c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportBlockData& operator=(ReportBlockData const&);
    ReportBlockData(ReportBlockData const&);
    ReportBlockData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddRoundTripTimeSample(::webrtc::TimeDelta);

    MCAPI void SetReportBlock(uint, ::webrtc::rtcp::ReportBlock const&, ::webrtc::Timestamp);

    MCAPI ::webrtc::TimeDelta jitter(int) const;
    // NOLINTEND
};

} // namespace webrtc
