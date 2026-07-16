#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::H264 { struct NaluIndex; }
// clang-format on

namespace webrtc::H264 {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::webrtc::H264::NaluIndex>
FindNaluIndices(::webrtc::ArrayView<uchar const, 18446744073709546905> buffer);
// NOLINTEND

} // namespace webrtc::H264
