#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct CodecBufferUsage; }
// clang-format on

namespace webrtc {

struct FrameDependenciesCalculator {
public:
    // FrameDependenciesCalculator inner types declare
    // clang-format off
    struct BufferUsage;
    // clang-format on

    // FrameDependenciesCalculator inner types define
    struct BufferUsage {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::absl::InlinedVector<int64, 5, ::std::allocator<int64>>
        FromBuffersUsage(int64, ::rtc::ArrayView<::webrtc::CodecBufferUsage const>);

    MCNAPI ~FrameDependenciesCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
