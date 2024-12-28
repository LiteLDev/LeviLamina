#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::metrics { class Histogram; }
// clang-format on

namespace webrtc::metrics {
// functions
// NOLINTBEGIN
MCAPI void HistogramAdd(::webrtc::metrics::Histogram*, int);

MCAPI ::webrtc::metrics::Histogram* HistogramFactoryGetCounts(::std::string_view, int, int, int);

MCAPI ::webrtc::metrics::Histogram* HistogramFactoryGetCountsLinear(::std::string_view, int, int, int);

MCAPI ::webrtc::metrics::Histogram* HistogramFactoryGetEnumeration(::std::string_view, int);

MCAPI ::webrtc::metrics::Histogram* SparseHistogramFactoryGetEnumeration(::std::string_view, int);
// NOLINTEND

} // namespace webrtc::metrics
