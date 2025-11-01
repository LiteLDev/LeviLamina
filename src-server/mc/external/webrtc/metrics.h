#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::metrics { class Histogram; }
// clang-format on

namespace webrtc::metrics {
// functions
// NOLINTBEGIN
MCNAPI void HistogramAdd(::webrtc::metrics::Histogram* histogram_pointer, int sample);

MCNAPI ::webrtc::metrics::Histogram*
HistogramFactoryGetCounts(::std::string_view name, int min, int max, int bucket_count);

MCNAPI ::webrtc::metrics::Histogram*
HistogramFactoryGetCountsLinear(::std::string_view name, int min, int max, int bucket_count);

MCNAPI ::webrtc::metrics::Histogram* HistogramFactoryGetEnumeration(::std::string_view name, int boundary);

MCNAPI ::webrtc::metrics::Histogram* SparseHistogramFactoryGetEnumeration(::std::string_view name, int boundary);
// NOLINTEND

} // namespace webrtc::metrics
