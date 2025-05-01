#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::metrics { class Histogram; }
// clang-format on

namespace webrtc::metrics {
// functions
// NOLINTBEGIN
MCNAPI void HistogramAdd(::webrtc::metrics::Histogram*, int);

MCNAPI ::webrtc::metrics::Histogram* HistogramFactoryGetCounts(::std::string_view, int, int, int);

MCNAPI ::webrtc::metrics::Histogram* HistogramFactoryGetCountsLinear(::std::string_view, int, int, int);

MCNAPI ::webrtc::metrics::Histogram* HistogramFactoryGetEnumeration(::std::string_view, int);

MCNAPI ::webrtc::metrics::Histogram* SparseHistogramFactoryGetEnumeration(::std::string_view, int);
// NOLINTEND

} // namespace webrtc::metrics
