#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::H264 { struct NaluIndex; }
// clang-format on

namespace webrtc::H264 {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::webrtc::H264::NaluIndex> FindNaluIndices(uchar const* buffer, uint64 buffer_size);
// NOLINTEND

} // namespace webrtc::H264
