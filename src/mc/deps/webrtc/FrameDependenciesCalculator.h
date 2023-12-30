#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/InlinedVector.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct CodecBufferUsage; }
// clang-format on

namespace webrtc {

class FrameDependenciesCalculator {
public:
    // FrameDependenciesCalculator inner types declare
    // clang-format off
    struct BufferUsage;
    // clang-format on

    // FrameDependenciesCalculator inner types define
    struct BufferUsage {
    public:
        // prevent constructor by default
        BufferUsage& operator=(BufferUsage const&);
        BufferUsage(BufferUsage const&);
        BufferUsage();
    };

public:
    // prevent constructor by default
    FrameDependenciesCalculator& operator=(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator();

public:
    // NOLINTBEGIN
    // symbol:
    // ?FromBuffersUsage@FrameDependenciesCalculator@webrtc@@QEAA?AV?$InlinedVector@_J$04V?$allocator@_J@std@@@absl@@_JV?$ArrayView@$$CBUCodecBufferUsage@webrtc@@$0?BCGH@@rtc@@@Z
    MCAPI class absl::InlinedVector<int64, 5, std::allocator<int64>>
        FromBuffersUsage(int64, class rtc::ArrayView<struct webrtc::CodecBufferUsage const, -4711>);

    // symbol: ??1FrameDependenciesCalculator@webrtc@@QEAA@XZ
    MCAPI ~FrameDependenciesCalculator();

    // NOLINTEND
};

}; // namespace webrtc
