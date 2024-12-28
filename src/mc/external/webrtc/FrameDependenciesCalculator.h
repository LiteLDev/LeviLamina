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
    // prevent constructor by default
    FrameDependenciesCalculator& operator=(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::absl::InlinedVector<int64, 5, ::std::allocator<int64>>
        FromBuffersUsage(int64, ::rtc::ArrayView<::webrtc::CodecBufferUsage const>);

    MCAPI ~FrameDependenciesCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
