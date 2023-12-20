#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::metrics { class Histogram; }
// clang-format on

namespace webrtc::metrics {
// NOLINTBEGIN
// symbol: ?HistogramAdd@metrics@webrtc@@YAXPEAVHistogram@12@H@Z
MCAPI void HistogramAdd(class webrtc::metrics::Histogram*, int);

// symbol:
// ?HistogramFactoryGetCounts@metrics@webrtc@@YAPEAVHistogram@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HHH@Z
MCAPI class webrtc::metrics::Histogram* HistogramFactoryGetCounts(std::string_view, int, int, int);

// symbol:
// ?HistogramFactoryGetCountsLinear@metrics@webrtc@@YAPEAVHistogram@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HHH@Z
MCAPI class webrtc::metrics::Histogram* HistogramFactoryGetCountsLinear(std::string_view, int, int, int);

// symbol:
// ?HistogramFactoryGetEnumeration@metrics@webrtc@@YAPEAVHistogram@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
MCAPI class webrtc::metrics::Histogram* HistogramFactoryGetEnumeration(std::string_view, int);

// symbol:
// ?SparseHistogramFactoryGetEnumeration@metrics@webrtc@@YAPEAVHistogram@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
MCAPI class webrtc::metrics::Histogram* SparseHistogramFactoryGetEnumeration(std::string_view, int);
// NOLINTEND

}; // namespace webrtc::metrics
